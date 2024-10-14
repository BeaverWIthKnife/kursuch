#include "Includes.h"
#pragma once
#include <iostream>
#include "Database.h"
#include "AdminForm.h"
#include "ManagerListForm.h"
#include "ManagerForm.h"

namespace Project6 {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    extern Database loginDatabase;

    public ref class LoginForm : public System::Windows::Forms::Form {
    public:
        LoginForm() {
            InitializeComponent();
        }

    protected:
        ~LoginForm() {
            if (components) {
                delete components;
            }
        }

    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Label^ lb_password;
    private: System::Windows::Forms::TextBox^ tb_login;
    private: System::Windows::Forms::TextBox^ tb_password;
    private: System::Windows::Forms::Button^ button1;
    private:
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        void InitializeComponent(void) {
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LoginForm::typeid));
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->lb_password = (gcnew System::Windows::Forms::Label());
            this->tb_login = (gcnew System::Windows::Forms::TextBox());
            this->tb_password = (gcnew System::Windows::Forms::TextBox());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->SuspendLayout();

            // label1
            this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Minecraft Title Cyrillic", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label1->Location = System::Drawing::Point(127, 9);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(310, 54);
            this->label1->TabIndex = 0;
            this->label1->Text = L"Welcome!";
            this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;

            // label2
            this->label2->AutoSize = true;
            this->label2->Font = (gcnew System::Drawing::Font(L"Minecraft Title Cyrillic", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label2->Location = System::Drawing::Point(67, 83);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(137, 38);
            this->label2->TabIndex = 1;
            this->label2->Text = L"login";
            this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;

            // lb_password
            this->lb_password->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->lb_password->AutoSize = true;
            this->lb_password->Font = (gcnew System::Drawing::Font(L"Minecraft Title Cyrillic", 20.25F, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
            this->lb_password->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
            this->lb_password->Location = System::Drawing::Point(12, 157);
            this->lb_password->Name = L"lb_password";
            this->lb_password->Size = System::Drawing::Size(238, 38);
            this->lb_password->TabIndex = 2;
            this->lb_password->Text = L"password";

            // tb_login
            this->tb_login->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->tb_login->Font = (gcnew System::Drawing::Font(L"Impact", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->tb_login->Location = System::Drawing::Point(249, 83);
            this->tb_login->Name = L"tb_login";
            this->tb_login->Size = System::Drawing::Size(311, 40);
            this->tb_login->TabIndex = 3;

            // tb_password
            this->tb_password->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->tb_password->Font = (gcnew System::Drawing::Font(L"Impact", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->tb_password->Location = System::Drawing::Point(249, 155);
            this->tb_password->Name = L"tb_password";
            this->tb_password->Size = System::Drawing::Size(311, 40);
            this->tb_password->TabIndex = 4;

            // button1
            this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->button1->Location = System::Drawing::Point(19, 223);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(541, 40);
            this->button1->TabIndex = 5;
            this->button1->Text = L"Log in";
            this->button1->UseVisualStyleBackColor = true;
            this->button1->Click += gcnew System::EventHandler(this, &LoginForm::button1_Click);

            // LoginForm
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::SystemColors::ActiveCaption;
            this->ClientSize = System::Drawing::Size(572, 275);
            this->Controls->Add(this->button1);
            this->Controls->Add(this->tb_password);
            this->Controls->Add(this->tb_login);
            this->Controls->Add(this->lb_password);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->label1);
            this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
            this->Name = L"LoginForm";
            this->Text = L"Login";
            this->ResumeLayout(false);
            this->PerformLayout();
        }
#pragma endregion
    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
        try {
            Database connect("tcp://127.0.0.1:3306", "root", "12345", "turagentstvo");
            sql::Connection* conn = connect.getConnection();
            std::unique_ptr<sql::PreparedStatement> pstmt(conn->prepareStatement(
                "SELECT number_user, role FROM user WHERE login = ? AND password = ?"));
            pstmt->setString(1, msclr::interop::marshal_as<std::string>(this->tb_login->Text));
            pstmt->setString(2, msclr::interop::marshal_as<std::string>(this->tb_password->Text));

            std::unique_ptr<sql::ResultSet> resultSet(pstmt->executeQuery());
            if (resultSet) {
                if (resultSet->next()) {
                    // Отримуємо роль користувача
                    std::string role = resultSet->getString("role");
                    int userID = resultSet->getInt("number_user");
                    // Перевіряємо значення ролі і відкриваємо відповідну форму
                    this->Hide();
                    if (role == "admin") {
                        // Відкрити форму адміністратора
                        AdminForm^ adminForm = gcnew AdminForm(userID);
                        adminForm->ShowDialog();
                    }
                    else if (role == "manager") {
                        // Відкрити форму менеджера
                        ManagerForm^ managerForm = gcnew ManagerForm(userID);
                        managerForm->ShowDialog();
                    }
                    else {
                        // Якщо роль не визначена
                        MessageBox::Show("Unknown role");
                    }
                    this->Show();
                }
                else {
                    // Якщо результат порожній
                    MessageBox::Show("No results");
                }
            }
            else {
                // Якщо виконання запиту завершилося помилкою
                MessageBox::Show("Query execution failed");
            }
            delete conn;
        }
        catch (sql::SQLException& e) {
            MessageBox::Show("SQL Error: " + gcnew String(e.what()));
        }
        catch (std::exception& e) {
            MessageBox::Show("Error: " + gcnew String(e.what()));
        }
        catch (...) {
            MessageBox::Show("Unknown error occurred.");
        }
    }
    };
}