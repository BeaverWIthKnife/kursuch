#include "Includes.h"
#include "Database.h"
#pragma once

namespace Project6 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MostWantedCountry
	/// </summary>
	public ref class MostWantedCountry : public System::Windows::Forms::Form
	{
	public:
		MostWantedCountry(void)
		{
			InitializeComponent();
			findMostPopularCountry();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MostWantedCountry()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListView^ listView1;
	protected:
	private: System::Windows::Forms::ColumnHeader^ columnHeader11;
	private: System::Windows::Forms::ColumnHeader^ columnHeader12;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::ColumnHeader^ columnHeader1;

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
			this->columnHeader11 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader12 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// listView1
			// 
			this->listView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(3) {
				this->columnHeader11, this->columnHeader12,
					this->columnHeader1
			});
			this->listView1->FullRowSelect = true;
			this->listView1->GridLines = true;
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(28, 89);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(444, 205);
			this->listView1->TabIndex = 47;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader11
			// 
			this->columnHeader11->Text = L"ID_country";
			this->columnHeader11->Width = 132;
			// 
			// columnHeader12
			// 
			this->columnHeader12->Text = L"Name";
			this->columnHeader12->Width = 249;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"Counter";
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Location = System::Drawing::Point(285, 48);
			this->dateTimePicker2->MaxDate = System::DateTime(2025, 1, 1, 0, 0, 0, 0);
			this->dateTimePicker2->MinDate = System::DateTime(2023, 1, 1, 0, 0, 0, 0);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(132, 20);
			this->dateTimePicker2->TabIndex = 107;
			this->dateTimePicker2->Value = System::DateTime(2025, 1, 1, 0, 0, 0, 0);
			this->dateTimePicker2->ValueChanged += gcnew System::EventHandler(this, &MostWantedCountry::dateTimePicker2_ValueChanged);
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(279, 14);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(62, 31);
			this->label3->TabIndex = 106;
			this->label3->Text = L"End";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(79, 48);
			this->dateTimePicker1->MaxDate = System::DateTime(2025, 1, 1, 0, 0, 0, 0);
			this->dateTimePicker1->MinDate = System::DateTime(2023, 1, 1, 0, 0, 0, 0);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(132, 20);
			this->dateTimePicker1->TabIndex = 105;
			this->dateTimePicker1->Value = System::DateTime(2023, 1, 1, 0, 0, 0, 0);
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &MostWantedCountry::dateTimePicker1_ValueChanged);
			// 
			// label9
			// 
			this->label9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(73, 14);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(72, 31);
			this->label9->TabIndex = 104;
			this->label9->Text = L"Start";
			// 
			// MostWantedCountry
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(522, 343);
			this->Controls->Add(this->dateTimePicker2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->listView1);
			this->Name = L"MostWantedCountry";
			this->Text = L"MostWantedCountry";
			this->Load += gcnew System::EventHandler(this, &MostWantedCountry::MostWantedCountry_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		void findMostPopularCountry() {
			listView1->Items->Clear();
			try {
				sql::Driver* driver;
				sql::Connection* con;
				sql::PreparedStatement* pstmt;
				sql::ResultSet* res;

				// З'єднання з базою даних
				driver = get_driver_instance();
				con = driver->connect("tcp://127.0.0.1:3306", "root", "12345");
				con->setSchema("turagentstvo");

				// Виконання SQL запиту
				std::string query = "SELECT co.ID_country , co.Name_of_country, COUNT(*) AS number_of_tours "
					"FROM tour t "
					"INNER JOIN route r ON t.ID_tour = r.ID_tour "
					"INNER JOIN city ci ON r.ID_city = ci.ID_city "
					"INNER JOIN country co ON ci.ID_country = co.ID_country "
					"WHERE t.Date_of_departure BETWEEN ? AND ? "
					"GROUP BY co.Name_of_country "
					"ORDER BY number_of_tours DESC "
					"LIMIT 1;";

				pstmt = con->prepareStatement(query);
				pstmt->setString(1, msclr::interop::marshal_as<std::string>(dateTimePicker1->Value.ToString("yyyy-MM-dd")));
				pstmt->setString(2, msclr::interop::marshal_as<std::string>(dateTimePicker2->Value.ToString("yyyy-MM-dd")));

				res = pstmt->executeQuery();

				// Виведення результатів
				if (res->next()) {
					ListViewItem^ item = gcnew ListViewItem(gcnew String(res->getString("ID_country").c_str()));
					item->SubItems->Add(gcnew ListViewItem::ListViewSubItem(item, gcnew String(res->getString("Name_of_country").c_str())));
					item->SubItems->Add(gcnew ListViewItem::ListViewSubItem(item, gcnew String(res->getString("number_of_tours").c_str())));
					listView1->Items->Add(item);
				}
				else {
				}

				delete res;
				delete pstmt;
				delete con;
			}
			catch (sql::SQLException& e) {
			}
		}
#pragma endregion
	private: System::Void dateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		findMostPopularCountry();
	}
private: System::Void dateTimePicker2_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	findMostPopularCountry();
}
private: System::Void MostWantedCountry_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
