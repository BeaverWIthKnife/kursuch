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
	/// Summary for MostWantedManager
	/// </summary>
	public ref class MostWantedManager : public System::Windows::Forms::Form
	{
	public:
		MostWantedManager(void)
		{
			InitializeComponent();
			findMWM();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MostWantedManager()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListView^ listView1;
	protected:
	private: System::Windows::Forms::ColumnHeader^ columnHeader12;
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
			this->columnHeader12 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->SuspendLayout();
			// 
			// listView1
			// 
			this->listView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(2) { this->columnHeader12, this->columnHeader1 });
			this->listView1->FullRowSelect = true;
			this->listView1->GridLines = true;
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(12, 21);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(453, 205);
			this->listView1->TabIndex = 48;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader12
			// 
			this->columnHeader12->Text = L"Name";
			this->columnHeader12->Width = 249;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"Tours sold";
			this->columnHeader1->Width = 202;
			// 
			// MostWantedManager
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(495, 261);
			this->Controls->Add(this->listView1);
			this->Name = L"MostWantedManager";
			this->Text = L"MostWantedManager";
			this->Load += gcnew System::EventHandler(this, &MostWantedManager::MostWantedManager_Load);
			this->ResumeLayout(false);

		}
		void findMWM() {
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
				std::string query = "SELECT m.Name, COUNT(t.ID_tour) AS Total_Tours_Sold FROM manager m JOIN tour t ON m.ID_manager = t.ID_manager WHERE t.Date_of_departure >= DATE_SUB(CURRENT_DATE(), INTERVAL 1 MONTH) GROUP BY m.ID_manager ORDER BY Total_Tours_Sold DESC LIMIT 1;";

				pstmt = con->prepareStatement(query);


				res = pstmt->executeQuery();

				// Виведення результатів
				if (res->next()) {
					ListViewItem^ item = gcnew ListViewItem(gcnew String(res->getString("Name").c_str()));
					item->SubItems->Add(gcnew ListViewItem::ListViewSubItem(item, gcnew String(res->getString("Total_Tours_Sold").c_str())));
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
	private: System::Void MostWantedManager_Load(System::Object^ sender, System::EventArgs^ e) {

	}
	};
}
