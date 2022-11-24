#pragma once

#include <mysql-cppconn-8/mysqlx/xdevapi.h>

#include <iostream>
#include <string>
// using namespace mysqlx;
class DBConnector {
   private:
    /* data */
    mysqlx::Session db_session;
    mysqlx::Schema db_schema;

   public:
    DBConnector(std::string host = "localhost", int port = 33060,
                std::string user = "test_user", std::string password = "123456",
                std::string db = "test01")
        : db_session(host, port, user, password),
          db_schema(db_session.getSchema(db)) {
        std::cout << "connected to " << db_schema.getName() << std::endl;
    }

    ~DBConnector();

    mysqlx::Schema& db() { return db_schema; }
    mysqlx::Session& session() { return db_session; }
};

DBConnector::~DBConnector() { db_session.close(); }
