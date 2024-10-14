#pragma once

#include <iostream>
#include <mysql_driver.h>
#include <mysql_connection.h>
#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>
#include <cppconn/prepared_statement.h>

class Database {
public:
    Database(const std::string& host, const std::string& user, const std::string& password, const std::string& db) {
        driver = get_driver_instance();
        connection = driver->connect(host, user, password);
        connection->setSchema(db);
    }
    Database() : connection(nullptr) {}

    ~Database() {
    }

    sql::Connection* getConnection() {
        return connection;
    }

private:
    sql::Driver* driver;
    sql::Connection* connection;
};