#include "LoginForm.h"
#include <iostream>
#include "Includes.h"
#include "ClientListForm.h"

using namespace Project6;



using namespace System;
using namespace System::Windows::Forms;

void main() {
    try {
        Database connect("tcp://127.0.0.1:3306", "root", "12345", "turagentstvo");
    }
    catch (sql::SQLException& e) {
        std::cerr << "SQL Error: " << e.what() << std::endl;
        return;
    }


	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project6::LoginForm loginForm;

	loginForm.ShowDialog();





}