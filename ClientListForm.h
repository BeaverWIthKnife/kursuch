#include "Database.h"
#pragma once
#include "Includes.h"
#include "Client.h"
#include <cassert>
#include <iostream>
namespace Project6 {



	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class ClientListForm : public System::Windows::Forms::Form
	{
	public:
		int userID;
		ClientListForm(int numberuser)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			userID = numberuser;
			idLabel->Text = userID.ToString();
			currentDateLabel->Text = System::DateTime::Now.ToString("dd-MM-yyyy");
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ClientListForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::ColumnHeader^ columnHeader1;
	private: System::Windows::Forms::ColumnHeader^ columnHeader2;
	private: System::Windows::Forms::ColumnHeader^ columnHeader3;
	private: System::Windows::Forms::ColumnHeader^ columnHeader4;
	private: System::Windows::Forms::ColumnHeader^ columnHeader5;
	private: System::Windows::Forms::Button^ addButton;
	private: System::Windows::Forms::Button^ removeButton;
	private: System::Windows::Forms::Button^ editButton;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ nameLabel;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ currentDateLabel;
	private: System::Windows::Forms::Label^ idLabel;

	private: System::Windows::Forms::ListView^ listView1;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
	private:
		int selectedClientID; // Для збереження ID вибраного клієнта
		bool isEditMode = false;  // Для відстеження режиму редагування
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		

		void InitializeComponent(void)
		{
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader5 = (gcnew System::Windows::Forms::ColumnHeader());
			this->addButton = (gcnew System::Windows::Forms::Button());
			this->removeButton = (gcnew System::Windows::Forms::Button());
			this->editButton = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->nameLabel = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->currentDateLabel = (gcnew System::Windows::Forms::Label());
			this->idLabel = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// listView1
			// 
			this->listView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(5) {
				this->columnHeader1, this->columnHeader2,
					this->columnHeader3, this->columnHeader4, this->columnHeader5
			});
			this->listView1->FullRowSelect = true;
			this->listView1->GridLines = true;
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(12, 115);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(946, 339);
			this->listView1->TabIndex = 0;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"Id client";
			this->columnHeader1->Width = 148;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Name";
			this->columnHeader2->Width = 271;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"Phone number";
			this->columnHeader3->Width = 226;
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"Date of registration";
			this->columnHeader4->Width = 159;
			// 
			// columnHeader5
			// 
			this->columnHeader5->Text = L"Id manager";
			this->columnHeader5->Width = 154;
			// 
			// addButton
			// 
			this->addButton->Location = System::Drawing::Point(12, 12);
			this->addButton->Name = L"addButton";
			this->addButton->Size = System::Drawing::Size(75, 23);
			this->addButton->TabIndex = 1;
			this->addButton->Text = L"Add";
			this->addButton->UseVisualStyleBackColor = true;
			this->addButton->Click += gcnew System::EventHandler(this, &ClientListForm::addButton_Click);
			// 
			// removeButton
			// 
			this->removeButton->Location = System::Drawing::Point(12, 70);
			this->removeButton->Name = L"removeButton";
			this->removeButton->Size = System::Drawing::Size(75, 23);
			this->removeButton->TabIndex = 2;
			this->removeButton->Text = L"Remove";
			this->removeButton->UseVisualStyleBackColor = true;
			this->removeButton->Click += gcnew System::EventHandler(this, &ClientListForm::removeButton_Click);
			// 
			// editButton
			// 
			this->editButton->Location = System::Drawing::Point(12, 41);
			this->editButton->Name = L"editButton";
			this->editButton->Size = System::Drawing::Size(75, 23);
			this->editButton->TabIndex = 3;
			this->editButton->Text = L"Edit";
			this->editButton->UseVisualStyleBackColor = true;
			this->editButton->Click += gcnew System::EventHandler(this, &ClientListForm::editButton_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(146, 41);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(274, 20);
			this->textBox1->TabIndex = 4;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(426, 41);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(221, 20);
			this->textBox2->TabIndex = 5;
			// 
			// nameLabel
			// 
			this->nameLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->nameLabel->AutoSize = true;
			this->nameLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->nameLabel->Location = System::Drawing::Point(149, 4);
			this->nameLabel->Name = L"nameLabel";
			this->nameLabel->Size = System::Drawing::Size(86, 31);
			this->nameLabel->TabIndex = 6;
			this->nameLabel->Text = L"Name";
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(430, 4);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(190, 31);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Phone number";
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(642, 4);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(177, 31);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Today date is";
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(825, 4);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(133, 31);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Your ID is";
			// 
			// currentDateLabel
			// 
			this->currentDateLabel->AutoSize = true;
			this->currentDateLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->currentDateLabel->Location = System::Drawing::Point(653, 34);
			this->currentDateLabel->Name = L"currentDateLabel";
			this->currentDateLabel->Size = System::Drawing::Size(129, 29);
			this->currentDateLabel->TabIndex = 10;
			this->currentDateLabel->Text = L"01.06.2024";
			// 
			// idLabel
			// 
			this->idLabel->AutoSize = true;
			this->idLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->idLabel->Location = System::Drawing::Point(938, 41);
			this->idLabel->Name = L"idLabel";
			this->idLabel->Size = System::Drawing::Size(0, 29);
			this->idLabel->TabIndex = 11;
			this->currentDateLabel->Text = L"0";
			// 
			// ClientListForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(985, 511);
			this->Controls->Add(this->idLabel);
			this->Controls->Add(this->currentDateLabel);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->nameLabel);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->editButton);
			this->Controls->Add(this->removeButton);
			this->Controls->Add(this->addButton);
			this->Controls->Add(this->listView1);
			this->Name = L"ClientListForm";
			this->Text = L"Client List";
			this->Load += gcnew System::EventHandler(this, &ClientListForm::ClientListForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		void fillListViewFromDB() {
			listView1->Items->Clear(); // Очищаємо ListView перед заповненням

				// З'єднання з базою даних (використовуйте ваші дані)
				Database connect("tcp://127.0.0.1:3306", "root", "12345", "turagentstvo");
				sql::Connection* conn = connect.getConnection();
				// Виконуємо запит до бази даних
				sql::Statement* stmt;
				stmt = conn->createStatement();
				sql::ResultSet* res = stmt->executeQuery("SELECT * FROM client");
				// Додавання рядків до ListView

				while (res->next()) {
					ListViewItem^ item = gcnew ListViewItem(gcnew String(res->getString("ID_client").c_str()));
					item->SubItems->Add(gcnew ListViewItem::ListViewSubItem(item, gcnew String(res->getString("Name").c_str())));
					item->SubItems->Add(gcnew ListViewItem::ListViewSubItem(item, gcnew String(res->getString("Phone_number").c_str())));
					item->SubItems->Add(gcnew ListViewItem::ListViewSubItem(item, gcnew String(res->getString("Date_of_registration").c_str())));
					item->SubItems->Add(gcnew ListViewItem::ListViewSubItem(item, gcnew String(res->getString("ID_manager").c_str())));
					listView1->Items->Add(item);
				}

				MessageBox::Show("41");
				delete res;
				delete stmt;
				delete conn;
				MessageBox::Show("42");
			
	
			MessageBox::Show("28");
		}

		public: void testAddClient() {
			ClientListForm^ form = gcnew ClientListForm(1);
			form->textBox1->Text = "Test Client";
			form->textBox2->Text = "380638466696";

			form->addButton_Click(nullptr, nullptr);
			
			// Перевірка результатів
			assert(form->listView1->Items->Count == 1);
			assert(String::IsNullOrEmpty(form->textBox1->Text));
			assert(String::IsNullOrEmpty(form->textBox2->Text));

			MessageBox::Show("testAddClient passed");
			delete form;
		}

		public: void testEditClient() {
			ClientListForm^ form = gcnew ClientListForm(1);
			form->textBox1->Text = "Test Client";
			form->textBox2->Text = "380638466696";
			form->addButton_Click(nullptr, nullptr);

			form->listView1->Items[0]->Selected = true;
			form->textBox1->Text = "Edited Client";
			form->textBox2->Text = "380638466696";

			form->editButton_Click(nullptr, nullptr);

			// Перевірка результатів
			assert(form->listView1->Items[0]->SubItems[1]->Text == "Edited Client");
			assert(form->listView1->Items[0]->SubItems[2]->Text == "380638466696");

			std::cout << "testEditClient passed" << std::endl;
			delete form;
		}

		public: void testRemoveClient() {
			ClientListForm^ form = gcnew ClientListForm(1);
			form->textBox1->Text = "Test Client";
			form->textBox2->Text = "380638466696";
			form->addButton_Click(nullptr, nullptr);

			form->listView1->Items[0]->Selected = true;
			form->removeButton_Click(nullptr, nullptr);

			// Перевірка результатів
			assert(form->listView1->Items->Count == 0);

			std::cout << "testRemoveClient passed" << std::endl;
			delete form;
		}
#pragma endregion
	private: System::Void ClientListForm_Load(System::Object^ sender, System::EventArgs^ e) {
		fillListViewFromDB();
	}
	private: System::Void addButton_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			// Отримання тексту з textBox1 та textBox2
			System::String^ name = textBox1->Text;
			System::String^ phoneNumber = textBox2->Text;

			// Перевірка на пустий текст
			if (name->Trim() == "" || phoneNumber->Trim() == "") {
				MessageBox::Show("Name and phone number cannot be empty!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			System::Text::RegularExpressions::Regex^ phoneRegex = gcnew System::Text::RegularExpressions::Regex("^380\\d{9}$");
			if (!phoneRegex->IsMatch(phoneNumber)) {
				MessageBox::Show("Phone number must be in the format 380*********", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			// Отримання поточної дати
			System::DateTime currentDate = System::DateTime::Now;

			// Перевірка на валідність дати
			if (currentDate < System::DateTime(1900, 1, 1) || currentDate > System::DateTime(2100, 12, 31)) {
				MessageBox::Show("Invalid date!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			// Отримання ідентифікатора користувача (замість ID_manager)

			// З'єднання з базою даних (використовуйте ваші дані)
			Database connect("tcp://127.0.0.1:3306", "root", "12345", "turagentstvo");
			sql::Connection* conn = connect.getConnection();

			// Виконання запиту INSERT INTO
			sql::PreparedStatement* pstmt = conn->prepareStatement("INSERT INTO client (Name, Phone_number, Date_of_registration, ID_manager) VALUES (?, ?, ?, ?)");
			pstmt->setString(1, msclr::interop::marshal_as<std::string>(name));
			pstmt->setString(2, msclr::interop::marshal_as<std::string>(phoneNumber));
			pstmt->setString(3, msclr::interop::marshal_as<std::string>(currentDate.ToString("yyyy-MM-dd HH:mm:ss")));
			pstmt->setInt(4, userID);
			pstmt->executeUpdate();

			// Очищення textBox1 та textBox2 після вставки
			textBox1->Clear();
			textBox2->Clear();

			// Повідомлення про успішну вставку
			MessageBox::Show("Client added successfully!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);

			// Оновлення ListView після вставки
			fillListViewFromDB();
			MessageBox::Show("44");
			delete pstmt;
			MessageBox::Show("43");
			delete conn;
			MessageBox::Show("45");
		}
		catch (sql::SQLException& e) {
			// Обробка помилок бази даних
			MessageBox::Show("SQL Error: " + gcnew String(e.what()), "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		catch (System::Exception^ ex) {
			// Обробка інших винятків (наприклад, для невалідних дат)
			MessageBox::Show("An error occurred: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		catch (...) {
			MessageBox::Show("46");
		}
		
	}
	private: System::Void editButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (listView1->SelectedItems->Count == 1) {
			if (!isEditMode) {
				// Витягуємо дані вибраного клієнта та заповнюємо текстові поля
				ListViewItem^ selectedItem = listView1->SelectedItems[0];
				selectedClientID = Int32::Parse(selectedItem->SubItems[0]->Text);
				textBox1->Text = selectedItem->SubItems[1]->Text; // Ім'я
				textBox2->Text = selectedItem->SubItems[2]->Text; // Номер телефону
				isEditMode = true;
				editButton->Text = "Save";
			}
			else {
				// Перевірка на пусті поля
				if (String::IsNullOrEmpty(textBox1->Text) || String::IsNullOrEmpty(textBox2->Text)) {
					MessageBox::Show("Choose one to edit!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return;
				}

				try {
					// Оновлюємо дані клієнта в базі даних
					Database connect("tcp://127.0.0.1:3306", "root", "12345", "turagentstvo");
					sql::Connection* conn = connect.getConnection();

					sql::PreparedStatement* pstmt;
					pstmt = conn->prepareStatement("UPDATE client SET Name = ?, Phone_number = ? WHERE ID_client = ?");
					pstmt->setString(1, msclr::interop::marshal_as<std::string>(textBox1->Text));
					pstmt->setString(2, msclr::interop::marshal_as<std::string>(textBox2->Text));
					pstmt->setInt(3, selectedClientID);

					pstmt->executeUpdate();

					delete pstmt;
					delete conn;

					MessageBox::Show("Клієнт успішно оновлений!", "Інформація", MessageBoxButtons::OK, MessageBoxIcon::Information);

					// Очищаємо текстові поля та оновлюємо ListView
					textBox1->Clear();
					textBox2->Clear();
					isEditMode = false;
					editButton->Text = "Edit";
					fillListViewFromDB();
				}
				catch (sql::SQLException& e) {
					MessageBox::Show("SQL Error: " + gcnew String(e.what()), "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}
		}
		else {
			MessageBox::Show("Виберіть клієнта для редагування!", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private: System::Void removeButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (listView1->SelectedItems->Count > 0) {
			// Витягуємо ID вибраного клієнта
			ListViewItem^ selectedItem = listView1->SelectedItems[0];
			selectedClientID = Int32::Parse(selectedItem->SubItems[0]->Text);

			// Відображаємо підтвердження видалення
			System::Windows::Forms::DialogResult result = MessageBox::Show("Are you sure about that?", "Confirm Delete", MessageBoxButtons::YesNo, MessageBoxIcon::Warning);

			if (result == System::Windows::Forms::DialogResult::Yes) {
				try {
					// Видаляємо клієнта з бази даних
					Database connect("tcp://127.0.0.1:3306", "root", "12345", "turagentstvo");
					sql::Connection* conn = connect.getConnection();

					sql::PreparedStatement* pstmt;
					pstmt = conn->prepareStatement("DELETE FROM client WHERE ID_client = ?");
					pstmt->setInt(1, selectedClientID);

					pstmt->executeUpdate();
					delete pstmt;
					// Оновлюємо значення автоінкременту
					std::string alterTableQuery = "ALTER TABLE client AUTO_INCREMENT = " + std::to_string(selectedClientID);
					sql::Statement* stmt = conn->createStatement();
					stmt->execute(alterTableQuery);

					delete conn;

					MessageBox::Show("Клієнт успішно видалений!", "Інформація", MessageBoxButtons::OK, MessageBoxIcon::Information);

					// Оновлюємо ListView
					fillListViewFromDB();
				}
				catch (sql::SQLException& e) {
					MessageBox::Show("SQL Error: " + gcnew String(e.what()), "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}
		}
		else {
			MessageBox::Show("Виберіть клієнта для видалення!", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

};
}
