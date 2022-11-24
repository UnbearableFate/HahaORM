#pragma once
#include <vector>

#include "./entity/company.pb.h"
#include "BaseRepository.h"
class CompanyRepository : public BaseRepository {
   private:
    mysqlx::Table table;

   public:
    CompanyRepository(DBConnector *dbc)
        : BaseRepository(dbc), table(dbconn->db().getTable("company")) {
        this->tableName = "company";
    };
    vector<company> selectAll() {
        auto selectRes = this->table.select("id", "name", "address").execute();
        auto res = CompanyRepository::mysqlRowRes2GMsgVec<company>(
            std::move(selectRes));
        return res;
    }
    ~CompanyRepository(){};
};