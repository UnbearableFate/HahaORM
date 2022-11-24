#pragma once
#include <google/protobuf/descriptor.h>
#include <google/protobuf/message.h>
#include <google/protobuf/timestamp.pb.h>

#include <chrono>
#include <cstddef>
#include <ctime>
#include <iomanip>
#include <map>
#include <memory>
#include <string>
#include <vector>

#include "DBConnector.h"
using namespace std;
using GTimeStamp = google::protobuf::Timestamp;

class BaseRepository {
   protected:
    /* data */
    DBConnector* dbconn;
    string tableName;

    static std::vector<uint64_t> mysqlx_raw_as_u64_vector(
        const mysqlx::Value& in_value) {
        std::vector<uint64_t> out;

        const auto bytes = in_value.getRawBytes();
        auto ptr = reinterpret_cast<const std::byte*>(bytes.first);
        auto end =
            reinterpret_cast<const std::byte*>(bytes.first) + bytes.second;

        while (ptr != end) {
            static constexpr std::byte carry_flag{0b1000'0000};
            static constexpr std::byte value_mask{0b0111'1111};

            uint64_t v = 0;
            uint64_t shift = 0;
            bool is_carry;
            do {
                auto byte = *ptr;
                is_carry = (byte & carry_flag) == carry_flag;
                v |= std::to_integer<uint64_t>(byte & value_mask) << shift;

                ++ptr;
                shift += 7;
            } while (is_carry && ptr != end && shift <= 63);

            out.push_back(v);
        }

        return out;
    }

    static std::chrono::system_clock::time_point read_date_time(
        const mysqlx::Value& value) {
        const auto vector = mysqlx_raw_as_u64_vector(value);
        if (vector.size() < 3)
            throw std::out_of_range{"Value is not a valid DATETIME"};

        auto ymd = std::chrono::year{static_cast<int>(vector.at(0))} /
                   static_cast<int>(vector.at(1)) /
                   static_cast<int>(vector.at(2));
        auto sys_days = std::chrono::sys_days{ymd};

        auto out = std::chrono::system_clock::time_point(sys_days);

        auto it = vector.begin() + 2;
        auto end = vector.end();

        if (++it == end) return out;
        out += std::chrono::hours{*it};

        if (++it == end) return out;
        out += std::chrono::minutes{*it};

        if (++it == end) return out;
        out += std::chrono::seconds{*it};

        if (++it == end) return out;
        out += std::chrono::microseconds{*it};

        return out;
    }

    template <typename T>
    static vector<T> mysqlRowRes2GMsgVec(
        mysqlx::abi2::r0::RowResult&& sqlResRows) {
        static_assert(std::is_base_of<google::protobuf::Message, T>::value,
                      "Derived not derived from BaseClass");
        map<string, int> dbTableColName2Index;
        vector<T> result;
        auto index = 0;
        for (auto col : sqlResRows.getColumns()) {
            dbTableColName2Index.try_emplace(string(col.getColumnName()),
                                             index++);
        }

        for (auto row : sqlResRows) {
            google::protobuf::Message* newMsg = new T();
            for (auto index = 0; index < newMsg->GetDescriptor()->field_count();
                 ++index) {
                auto field = newMsg->GetDescriptor()->field(index);
                auto ref = newMsg->GetReflection();
                if (dbTableColName2Index.count(field->name()) == 0) {
                    continue;
                }
                auto cppType = field->cpp_type();
                using FD = google::protobuf::FieldDescriptor;
                auto value = row.get(dbTableColName2Index[field->name()]);
                switch (cppType) {
                    case FD::CPPTYPE_INT32:
                        ref->SetInt32(newMsg, field, value);
                        break;
                    case FD::CPPTYPE_UINT32:
                        ref->SetUInt32(newMsg, field, value);
                        break;
                    case FD::CPPTYPE_INT64:
                        ref->SetInt64(newMsg, field, value);
                        break;
                    case FD::CPPTYPE_UINT64:
                        ref->SetUInt64(newMsg, field, value);
                        break;
                    case FD::CPPTYPE_DOUBLE:
                        ref->SetDouble(newMsg, field, value);
                        break;
                    case FD::CPPTYPE_FLOAT:
                        ref->SetFloat(newMsg, field, value);
                        break;
                    case FD::CPPTYPE_BOOL:
                        ref->SetBool(newMsg, field, static_cast<bool>(value));
                        break;
                    case FD::CPPTYPE_STRING:
                        ref->SetString(newMsg, field,
                                       static_cast<string>(value));
                        break;
                    case FD::CPPTYPE_MESSAGE:
                        GTimeStamp ts;
                        auto tp = read_date_time(value);
                        ts.set_seconds(tp.time_since_epoch().count());
                        ref->SetAllocatedMessage(newMsg, &ts, field);
                        break;
                }
            }
            result.push_back(*dynamic_cast<T*>(newMsg));
            newMsg = nullptr;
            delete newMsg;
        }
        return result;
    }

   public:
    BaseRepository(DBConnector*);
    ~BaseRepository();
};

BaseRepository::BaseRepository(DBConnector* dbc) : dbconn(dbc) {}

BaseRepository::~BaseRepository() { dbconn = nullptr; }
