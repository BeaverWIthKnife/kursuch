#include "Database.h"
#include "Includes.h"
#pragma once
namespace Project6 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ManagerForm
	/// </summary>
	public ref class ManagerListForm : public System::Windows::Forms::Form
	{
	public:
		int userID;
		ManagerListForm(int number_user)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			userID = number_user;
			dateTimePicker1->Value = System::DateTime::Now;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ManagerListForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label4;
	protected:

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ nameLabel;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ editButton;
	private: System::Windows::Forms::Button^ removeButton;
	private: System::Windows::Forms::Button^ addButton;
	private: System::Windows::Forms::ListView^ listView1;
	private: System::Windows::Forms::ColumnHeader^ columnHeader1;
	private: System::Windows::Forms::ColumnHeader^ columnHeader2;
	private: System::Windows::Forms::ColumnHeader^ columnHeader3;
	private: System::Windows::Forms::ColumnHeader^ address;
	private: System::Windows::Forms::ColumnHeader^ columnHeader4;
	private: System::Windows::Forms::ColumnHeader^ columnHeader5;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox3;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;
	private:
		int selectedManagerID; // Для збереження ID вибраного клієнта
		bool isEditMode = false;  // Для відстеження режиму редагування
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->nameLabel = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->editButton = (gcnew System::Windows::Forms::Button());
			this->removeButton = (gcnew System::Windows::Forms::Button());
			this->addButton = (gcnew System::Windows::Forms::Button());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->address = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader5 = (gcnew System::Windows::Forms::ColumnHeader());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(1099, 49);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(26, 29);
			this->label4->TabIndex = 22;
			this->label4->Text = L"1";
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(1050, 12);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(133, 31);
			this->label3->TabIndex = 20;
			this->label3->Text = L"Your ID is";
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(877, 12);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(72, 31);
			this->label2->TabIndex = 19;
			this->label2->Text = L"Date";
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(430, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(190, 31);
			this->label1->TabIndex = 18;
			this->label1->Text = L"Phone number";
			// 
			// nameLabel
			// 
			this->nameLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->nameLabel->AutoSize = true;
			this->nameLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->nameLabel->Location = System::Drawing::Point(149, 12);
			this->nameLabel->Name = L"nameLabel";
			this->nameLabel->Size = System::Drawing::Size(86, 31);
			this->nameLabel->TabIndex = 17;
			this->nameLabel->Text = L"Name";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(426, 49);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(221, 20);
			this->textBox2->TabIndex = 16;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(146, 49);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(274, 20);
			this->textBox1->TabIndex = 15;
			// 
			// editButton
			// 
			this->editButton->Location = System::Drawing::Point(12, 41);
			this->editButton->Name = L"editButton";
			this->editButton->Size = System::Drawing::Size(75, 23);
			this->editButton->TabIndex = 14;
			this->editButton->Text = L"Edit";
			this->editButton->UseVisualStyleBackColor = true;
			this->editButton->Click += gcnew System::EventHandler(this, &ManagerListForm::editButton_Click);
			// 
			// removeButton
			// 
			this->removeButton->Location = System::Drawing::Point(12, 70);
			this->removeButton->Name = L"removeButton";
			this->removeButton->Size = System::Drawing::Size(75, 23);
			this->removeButton->TabIndex = 13;
			this->removeButton->Text = L"Remove";
			this->removeButton->UseVisualStyleBackColor = true;
			this->removeButton->Click += gcnew System::EventHandler(this, &ManagerListForm::removeButton_Click);
			// 
			// addButton
			// 
			this->addButton->Location = System::Drawing::Point(12, 12);
			this->addButton->Name = L"addButton";
			this->addButton->Size = System::Drawing::Size(75, 23);
			this->addButton->TabIndex = 12;
			this->addButton->Text = L"Add";
			this->addButton->UseVisualStyleBackColor = true;
			this->addButton->Click += gcnew System::EventHandler(this, &ManagerListForm::addButton_Click);
			// 
			// listView1
			// 
			this->listView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(6) {
				this->columnHeader1, this->columnHeader2,
					this->columnHeader3, this->address, this->columnHeader4, this->columnHeader5
			});
			this->listView1->FullRowSelect = true;
			this->listView1->GridLines = true;
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(12, 99);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(1189, 339);
			this->listView1->TabIndex = 23;
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
			// address
			// 
			this->address->Text = L"Address";
			this->address->Width = 226;
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"Date of hiring";
			this->columnHeader4->Width = 159;
			// 
			// columnHeader5
			// 
			this->columnHeader5->Text = L"Id admin";
			this->columnHeader5->Width = 154;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(883, 46);
			this->dateTimePicker1->MaxDate = System::DateTime::Now.AddHours(1);
			this->dateTimePicker1->MinDate = System::DateTime(2024, 1, 1, 0, 0, 0, 0);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(164, 20);
			this->dateTimePicker1->TabIndex = 24;
			this->dateTimePicker1->Value = System::DateTime(2024, 6, 1, 0, 0, 0, 0);
			// 
			// label5
			// 
			this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(653, 12);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(114, 31);
			this->label5->TabIndex = 26;
			this->label5->Text = L"Address";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(649, 49);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(221, 20);
			this->textBox3->TabIndex = 25;
			// 
			// ManagerForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1213, 510);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->nameLabel);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->editButton);
			this->Controls->Add(this->removeButton);
			this->Controls->Add(this->addButton);
			this->Name = L"ManagerForm";
			this->Text = L"Manager List";
			this->Load += gcnew System::EventHandler(this, &ManagerListForm::ManagerForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		void fillListViewFromDB() {
			listView1->Items->Clear(); // Очищаємо ListView перед заповненням

			try {
				// З'єднання з базою даних (використовуйте ваші дані)
				Database connect("tcp://127.0.0.1:3306", "root", "12345", "turagentstvo");
				sql::Connection* conn = connect.getConnection();
				// Виконуємо запит до бази даних
				sql::Statement* stmt;
				stmt = conn->createStatement();
				sql::ResultSet* res = stmt->executeQuery("SELECT * FROM manager");
				// Додавання рядків до ListView

				while (res->next()) {
					ListViewItem^ item = gcnew ListViewItem(gcnew String(res->getString("ID_manager").c_str()));
					item->SubItems->Add(gcnew ListViewItem::ListViewSubItem(item, gcnew String(res->getString("Name").c_str())));
					item->SubItems->Add(gcnew ListViewItem::ListViewSubItem(item, gcnew String(res->getString("Phone_number").c_str())));
					item->SubItems->Add(gcnew ListViewItem::ListViewSubItem(item, gcnew String(res->getString("Address").c_str())));
					item->SubItems->Add(gcnew ListViewItem::ListViewSubItem(item, gcnew String(res->getString("Date_of_hiring").c_str())));
					item->SubItems->Add(gcnew ListViewItem::ListViewSubItem(item, gcnew String(res->getString("ID_admin").c_str())));
					listView1->Items->Add(item);
				}

				delete res;
				delete stmt;
				delete conn;
			}
			catch (sql::SQLException& e) {
				Console::WriteLine("SQL Error: " + gcnew String(e.what()));
			}
		}
#pragma endregion
	private: System::Void ManagerForm_Load(System::Object^ sender, System::EventArgs^ e) {
		fillListViewFromDB();
	}
	private: System::Void addButton_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			// Отримання тексту з textBox1 та textBox2
			System::String^ name = textBox1->Text;
			System::String^ phoneNumber = textBox2->Text;
			System::String^ address = textBox3->Text;
			// Перевірка на пустий текст
			if (name->Trim() == "" || phoneNumber->Trim() == "" || address->Trim() == "") {
				MessageBox::Show("Name phone number and address cannot be empty!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			// Отримання поточної дати
			System::DateTime currentDate = dateTimePicker1->Value;

			// Отримання ідентифікатора користувача (замість ID_manager)

			// З'єднання з базою даних (використовуйте ваші дані)
			Database connect("tcp://127.0.0.1:3306", "root", "12345", "turagentstvo");
			sql::Connection* conn = connect.getConnection();

			// Виконання запиту INSERT INTO
			sql::PreparedStatement* pstmt = conn->prepareStatement("INSERT INTO manager (Name, Phone_number, Address, Date_of_hiring, ID_admin) VALUES (?, ?, ?, ?, ?)");
			pstmt->setString(1, msclr::interop::marshal_as<std::string>(name));
			pstmt->setString(2, msclr::interop::marshal_as<std::string>(phoneNumber));
			pstmt->setString(3, msclr::interop::marshal_as<std::string>(address));
			pstmt->setString(4, msclr::interop::marshal_as<std::string>(currentDate.ToString("yyyy-MM-dd")));
			pstmt->setInt(5, userID);
			pstmt->executeUpdate();

			// Очищення textBox1 та textBox2 після вставки
			textBox1->Clear();
			textBox2->Clear();

			// Повідомлення про успішну вставку
			MessageBox::Show("Manager added successfully!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);

			// Оновлення ListView після вставки
			fillListViewFromDB();

			delete pstmt;
			delete conn;
		}
		catch (sql::SQLException& e) {
			// Обробка помилок бази даних
			MessageBox::Show("SQL Error: " + gcnew String(e.what()), "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		catch (System::Exception^ ex) {
			// Обробка інших винятків (наприклад, для невалідних дат)
			MessageBox::Show("An error occurred: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private: System::Void editButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (listView1->SelectedItems->Count == 1) {
			if (!isEditMode) {
				// Витягуємо дані вибраного клієнта та заповнюємо текстові поля
				ListViewItem^ selectedItem = listView1->SelectedItems[0];
				selectedManagerID = Int32::Parse(selectedItem->SubItems[0]->Text);
				textBox1->Text = selectedItem->SubItems[1]->Text; // Ім'я
				textBox2->Text = selectedItem->SubItems[2]->Text; // Номер телефону
				textBox3->Text = selectedItem->SubItems[3]->Text; // Адреса
				String^ dateStr = selectedItem->SubItems[4]->Text; // Припускається, що дата знаходиться у четвертому стовпці

				// Парсинг рядка з датою до об'єкта DateTime
				DateTime selectedDate;
				if (DateTime::TryParse(dateStr, selectedDate)) {
					// Якщо парсинг пройшов успішно, встановлюємо значення для dateTimePicker1
					dateTimePicker1->Value = selectedDate;
				}
				isEditMode = true;
				editButton->Text = "Save";
			}
			else {
				// Перевірка на пусті поля
				if (String::IsNullOrEmpty(textBox1->Text) || String::IsNullOrEmpty(textBox2->Text) || String::IsNullOrEmpty(textBox3->Text)) {
					MessageBox::Show("Cant be empty!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return;
				}

				try {
					// Оновлюємо дані клієнта в базі даних
					Database connect("tcp://127.0.0.1:3306", "root", "12345", "turagentstvo");
					sql::Connection* conn = connect.getConnection();

					sql::PreparedStatement* pstmt;
					pstmt = conn->prepareStatement("UPDATE manager SET Name = ?, Phone_number = ? , Address = ? , Date_of_hiring = ?  WHERE ID_manager = ? ");
					pstmt->setString(1, msclr::interop::marshal_as<std::string>(textBox1->Text));
					pstmt->setString(2, msclr::interop::marshal_as<std::string>(textBox2->Text));
					pstmt->setString(3, msclr::interop::marshal_as<std::string>(textBox3->Text));
					pstmt->setString(4, msclr::interop::marshal_as<std::string>(dateTimePicker1->Value.ToString("yyyy-MM-dd")));
					pstmt->setInt(5, selectedManagerID);

					pstmt->executeUpdate();

					delete pstmt;
					delete conn;

					MessageBox::Show("Менеджер успішно оновлений!", "Інформація", MessageBoxButtons::OK, MessageBoxIcon::Information);

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
			MessageBox::Show("Виберіть менеджера для редагування!", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private: System::Void removeButton_Click(System::Object^ sender, System::EventArgs^ e) {
		// Витягуємо ID вибраного клієнта
		ListViewItem^ selectedItem = listView1->SelectedItems[0];
		selectedManagerID = Int32::Parse(selectedItem->SubItems[0]->Text);

		// Відображаємо підтвердження видалення
		System::Windows::Forms::DialogResult result = MessageBox::Show("Are you sure about that?", "Confirm Delete", MessageBoxButtons::YesNo, MessageBoxIcon::Warning);

		if (result == System::Windows::Forms::DialogResult::Yes) {
			try {
				// Видаляємо клієнта з бази даних
				Database connect("tcp://127.0.0.1:3306", "root", "12345", "turagentstvo");
				sql::Connection* conn = connect.getConnection();

				sql::PreparedStatement* pstmt;
				pstmt = conn->prepareStatement("DELETE FROM manager WHERE ID_manager = ?");
				pstmt->setInt(1, selectedManagerID);

				pstmt->executeUpdate();
				delete pstmt;
				// Оновлюємо значення автоінкременту
				std::string alterTableQuery = "ALTER TABLE manager AUTO_INCREMENT = " + std::to_string(selectedManagerID);
				sql::Statement* stmt = conn->createStatement();
				stmt->execute(alterTableQuery);

				delete pstmt;
				delete conn;

				MessageBox::Show("Менеджер успішно видалений!", "Інформація", MessageBoxButtons::OK, MessageBoxIcon::Information);

				// Оновлюємо ListView
				fillListViewFromDB();
			}
			catch (sql::SQLException& e) {
				MessageBox::Show("SQL Error: " + gcnew String(e.what()), "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}

		else {
			MessageBox::Show("Виберіть Менеджера для видалення!", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}	
};
}
