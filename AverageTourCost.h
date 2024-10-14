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
	/// Summary for AverageTourCost
	/// </summary>
	public ref class AverageTourCost : public System::Windows::Forms::Form
	{
	public:
		AverageTourCost(void)
		{
			InitializeComponent();
			calculateAverageTourCost();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AverageTourCost()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker2;
	protected:
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::ListView^ listView1;
	private: System::Windows::Forms::ColumnHeader^ columnHeader11;





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
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader11 = (gcnew System::Windows::Forms::ColumnHeader());
			this->SuspendLayout();
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Location = System::Drawing::Point(224, 43);
			this->dateTimePicker2->MaxDate = System::DateTime(2025, 1, 1, 0, 0, 0, 0);
			this->dateTimePicker2->MinDate = System::DateTime(2023, 1, 1, 0, 0, 0, 0);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(132, 20);
			this->dateTimePicker2->TabIndex = 112;
			this->dateTimePicker2->Value = System::DateTime(2025, 1, 1, 0, 0, 0, 0);
			this->dateTimePicker2->ValueChanged += gcnew System::EventHandler(this, &AverageTourCost::dateTimePicker2_ValueChanged);
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(218, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(62, 31);
			this->label3->TabIndex = 111;
			this->label3->Text = L"End";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(18, 43);
			this->dateTimePicker1->MaxDate = System::DateTime(2025, 1, 1, 0, 0, 0, 0);
			this->dateTimePicker1->MinDate = System::DateTime(2023, 1, 1, 0, 0, 0, 0);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(132, 20);
			this->dateTimePicker1->TabIndex = 110;
			this->dateTimePicker1->Value = System::DateTime(2023, 1, 1, 0, 0, 0, 0);
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &AverageTourCost::dateTimePicker1_ValueChanged);
			// 
			// label9
			// 
			this->label9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(12, 9);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(72, 31);
			this->label9->TabIndex = 109;
			this->label9->Text = L"Start";
			// 
			// listView1
			// 
			this->listView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(1) { this->columnHeader11 });
			this->listView1->FullRowSelect = true;
			this->listView1->GridLines = true;
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(116, 89);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(142, 50);
			this->listView1->TabIndex = 108;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader11
			// 
			this->columnHeader11->Text = L"Average Tour Cost";
			this->columnHeader11->Width = 132;
			// 
			// AverageTourCost
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(400, 209);
			this->Controls->Add(this->dateTimePicker2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->listView1);
			this->Name = L"AverageTourCost";
			this->Text = L"AverageTourCost";
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		void calculateAverageTourCost() {
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
				std::string query = "SELECT AVG(t.Cost_of_tour) AS average_cost "
					"FROM tour t "
					"WHERE t.Date_of_departure BETWEEN ? AND ?;";

				pstmt = con->prepareStatement(query);
				pstmt->setString(1, msclr::interop::marshal_as<std::string>(dateTimePicker1->Value.ToString("yyyy-MM-dd")));
				pstmt->setString(2, msclr::interop::marshal_as<std::string>(dateTimePicker2->Value.ToString("yyyy-MM-dd")));

				res = pstmt->executeQuery();

				// Виведення результатів
				if (res->next()) {
					double averageCost = res->getDouble("average_cost");
					if (!res->isNull("average_cost")) {
						ListViewItem^ item = gcnew ListViewItem(averageCost.ToString());
						listView1->Items->Add(item);
					}
					else {
						MessageBox::Show("No valid tour costs found in the given date range.", "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
					}
				}
				else {
					MessageBox::Show("No tours found in the given date range.", "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}

				delete res;
				delete pstmt;
				delete con;
			}
			catch (sql::SQLException& e) {
				MessageBox::Show("SQL Error: " + gcnew String(e.what()), "Database Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			catch (System::Exception^ ex) {
				MessageBox::Show("An error occurred: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}


#pragma endregion
	private: System::Void dateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		calculateAverageTourCost();
	}
private: System::Void dateTimePicker2_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	calculateAverageTourCost();
}
};
}
