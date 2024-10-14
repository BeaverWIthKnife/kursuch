#include "Includes.h"
#pragma once


using namespace std;

class Client {
private:
    int ID_client;
    string Name;
    string Phone_number;
    string Date_of_registration;
    int ID_manager;
public:
    // Конструктор за замовчуванням
    Client() : ID_client(0), Name(""), Phone_number(""), Date_of_registration(""), ID_manager(0) {}

    // Конструктор з параметрами
    Client(int id, string name, string phone, string registrationDate, int managerID) : ID_client(id), Name(name), Phone_number(phone), Date_of_registration(registrationDate), ID_manager(managerID) {}

    // Геттери
    int getIDClient() const { return ID_client; }
    string getName() const { return Name; }
    string getPhoneNumber() const { return Phone_number; }
    string getDateOfRegistration() const { return Date_of_registration; }
    int getIDManager() const { return ID_manager; }

    // Сеттери
    void setIDClient(int id) { ID_client = id; }
    void setName(string name) { Name = name; }
    void setPhoneNumber(string phone) { Phone_number = phone; }
    void setDateOfRegistration(string registrationDate) { Date_of_registration = registrationDate; }
    void setIDManager(int managerID) { ID_manager = managerID; }

    // Метод для додавання нового клієнта до бази даних
    void addClientToDB(sql::Connection* con) {
        try {
            sql::PreparedStatement* prep_stmt = con->prepareStatement("INSERT INTO client (Name, Phone_number, Date_of_registration, ID_manager) VALUES (?, ?, ?, ?)");
            prep_stmt->setString(1, Name);
            prep_stmt->setString(2, Phone_number);
            prep_stmt->setString(3, Date_of_registration);
            prep_stmt->setInt(4, ID_manager);
            prep_stmt->execute();
            delete prep_stmt;
            cout << "Client added to the database successfully." << endl;
        }
        catch (sql::SQLException& e) {
            cout << "SQL Error: " << e.what() << endl;
        }
    }

    // Метод для зчитування даних клієнта з бази даних за його ID
    static Client getClientFromDB(sql::Connection* con, int clientID) {
        Client client;
        try {
            sql::PreparedStatement* prep_stmt = con->prepareStatement("SELECT * FROM client WHERE ID_client = ?");
            prep_stmt->setInt(1, clientID);
            sql::ResultSet* res = prep_stmt->executeQuery();
            if (res->next()) {
                client.setIDClient(res->getInt("ID_client"));
                client.setName(res->getString("Name"));
                client.setPhoneNumber(res->getString("Phone_number"));
                client.setDateOfRegistration(res->getString("Date_of_registration"));
                client.setIDManager(res->getInt("ID_manager"));
            }
            delete res;
            delete prep_stmt;
        }
        catch (sql::SQLException& e) {
            cout << "SQL Error: " << e.what() << endl;
        }
        return client;
    }
};
