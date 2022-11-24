/*
simple tool for creating proto file from mysql table defination.
*/
#include <google/protobuf/descriptor.h>

#include <fstream>
#include <iostream>
#include <map>
#include <sstream>
#include <string>
#include <vector>

#include "../DBConnector.h"
using namespace std;
using mysqlType = mysqlx::abi2::r0::Type;
using FD = google::protobuf::FieldDescriptor;
const std::string proto3Head = "syntax = \"proto3\";";
const std::string importTimestamp =
    "import \"google/protobuf/timestamp.proto\";";
void createProtoFile(DBConnector& dbc, string tableName) {
    auto res = dbc.db().getTable(tableName).select().execute();
    bool isTimestampIncluded = false;
    ofstream ofs("../protobufs/" + tableName + ".proto");
    auto index = 1;
    vector<string> messageFields;
    for (auto col : res.getColumns()) {
        string protoTypeName = "";
        switch (col.getType()) {
            case mysqlType::INT:
            case mysqlType::SMALLINT:
            case mysqlType::MEDIUMINT:
                if (col.isNumberSigned()) {
                    protoTypeName = FD::TypeName(FD::TYPE_UINT32);
                } else {
                    protoTypeName = FD::TypeName(FD::TYPE_INT32);
                }
                break;
            case mysqlType::BIGINT:
                if (col.isNumberSigned()) {
                    protoTypeName = FD::TypeName(FD::TYPE_UINT64);
                } else {
                    protoTypeName = FD::TypeName(FD::TYPE_INT64);
                }
                break;
            case mysqlType::DECIMAL:
                if (col.getFractionalDigits() > 0) {
                    protoTypeName = FD::TypeName(FD::TYPE_DOUBLE);
                } else if (col.getLength() > 11) {
                    protoTypeName = FD::TypeName(FD::TYPE_INT64);
                } else {
                    protoTypeName = FD::TypeName(FD::TYPE_INT32);
                }
                break;
            case mysqlType::DOUBLE:
                protoTypeName = FD::TypeName(FD::TYPE_DOUBLE);
                break;
            case mysqlType::FLOAT:
                protoTypeName = FD::TypeName(FD::TYPE_FLOAT);
                break;
            case mysqlType::TINYINT:
                if (col.getLength() == 1) {
                    protoTypeName = FD::TypeName(FD::TYPE_BOOL);
                } else {
                    protoTypeName = FD::TypeName(FD::TYPE_INT32);
                }
                break;
            case mysqlType::DATE:
            case mysqlType::DATETIME:
            case mysqlType::TIME:
            case mysqlType::TIMESTAMP:
                protoTypeName = "google.protobuf.Timestamp";
                isTimestampIncluded = true;
                break;
            case mysqlType::STRING:
                protoTypeName = FD::TypeName(FD::TYPE_STRING);
                break;
            case mysqlType::BYTES:
                protoTypeName = FD::TypeName(FD::TYPE_BYTES);
                break;
            case mysqlType::BIT:
                protoTypeName = FD::TypeName(FD::TYPE_BOOL);
                break;
            default:
                protoTypeName = FD::TypeName(FD::TYPE_BYTES);
                break;
        }
        stringstream ss;
        ss << "  " << protoTypeName << " " << col.getColumnName() << " = "
           << index++ << ";";
        messageFields.push_back(ss.str());
    }
    ofs << proto3Head << endl;
    if (isTimestampIncluded) {
        ofs << importTimestamp << endl;
    }
    ofs << "message " + tableName + " {" << endl;
    for (auto str : messageFields) {
        ofs << str << std::endl;
    }
    ofs << "}" << endl;
    ofs.close();
}

/*
edit mysql login information (host ,port , user, password ), database name
and protoc parameter if you like;
complete by g++ --std=c++17 table2proto.cpp -lmysqlcppconn8 -lprotobuf
*/
int main(int argc, char* argv[]) {
    auto dbc = DBConnector("localhost", 33060, "test_user", "123456", "test01");
    for (auto tableName : dbc.db().getTableNames()) {
        auto nameStr = string(tableName);
        createProtoFile(dbc, nameStr);
        auto cmd =
            "protoc --proto_path=../protobufs --cpp_out=../entity "
            "../protobufs/" +
            nameStr + ".proto";
        if (system(cmd.c_str()) < 0) {
            printf("error");
        }
    }
    return 0;
}