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
	/// Summary for ClientByCountryForm
	/// </summary>
	public ref class ClientByCountryForm : public System::Windows::Forms::Form
	{
	public:
		ClientByCountryForm(void)
		{
			InitializeComponent();
			fillCountryBoxFromDB();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ClientByCountryForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListView^ listView1;
	protected:
	private: System::Windows::Forms::ColumnHeader^ columnHeader1;
	private: System::Windows::Forms::ColumnHeader^ columnHeader2;
	private: System::Windows::Forms::ColumnHeader^ columnHeader3;
	private: System::Windows::Forms::ColumnHeader^ columnHeader4;
	private: System::Windows::Forms::ColumnHeader^ columnHeader5;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label1;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

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
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
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
			this->listView1->Location = System::Drawing::Point(30, 161);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(995, 339);
			this->listView1->TabIndex = 1;
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
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(55, 81);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(341, 21);
			this->comboBox1->TabIndex = 137;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &ClientByCountryForm::comboBox1_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Minecraft Title Cyrillic", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(43, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(366, 69);
			this->label1->TabIndex = 136;
			this->label1->Text = L"Country";
			// 
			// ClientByCountryForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1072, 587);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listView1);
			this->Name = L"ClientByCountryForm";
			this->Text = L"ClientByCountryForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		void fillCountryBoxFromDB() {
			comboBox1->Items->Clear(); // Очищаємо ComboBox перед заповненням

			try {
				// З'єднання з базою даних
				Database connect("tcp://127.0.0.1:3306", "root", "12345", "turagentstvo");
				sql::Connection* conn = connect.getConnection();

				// Виконуємо запит до бази даних
				sql::Statement* stmt;
				stmt = conn->createStatement();
				sql::ResultSet* res = stmt->executeQuery("SELECT * FROM country");

				// Додавання рядків до ComboBox
				while (res->next()) {
					String^ countryName = gcnew String(res->getString("Name_of_country").c_str());
					comboBox1->Items->Add(countryName);
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
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		listView1->Items->Clear(); // Очищаємо ListView перед заповненням
		try {
			// З'єднання з базою даних (використовуйте ваші дані)
			Database connect("tcp://127.0.0.1:3306", "root", "12345", "turagentstvo");
			sql::Connection* conn = connect.getConnection();
			// Виконуємо запит до бази даних
			sql::Statement* stmt;
			stmt = conn->createStatement();
			sql::ResultSet* res = stmt->executeQuery("SELECT c.* "
				"FROM client c "
				"INNER JOIN tour t ON c.ID_client = t.ID_client "
				"INNER JOIN route r ON t.ID_tour = r.ID_tour "
				"INNER JOIN city ci ON r.ID_city = ci.ID_city "
				"INNER JOIN country co ON ci.ID_country = co.ID_country "
				"WHERE co.Name_of_country = '" + msclr::interop::marshal_as<std::string>(comboBox1->Text) + "'");

			// Додавання рядків до ListView

			while (res->next()) {
				ListViewItem^ item = gcnew ListViewItem(gcnew String(res->getString("ID_client").c_str()));
				item->SubItems->Add(gcnew ListViewItem::ListViewSubItem(item, gcnew String(res->getString("Name").c_str())));
				item->SubItems->Add(gcnew ListViewItem::ListViewSubItem(item, gcnew String(res->getString("Phone_number").c_str())));
				item->SubItems->Add(gcnew ListViewItem::ListViewSubItem(item, gcnew String(res->getString("Date_of_registration").c_str())));
				item->SubItems->Add(gcnew ListViewItem::ListViewSubItem(item, gcnew String(res->getString("ID_manager").c_str())));
				listView1->Items->Add(item);
			}


			delete res;
			delete stmt;
			delete conn;
		}
		catch (sql::SQLException& e) {
			MessageBox::Show("SQL Error: " + gcnew String(e.what()));
		}
	}
};
}
