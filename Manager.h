#include "Includes.h"
#pragma once

using namespace std;

class Manager {
private:
    int ID_manager;
    string Name;
    string Phone_number;
    string Address;
    string Date_of_hiring;
    int ID_admin;

public:
    // Constructors
    Manager() {}
    Manager(int id, string name, string phone, string address, string date, int admin_id)
        : ID_manager(id), Name(name), Phone_number(phone), Address(address), Date_of_hiring(date), ID_admin(admin_id) {}

    // Getters
    int getID_manager() { return ID_manager; }
    string getName() { return Name; }
    string getPhone_number() { return Phone_number; }
    string getAddress() { return Address; }
    string getDate_of_hiring() { return Date_of_hiring; }
    int getID_admin() { return ID_admin; }

    // Setters
    void setID_manager(int id) { ID_manager = id; }
    void setName(string name) { Name = name; }
    void setPhone_number(string phone) { Phone_number = phone; }
    void setAddress(string address) { Address = address; }
    void setDate_of_hiring(string date) { Date_of_hiring = date; }
    void setID_admin(int admin_id) { ID_admin = admin_id; }

    // Method to add manager to the database
    void addToDB() {
        try {
            sql::mysql::MySQL_Driver* driver;
            sql::Connection* con;
            sql::PreparedStatement* pstmt;

            driver = sql::mysql::get_mysql_driver_instance();
            con = driver->connect("tcp://127.0.0.1:3306", "root", "1234");
            con->setSchema("turagentstvo");

            pstmt = con->prepareStatement("INSERT INTO manager(Name, `Phone number`, Address, `Date of hiring`, ID_admin) VALUES (?, ?, ?, ?, ?)");
            pstmt->setString(1, Name);
            pstmt->setString(2, Phone_number);
            pstmt->setString(3, Address);
            pstmt->setString(4, Date_of_hiring);
            pstmt->setInt(5, ID_admin);
            pstmt->executeUpdate();

            delete pstmt;
            delete con;
        }
        catch (sql::SQLException& e) {
            cout << "SQL Error: " << e.what() << endl;
        }
    }

    // Method to read all managers from the database
    static void readFromDB() {
        try {
            sql::mysql::MySQL_Driver* driver;
            sql::Connection* con;
            sql::Statement* stmt;
            sql::ResultSet* res;

            driver = sql::mysql::get_mysql_driver_instance();
            con = driver->connect("tcp://127.0.0.1:3306", "root", "1234");
            con->setSchema("turagentstvo");

            stmt = con->createStatement();
            res = stmt->executeQuery("SELECT * FROM manager");

            while (res->next()) {
                cout << "ID_manager: " << res->getInt("ID_manager")
                    << ", Name: " << res->getString("Name")
                    << ", Phone number: " << res->getString("Phone number")
                    << ", Address: " << res->getString("Address")
                    << ", Date of hiring: " << res->getString("Date of hiring")
                    << ", ID_admin: " << res->getInt("ID_admin") << endl;
            }

            delete res;
            delete stmt;
            delete con;
        }
        catch (sql::SQLException& e) {
            cout << "SQL Error: " << e.what() << endl;
        }
    }
};