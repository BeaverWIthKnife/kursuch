#include "Includes.h"
#include "Database.h"
#include "ClientByCountryForm.h"
#include "MostWantedCountry.h"
#include "AverageTourCost.h"
#include "MostWantedManager.h"
#pragma once

namespace Project6 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for TourForm
	/// </summary>
	public ref class TourForm : public System::Windows::Forms::Form
	{
	public:
		TourForm(void)
		{
			InitializeComponent();
			fillTourListViewFromDB();
			fillCityBoxFromDB(comboBox3);
			fillCityBoxFromDB(comboBox6);
			fillCountryBoxFromDB(comboBox5);

			dateTimePicker1->MaxDate = System::DateTime(dateTimePicker2->Value.Year, dateTimePicker2->Value.Month, dateTimePicker2->Value.Day, 0, 0, 0, 0);
			dateTimePicker2->MinDate = System::DateTime(dateTimePicker1->Value.Year, dateTimePicker1->Value.Month, dateTimePicker1->Value.Day, 0, 0, 0, 0);
			dateTimePicker5->MaxDate = System::DateTime(dateTimePicker2->Value.Year, dateTimePicker2->Value.Month, dateTimePicker2->Value.Day, 0, 0, 0, 0);
			dateTimePicker4->MinDate = System::DateTime(dateTimePicker1->Value.Year, dateTimePicker1->Value.Month, dateTimePicker1->Value.Day, 0, 0, 0, 0);
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		~TourForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ editTour;
	private: System::Windows::Forms::Button^ removeTour;
	protected:

	protected:

	private: System::Windows::Forms::Button^ addTour;

	private: System::Windows::Forms::ListView^ listView1;

	private: System::Windows::Forms::ColumnHeader^ columnHeader11;
	private: System::Windows::Forms::ColumnHeader^ columnHeader12;
	private: System::Windows::Forms::ColumnHeader^ columnHeader1;

	private: System::Windows::Forms::ColumnHeader^ columnHeader8;
	private: System::Windows::Forms::ColumnHeader^ columnHeader9;
	private: System::Windows::Forms::ColumnHeader^ columnHeader13;

	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker3;
	private: System::Windows::Forms::Label^ label7;


	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ removeRout;

	private: System::Windows::Forms::Button^ addRoute;

	private: System::Windows::Forms::ListView^ listView2;

	private: System::Windows::Forms::ColumnHeader^ columnHeader2;
	private: System::Windows::Forms::ColumnHeader^ columnHeader6;
	private: System::Windows::Forms::ColumnHeader^ columnHeader7;
	private: System::Windows::Forms::ColumnHeader^ columnHeader3;
	private: System::Windows::Forms::ColumnHeader^ columnHeader4;


	private: System::Windows::Forms::DateTimePicker^ dateTimePicker4;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker5;
	private: System::Windows::Forms::Label^ label10;



	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::ListView^ listView3;
	private: System::Windows::Forms::ColumnHeader^ columnHeader10;
	private: System::Windows::Forms::ColumnHeader^ columnHeader14;
	private: System::Windows::Forms::ColumnHeader^ columnHeader15;
	private: System::Windows::Forms::ColumnHeader^ columnHeader16;
	private: System::Windows::Forms::ColumnHeader^ columnHeader17;
	private: System::Windows::Forms::ColumnHeader^ columnHeader18;
	private: System::Windows::Forms::ColumnHeader^ ID_tour;


	private: System::Windows::Forms::Label^ label15;

	private: System::Windows::Forms::Label^ label16;


	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;
		int selectedManagerID=0; // Для збереження ID вибраного клієнта
		int cost;
private: System::Windows::Forms::ComboBox^ comboBox3;
private: System::Windows::Forms::ComboBox^ comboBox4;
private: System::Windows::Forms::Button^ clientListButton;
private: System::Windows::Forms::Button^ button3;
private: System::Windows::Forms::Button^ button4;
private: System::Windows::Forms::ComboBox^ comboBox5;
private: System::Windows::Forms::ComboBox^ comboBox6;
private: System::Windows::Forms::ComboBox^ hotelBox;
private: System::Windows::Forms::Button^ button5;
private: System::Windows::Forms::ColumnHeader^ columnHeader5;



	   bool isEditMode = false;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->editTour = (gcnew System::Windows::Forms::Button());
			this->removeTour = (gcnew System::Windows::Forms::Button());
			this->addTour = (gcnew System::Windows::Forms::Button());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader11 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader12 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader8 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader9 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader13 = (gcnew System::Windows::Forms::ColumnHeader());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker3 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->removeRout = (gcnew System::Windows::Forms::Button());
			this->addRoute = (gcnew System::Windows::Forms::Button());
			this->listView2 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader6 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader7 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->dateTimePicker4 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker5 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->listView3 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader10 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader14 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader15 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader16 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader17 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader18 = (gcnew System::Windows::Forms::ColumnHeader());
			this->ID_tour = (gcnew System::Windows::Forms::ColumnHeader());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->clientListButton = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox6 = (gcnew System::Windows::Forms::ComboBox());
			this->hotelBox = (gcnew System::Windows::Forms::ComboBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->columnHeader5 = (gcnew System::Windows::Forms::ColumnHeader());
			this->SuspendLayout();
			// 
			// editTour
			// 
			this->editTour->Location = System::Drawing::Point(12, 43);
			this->editTour->Name = L"editTour";
			this->editTour->Size = System::Drawing::Size(127, 23);
			this->editTour->TabIndex = 49;
			this->editTour->Text = L"Edit";
			this->editTour->UseVisualStyleBackColor = true;
			this->editTour->Click += gcnew System::EventHandler(this, &TourForm::editTour_Click);
			// 
			// removeTour
			// 
			this->removeTour->Location = System::Drawing::Point(12, 72);
			this->removeTour->Name = L"removeTour";
			this->removeTour->Size = System::Drawing::Size(127, 23);
			this->removeTour->TabIndex = 48;
			this->removeTour->Text = L"Remove";
			this->removeTour->UseVisualStyleBackColor = true;
			this->removeTour->Click += gcnew System::EventHandler(this, &TourForm::removeTour_Click);
			// 
			// addTour
			// 
			this->addTour->Location = System::Drawing::Point(12, 14);
			this->addTour->Name = L"addTour";
			this->addTour->Size = System::Drawing::Size(127, 23);
			this->addTour->TabIndex = 47;
			this->addTour->Text = L"Add";
			this->addTour->UseVisualStyleBackColor = true;
			this->addTour->Click += gcnew System::EventHandler(this, &TourForm::addTour_Click);
			// 
			// listView1
			// 
			this->listView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(6) {
				this->columnHeader11, this->columnHeader12,
					this->columnHeader1, this->columnHeader8, this->columnHeader9, this->columnHeader13
			});
			this->listView1->FullRowSelect = true;
			this->listView1->GridLines = true;
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(12, 101);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(1034, 205);
			this->listView1->TabIndex = 46;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			this->listView1->SelectedIndexChanged += gcnew System::EventHandler(this, &TourForm::listView1_SelectedIndexChanged);
			// 
			// columnHeader11
			// 
			this->columnHeader11->Text = L"ID tour";
			this->columnHeader11->Width = 132;
			// 
			// columnHeader12
			// 
			this->columnHeader12->Text = L"ID client";
			this->columnHeader12->Width = 249;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"ID manager";
			this->columnHeader1->Width = 222;
			// 
			// columnHeader8
			// 
			this->columnHeader8->Text = L"Date and time of departure";
			this->columnHeader8->Width = 159;
			// 
			// columnHeader9
			// 
			this->columnHeader9->Text = L"Date and time of arrival";
			this->columnHeader9->Width = 135;
			// 
			// columnHeader13
			// 
			this->columnHeader13->Text = L"Cost";
			this->columnHeader13->Width = 209;
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(139, 43);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(84, 31);
			this->label4->TabIndex = 94;
			this->label4->Text = L"Client";
			this->label4->Click += gcnew System::EventHandler(this, &TourForm::label4_Click);
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(384, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(120, 31);
			this->label1->TabIndex = 96;
			this->label1->Text = L"Manager";
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(6, 369);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(279, 31);
			this->label2->TabIndex = 98;
			this->label2->Text = L"Routs of selected tour";
			this->label2->Click += gcnew System::EventHandler(this, &TourForm::label2_Click);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(617, 74);
			this->dateTimePicker1->MaxDate = System::DateTime(2025, 1, 1, 0, 0, 0, 0);
			this->dateTimePicker1->MinDate = System::DateTime(2023, 1, 1, 0, 0, 0, 0);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(132, 20);
			this->dateTimePicker1->TabIndex = 101;
			this->dateTimePicker1->Value = System::DateTime(2024, 1, 1, 0, 0, 0, 0);
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &TourForm::dateTimePicker1_ValueChanged);
			// 
			// label9
			// 
			this->label9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(615, 35);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(134, 31);
			this->label9->TabIndex = 100;
			this->label9->Text = L"Departute";
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Location = System::Drawing::Point(755, 74);
			this->dateTimePicker2->MaxDate = System::DateTime(2025, 1, 1, 0, 0, 0, 0);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(132, 20);
			this->dateTimePicker2->TabIndex = 103;
			this->dateTimePicker2->Value = System::DateTime(2024, 1, 1, 0, 0, 0, 0);
			this->dateTimePicker2->ValueChanged += gcnew System::EventHandler(this, &TourForm::dateTimePicker2_ValueChanged);
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(755, 33);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(91, 31);
			this->label3->TabIndex = 102;
			this->label3->Text = L"Arrival";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(893, 71);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(123, 23);
			this->button2->TabIndex = 105;
			this->button2->Text = L"Calculate cost";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &TourForm::button2_Click);
			// 
			// label5
			// 
			this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(887, 40);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(71, 31);
			this->label5->TabIndex = 104;
			this->label5->Text = L"Cost";
			// 
			// dateTimePicker3
			// 
			this->dateTimePicker3->Location = System::Drawing::Point(372, 445);
			this->dateTimePicker3->MaxDate = System::DateTime(2025, 6, 1, 18, 44, 20, 0);
			this->dateTimePicker3->MinDate = System::DateTime(2024, 1, 1, 0, 0, 0, 0);
			this->dateTimePicker3->Name = L"dateTimePicker3";
			this->dateTimePicker3->Size = System::Drawing::Size(132, 20);
			this->dateTimePicker3->TabIndex = 114;
			this->dateTimePicker3->Value = System::DateTime(2024, 6, 1, 0, 0, 0, 0);
			// 
			// label7
			// 
			this->label7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(366, 413);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(72, 31);
			this->label7->TabIndex = 113;
			this->label7->Text = L"Date";
			// 
			// label6
			// 
			this->label6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(220, 413);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(131, 31);
			this->label6->TabIndex = 110;
			this->label6->Text = L"Transport";
			// 
			// label8
			// 
			this->label8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(93, 413);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(62, 31);
			this->label8->TabIndex = 109;
			this->label8->Text = L"City";
			this->label8->Click += gcnew System::EventHandler(this, &TourForm::label8_Click);
			// 
			// removeRout
			// 
			this->removeRout->Location = System::Drawing::Point(12, 452);
			this->removeRout->Name = L"removeRout";
			this->removeRout->Size = System::Drawing::Size(66, 23);
			this->removeRout->TabIndex = 108;
			this->removeRout->Text = L"Remove";
			this->removeRout->UseVisualStyleBackColor = true;
			this->removeRout->Click += gcnew System::EventHandler(this, &TourForm::removeRout_Click);
			// 
			// addRoute
			// 
			this->addRoute->Location = System::Drawing::Point(12, 423);
			this->addRoute->Name = L"addRoute";
			this->addRoute->Size = System::Drawing::Size(66, 23);
			this->addRoute->TabIndex = 107;
			this->addRoute->Text = L"Add";
			this->addRoute->UseVisualStyleBackColor = true;
			this->addRoute->Click += gcnew System::EventHandler(this, &TourForm::addRoute_Click);
			// 
			// listView2
			// 
			this->listView2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->listView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(5) {
				this->columnHeader2, this->columnHeader6,
					this->columnHeader7, this->columnHeader3, this->columnHeader4
			});
			this->listView2->FullRowSelect = true;
			this->listView2->GridLines = true;
			this->listView2->HideSelection = false;
			this->listView2->Location = System::Drawing::Point(12, 481);
			this->listView2->Name = L"listView2";
			this->listView2->Size = System::Drawing::Size(612, 205);
			this->listView2->TabIndex = 106;
			this->listView2->UseCompatibleStateImageBehavior = false;
			this->listView2->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"ID route";
			this->columnHeader2->Width = 74;
			// 
			// columnHeader6
			// 
			this->columnHeader6->Text = L"City";
			this->columnHeader6->Width = 129;
			// 
			// columnHeader7
			// 
			this->columnHeader7->Text = L"ID transpot";
			this->columnHeader7->Width = 144;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"Date";
			this->columnHeader3->Width = 154;
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"Cost";
			this->columnHeader4->Width = 140;
			// 
			// dateTimePicker4
			// 
			this->dateTimePicker4->Location = System::Drawing::Point(1496, 456);
			this->dateTimePicker4->MaxDate = System::DateTime(2024, 6, 1, 18, 44, 20, 0);
			this->dateTimePicker4->MinDate = System::DateTime(2024, 1, 1, 0, 0, 0, 0);
			this->dateTimePicker4->Name = L"dateTimePicker4";
			this->dateTimePicker4->Size = System::Drawing::Size(132, 20);
			this->dateTimePicker4->TabIndex = 129;
			this->dateTimePicker4->Value = System::DateTime(2024, 6, 1, 0, 0, 0, 0);
			this->dateTimePicker4->ValueChanged += gcnew System::EventHandler(this, &TourForm::dateTimePicker4_ValueChanged);
			// 
			// label13
			// 
			this->label13->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->Location = System::Drawing::Point(1490, 413);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(147, 31);
			this->label13->TabIndex = 128;
			this->label13->Text = L"Date of out";
			// 
			// dateTimePicker5
			// 
			this->dateTimePicker5->Location = System::Drawing::Point(1354, 456);
			this->dateTimePicker5->MaxDate = System::DateTime(2024, 6, 1, 18, 44, 20, 0);
			this->dateTimePicker5->MinDate = System::DateTime(2024, 1, 1, 0, 0, 0, 0);
			this->dateTimePicker5->Name = L"dateTimePicker5";
			this->dateTimePicker5->Size = System::Drawing::Size(132, 20);
			this->dateTimePicker5->TabIndex = 127;
			this->dateTimePicker5->Value = System::DateTime(2024, 6, 1, 0, 0, 0, 0);
			this->dateTimePicker5->ValueChanged += gcnew System::EventHandler(this, &TourForm::dateTimePicker5_ValueChanged);
			// 
			// label10
			// 
			this->label10->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(1348, 413);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(130, 31);
			this->label10->TabIndex = 126;
			this->label10->Text = L"Date of in";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(700, 452);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 122;
			this->button1->Text = L"Remove";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &TourForm::removeRoom_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(700, 423);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 23);
			this->button8->TabIndex = 121;
			this->button8->Text = L"Add";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &TourForm::button8_Click);
			// 
			// label12
			// 
			this->label12->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(849, 413);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(152, 31);
			this->label12->TabIndex = 120;
			this->label12->Text = L"Hotel name";
			// 
			// listView3
			// 
			this->listView3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->listView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(8) {
				this->columnHeader5, this->columnHeader10,
					this->columnHeader14, this->columnHeader15, this->columnHeader16, this->columnHeader17, this->columnHeader18, this->ID_tour
			});
			this->listView3->FullRowSelect = true;
			this->listView3->GridLines = true;
			this->listView3->HideSelection = false;
			this->listView3->Location = System::Drawing::Point(700, 481);
			this->listView3->Name = L"listView3";
			this->listView3->Size = System::Drawing::Size(958, 205);
			this->listView3->TabIndex = 119;
			this->listView3->UseCompatibleStateImageBehavior = false;
			this->listView3->View = System::Windows::Forms::View::Details;
			this->listView3->SelectedIndexChanged += gcnew System::EventHandler(this, &TourForm::listView3_SelectedIndexChanged);
			// 
			// columnHeader10
			// 
			this->columnHeader10->DisplayIndex = 0;
			this->columnHeader10->Text = L"ID room";
			this->columnHeader10->Width = 82;
			this->columnHeader10->DisplayIndex = 1;
			this->columnHeader10->Text = L"ID hotel";
			this->columnHeader10->Width = 82;
			// 
			// columnHeader14
			// 
			this->columnHeader14->DisplayIndex = 2;
			this->columnHeader14->Text = L"Hotel name";
			this->columnHeader14->Width = 192;
			// 
			// columnHeader15
			// 
			this->columnHeader15->DisplayIndex = 3;
			this->columnHeader15->Text = L"Class";
			this->columnHeader15->Width = 102;
			// 
			// columnHeader16
			// 
			this->columnHeader16->DisplayIndex = 4;
			this->columnHeader16->Text = L"Cost";
			this->columnHeader16->Width = 106;
			// 
			// columnHeader17
			// 
			this->columnHeader17->DisplayIndex = 5;
			this->columnHeader17->Text = L"Quantity of beds";
			this->columnHeader17->Width = 119;
			// 
			// columnHeader18
			// 
			this->columnHeader18->DisplayIndex = 6;
			this->columnHeader18->Text = L"Date of in";
			this->columnHeader18->Width = 148;
			// 
			// ID_tour
			// 
			this->ID_tour->DisplayIndex = 7;
			this->ID_tour->Text = L"Date of out";
			this->ID_tour->Width = 137;
			// 
			// label15
			// 
			this->label15->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label15->Location = System::Drawing::Point(1217, 324);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(62, 31);
			this->label15->TabIndex = 117;
			this->label15->Text = L"City";
			// 
			// label16
			// 
			this->label16->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label16->Location = System::Drawing::Point(993, 324);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(110, 31);
			this->label16->TabIndex = 115;
			this->label16->Text = L"Country";
			// 
			// label17
			// 
			this->label17->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label17->Location = System::Drawing::Point(694, 355);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(293, 31);
			this->label17->TabIndex = 132;
			this->label17->Text = L"Rooms of selected tour";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(145, 74);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(228, 21);
			this->comboBox1->TabIndex = 133;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(390, 74);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(183, 21);
			this->comboBox2->TabIndex = 134;
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(84, 444);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(123, 21);
			this->comboBox3->TabIndex = 135;
			this->comboBox3->SelectedIndexChanged += gcnew System::EventHandler(this, &TourForm::comboBox3_SelectedIndexChanged);
			// 
			// comboBox4
			// 
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Location = System::Drawing::Point(226, 444);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(123, 21);
			this->comboBox4->TabIndex = 136;
			this->comboBox4->SelectedIndexChanged += gcnew System::EventHandler(this, &TourForm::comboBox4_SelectedIndexChanged);
			// 
			// clientListButton
			// 
			this->clientListButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->clientListButton->Font = (gcnew System::Drawing::Font(L"Minecraft Title Cyrillic", 24, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->clientListButton->Location = System::Drawing::Point(1073, 33);
			this->clientListButton->Name = L"clientListButton";
			this->clientListButton->Size = System::Drawing::Size(698, 52);
			this->clientListButton->TabIndex = 137;
			this->clientListButton->Text = L"show client by country";
			this->clientListButton->UseVisualStyleBackColor = true;
			this->clientListButton->Click += gcnew System::EventHandler(this, &TourForm::clientListButton_Click);
			// 
			// button3
			// 
			this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button3->Font = (gcnew System::Drawing::Font(L"Minecraft Title Cyrillic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(1073, 101);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(698, 52);
			this->button3->TabIndex = 138;
			this->button3->Text = L"show most wanted country";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &TourForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button4->Font = (gcnew System::Drawing::Font(L"Minecraft Title Cyrillic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(1073, 170);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(698, 52);
			this->button4->TabIndex = 139;
			this->button4->Text = L"show average tour cost";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &TourForm::button4_Click);
			// 
			// comboBox5
			// 
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Location = System::Drawing::Point(999, 367);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(123, 21);
			this->comboBox5->TabIndex = 140;
			this->comboBox5->SelectedIndexChanged += gcnew System::EventHandler(this, &TourForm::comboBox5_SelectedIndexChanged);
			// 
			// comboBox6
			// 
			this->comboBox6->FormattingEnabled = true;
			this->comboBox6->Location = System::Drawing::Point(1196, 367);
			this->comboBox6->Name = L"comboBox6";
			this->comboBox6->Size = System::Drawing::Size(123, 21);
			this->comboBox6->TabIndex = 141;
			this->comboBox6->SelectedIndexChanged += gcnew System::EventHandler(this, &TourForm::comboBox6_SelectedIndexChanged);
			// 
			// hotelBox
			// 
			this->hotelBox->FormattingEnabled = true;
			this->hotelBox->Location = System::Drawing::Point(845, 452);
			this->hotelBox->Name = L"hotelBox";
			this->hotelBox->Size = System::Drawing::Size(184, 21);
			this->hotelBox->TabIndex = 142;
			this->hotelBox->SelectedIndexChanged += gcnew System::EventHandler(this, &TourForm::hotelBox_SelectedIndexChanged);
			// 
			// button5
			// 
			this->button5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button5->Font = (gcnew System::Drawing::Font(L"Minecraft Title Cyrillic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(1073, 244);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(698, 52);
			this->button5->TabIndex = 143;
			this->button5->Text = L"show most productive manager of month";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &TourForm::button5_Click);
			// 
			// columnHeader5
			// 
			this->columnHeader5->Text = L"ID_room";
			// 
			// TourForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1783, 791);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->hotelBox);
			this->Controls->Add(this->comboBox6);
			this->Controls->Add(this->comboBox5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->clientListButton);
			this->Controls->Add(this->comboBox4);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->dateTimePicker4);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->dateTimePicker5);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->listView3);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->dateTimePicker3);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->removeRout);
			this->Controls->Add(this->addRoute);
			this->Controls->Add(this->listView2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->dateTimePicker2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->editTour);
			this->Controls->Add(this->removeTour);
			this->Controls->Add(this->addTour);
			this->Controls->Add(this->listView1);
			this->Name = L"TourForm";
			this->Text = L"TourForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		void fillCountryBoxFromDB(System::Windows::Forms::ComboBox^ comboBox) {
			comboBox->Items->Clear(); // Очищаємо ComboBox перед заповненням

			try {
				// З'єднання з базою даних
				Database connect("tcp://127.0.0.1:3306", "root", "12345", "turagentstvo");
				sql::Connection* conn = connect.getConnection();

				// Виконуємо запит до бази даних
				sql::Statement* stmt;
				stmt = conn->createStatement();
				sql::ResultSet* res = stmt->executeQuery("SELECT * FROM country ORDER BY Name_of_country");

				// Додавання рядків до ComboBox
				while (res->next()) {
					String^ countryName = gcnew String(res->getString("Name_of_country").c_str());
					comboBox->Items->Add(countryName);
				}

				delete res;
				delete stmt;
				delete conn;
			}
			catch (sql::SQLException& e) {
				Console::WriteLine("SQL Error: " + gcnew String(e.what()));
			}
			catch (std::exception& e) {
				MessageBox::Show("Error: " + gcnew String(e.what()));
			}
		}

		void fillManagerBoxFromDB(System::Windows::Forms::ComboBox^ comboBox) {
			comboBox->Items->Clear(); // Очищаємо ComboBox перед заповненням

			try {
				// З'єднання з базою даних
				Database connect("tcp://127.0.0.1:3306", "root", "12345", "turagentstvo");
				sql::Connection* conn = connect.getConnection();

				// Виконуємо запит до бази даних
				sql::Statement* stmt;
				stmt = conn->createStatement();
				sql::ResultSet* res = stmt->executeQuery("SELECT * FROM manager ORDER BY Name_of_manager");

				// Додавання рядків до ComboBox
				while (res->next()) {
					String^ hotelName = gcnew String(res->getString("Name").c_str());
					comboBox->Items->Add(hotelName);
				}

				delete res;
				delete stmt;
				delete conn;
			}
			catch (sql::SQLException& e) {
				Console::WriteLine("SQL Error: " + gcnew String(e.what()));
			}
		}

		void fillClientBoxFromDB(System::Windows::Forms::ComboBox^ comboBox) {
			comboBox->Items->Clear(); // Очищаємо ComboBox перед заповненням

			try {
				// З'єднання з базою даних
				Database connect("tcp://127.0.0.1:3306", "root", "12345", "turagentstvo");
				sql::Connection* conn = connect.getConnection();

				// Виконуємо запит до бази даних
				sql::Statement* stmt;
				stmt = conn->createStatement();
				sql::ResultSet* res = stmt->executeQuery("SELECT * FROM client ORDER BY Name");

				// Додавання рядків до ComboBox
				while (res->next()) {
					String^ hotelName = gcnew String(res->getString("Name").c_str());
					comboBox->Items->Add(hotelName);
				}

				delete res;
				delete stmt;
				delete conn;
			}
			catch (sql::SQLException& e) {
				Console::WriteLine("SQL Error: " + gcnew String(e.what()));
			}
		}

		void fillTourListViewFromDB() {
			listView1->Items->Clear(); // Очищаємо ListView перед заповненням

			try {
				// З'єднання з базою даних (використовуйте ваші дані)
				Database connect("tcp://127.0.0.1:3306", "root", "12345", "turagentstvo");
				sql::Connection* conn = connect.getConnection();

				// Виконуємо запит до бази даних
				sql::Statement* stmt;
				stmt = conn->createStatement();
				sql::ResultSet* res = stmt->executeQuery("SELECT * FROM tour");

				// Додавання рядків до ListView
				while (res->next()) {
					ListViewItem^ item = gcnew ListViewItem(gcnew String(res->getString("ID_tour").c_str()));
					// Виконання запиту SELECT для отримання імені міста
					sql::PreparedStatement* pstmt = conn->prepareStatement("SELECT Name FROM manager WHERE ID_manager = ?");
					pstmt->setInt(1, res->getInt("ID_manager"));
					sql::ResultSet* managerRes = pstmt->executeQuery();

					if (managerRes->next()) {


						// Виконання запиту SELECT для отримання імені країни
						sql::PreparedStatement* pstmtCountry = conn->prepareStatement("SELECT Name  FROM client WHERE ID_client = ?");
						pstmtCountry->setInt(1, res->getInt("ID_client"));
						sql::ResultSet* clientRes = pstmtCountry->executeQuery();

						if (clientRes->next()) {
							item->SubItems->Add(gcnew ListViewItem::ListViewSubItem(item, gcnew String(clientRes->getString("Name").c_str())));
							item->SubItems->Add(gcnew ListViewItem::ListViewSubItem(item, gcnew String(managerRes->getString("Name").c_str())));


						}
						else {
							item->SubItems->Add(gcnew ListViewItem::ListViewSubItem(item, "Unknown"));
						}

						delete clientRes;
						delete pstmtCountry;
					}
					else {
						item->SubItems->Add(gcnew ListViewItem::ListViewSubItem(item, "Unknown"));
						item->SubItems->Add(gcnew ListViewItem::ListViewSubItem(item, "Unknown"));
					}
					item->SubItems->Add(gcnew ListViewItem::ListViewSubItem(item, gcnew String(res->getString("Date_of_departure").c_str())));
					item->SubItems->Add(gcnew ListViewItem::ListViewSubItem(item, gcnew String(res->getString("Date_of_arrival").c_str())));
					item->SubItems->Add(gcnew ListViewItem::ListViewSubItem(item, gcnew String(res->getString("Cost_of_tour").c_str())));
					

					listView1->Items->Add(item);

					delete managerRes;
					delete pstmt;
				}

				delete res;
				delete stmt;
				delete conn;
				fillManagerBoxFromDB(comboBox2);
				fillClientBoxFromDB(comboBox1);
			}
			catch (sql::SQLException& e) {
				MessageBox::Show("SQL Error: " + gcnew String(e.what()), "Database Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			catch (System::Exception^ ex) {
				MessageBox::Show("An error occurred: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			catch (std::exception& e) {
				MessageBox::Show("Error: " + gcnew String(e.what()));
			}

		}

		void fillRouteListViewFromDB(int tourID) {
			listView2->Items->Clear(); // Очищаємо ListView перед заповненням
			try {
				// З'єднання з базою даних
				Database connect("tcp://127.0.0.1:3306", "root", "12345", "turagentstvo");
				sql::Connection* conn = connect.getConnection();

				// Виконуємо запит до бази даних з JOIN для отримання назви міста та вартості квитка
				sql::PreparedStatement* pstmt;
				pstmt = conn->prepareStatement(
					"SELECT route.ID_route, route.Date, city.Name AS CityName, route.ID_transport, transport.`Cost of ticket` AS TransportCost "
					"FROM route "
					"JOIN city ON route.ID_city = city.ID_city "
					"JOIN transport ON route.ID_transport = transport.ID_transport "
					"WHERE route.ID_tour = ?"
				);
				pstmt->setInt(1, tourID);
				sql::ResultSet* res = pstmt->executeQuery();

				// Додавання рядків до ListView
				while (res->next()) {

					ListViewItem^ item = gcnew ListViewItem(gcnew String(res->getString("ID_route").c_str()));
					item->SubItems->Add(gcnew ListViewItem::ListViewSubItem(item, gcnew String(res->getString("CityName").c_str())));
					item->SubItems->Add(gcnew ListViewItem::ListViewSubItem(item, gcnew String(res->getString("ID_transport").c_str())));
					item->SubItems->Add(gcnew ListViewItem::ListViewSubItem(item, gcnew String(res->getString("Date").c_str())));
					item->SubItems->Add(gcnew ListViewItem::ListViewSubItem(item, gcnew String(res->getString("TransportCost").c_str())));

					listView2->Items->Add(item);
				}

				delete res;
				delete pstmt;
				delete conn;

			}
			catch (sql::SQLException& e) {
				MessageBox::Show("SQL Error: " + gcnew String(e.what()), "Database Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		void fillCityBoxFromDB(System::Windows::Forms::ComboBox^ comboBox) {
			comboBox->Items->Clear(); // Очищаємо ComboBox перед заповненням

			try {
				// З'єднання з базою даних
				Database connect("tcp://127.0.0.1:3306", "root", "12345", "turagentstvo");
				sql::Connection* conn = connect.getConnection();

				// Виконуємо запит до бази даних
				sql::Statement* stmt;
				stmt = conn->createStatement();
				sql::ResultSet* res = stmt->executeQuery("SELECT * FROM city ORDER BY Name");

				// Додавання рядків до ComboBox
				while (res->next()) {
					String^ countryName = gcnew String(res->getString("Name").c_str());
					comboBox->Items->Add(countryName);
				}

				delete res;
				delete stmt;
				delete conn;
			}
			catch (sql::SQLException& e) {
				Console::WriteLine("SQL Error: " + gcnew String(e.what()));
			}
		}

		void fillRoomListViewFromDB() {
			listView3->Items->Clear(); // Очищаємо ListView перед заповненням
			if (listView1->SelectedItems->Count > 0) {
				// Отримання обраного туру з ListView
				ListViewItem^ selectedItem = listView1->SelectedItems[0];
				System::String^ selectedTourID = selectedItem->SubItems[0]->Text;

				try {
					// З'єднання з базою даних (використовуйте ваші дані)
					Database connect("tcp://127.0.0.1:3306", "root", "12345", "turagentstvo");
					sql::Connection* conn = connect.getConnection();

					// Виконуємо запит до бази даних
					sql::Statement* stmt;
					stmt = conn->createStatement();
					sql::ResultSet* res = stmt->executeQuery("SELECT * FROM room WHERE ID_tour = " + msclr::interop::marshal_as<std::string>(selectedTourID));

					// Додавання рядків до ListView
					while (res->next()) {
						ListViewItem^ item = gcnew ListViewItem(gcnew String(res->getString("ID_room").c_str()));
						// Виконання запиту SELECT для отримання імені готеля
						sql::PreparedStatement* pstmt = conn->prepareStatement("SELECT Name_of_hotel FROM hotel WHERE ID_hotel = ? ORDER BY Name_of_hotel");
						pstmt->setInt(1, res->getInt("ID_hotel"));
						sql::ResultSet* cityRes = pstmt->executeQuery();

						if (cityRes->next()) {

						}
						item->SubItems->Add(gcnew ListViewItem::ListViewSubItem(item, gcnew String(res->getString("ID_hotel").c_str())));
						item->SubItems->Add(gcnew ListViewItem::ListViewSubItem(item, gcnew String(cityRes->getString("Name_of_hotel").c_str())));
						item->SubItems->Add(gcnew ListViewItem::ListViewSubItem(item, gcnew String(res->getString("Class_of_room").c_str())));
						item->SubItems->Add(gcnew ListViewItem::ListViewSubItem(item, gcnew String(res->getString("Cost_for_day").c_str())));
						item->SubItems->Add(gcnew ListViewItem::ListViewSubItem(item, gcnew String(res->getString("Quantity_of_beds").c_str())));
						item->SubItems->Add(gcnew ListViewItem::ListViewSubItem(item, gcnew String(res->getString("Date_of_in").c_str())));
						item->SubItems->Add(gcnew ListViewItem::ListViewSubItem(item, gcnew String(res->getString("Date_of_out").c_str())));
						listView3->Items->Add(item);

						delete cityRes;
						delete pstmt;
					}

					delete res;
					delete stmt;
					delete conn;
				}
				catch (sql::SQLException& e) {
					MessageBox::Show("SQL Error: " + gcnew String(e.what()), "Database Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				catch (System::Exception^ ex) {
					MessageBox::Show("An error occurred: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}
			else {
				MessageBox::Show("Please select a tour!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}

		void calculateTour() {
			try {
				// З'єднання з базою даних
				Database connect("tcp://127.0.0.1:3306", "root", "12345", "turagentstvo");
				sql::Connection* conn = connect.getConnection();

				// Перебір усіх елементів у ListView
				for each (ListViewItem ^ item in listView1->Items) {
					// Отримання ID туру з ListView
					System::String^ selectedTourID = item->SubItems[0]->Text;

					// Виконання запиту до бази даних для отримання вартості маршруту для обраного туру
					sql::PreparedStatement* pstmtRoute;
					pstmtRoute = conn->prepareStatement("SELECT SUM(transport.`Cost of ticket`) AS RouteCost FROM route JOIN transport ON route.ID_transport = transport.ID_transport WHERE route.ID_tour = ?");
					pstmtRoute->setString(1, msclr::interop::marshal_as<std::string>(selectedTourID));
					sql::ResultSet* routeRes = pstmtRoute->executeQuery();

					double routeCost = 0.0;
					if (routeRes->next()) {
						routeCost = routeRes->getDouble("RouteCost");
					}

					delete pstmtRoute;

					// Виконання запиту до бази даних для отримання вартості номера для обраного туру
					sql::PreparedStatement* pstmtRoom;
					pstmtRoom = conn->prepareStatement("SELECT SUM(room.Cost_for_day) AS RoomCost FROM room JOIN hotel ON room.ID_hotel = hotel.ID_hotel JOIN tour ON room.ID_tour = tour.ID_tour WHERE tour.ID_tour = ?");
					pstmtRoom->setString(1, msclr::interop::marshal_as<std::string>(selectedTourID));
					sql::ResultSet* roomRes = pstmtRoom->executeQuery();

					double roomCost = 0.0;
					if (roomRes->next()) {
						roomCost = roomRes->getDouble("RoomCost");
					}

					delete pstmtRoom;

					// Розрахунок загальної вартості туру
					double totalCost = routeCost + roomCost;

					// Оновлення поля в базі даних з використанням отриманої вартості туру
					sql::PreparedStatement* pstmtUpdate;
					pstmtUpdate = conn->prepareStatement("UPDATE tour SET Cost_of_tour = ? WHERE ID_tour = ?");
					pstmtUpdate->setDouble(1, totalCost);
					pstmtUpdate->setInt(2, Int32::Parse(selectedTourID));
					pstmtUpdate->executeUpdate();

					delete pstmtUpdate;
					delete routeRes;
					delete roomRes;
				}

				delete conn;

				fillTourListViewFromDB();
			}
			catch (sql::SQLException& e) {
				MessageBox::Show("SQL Error: " + gcnew String(e.what()), "Database Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}


#pragma endregion
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void addRoute_Click(System::Object^ sender, System::EventArgs^ e) {
		// Перевірка на обране значення в ListView
		if (listView1->SelectedItems->Count > 0) {
			// Отримання обраного туру з ListView
			ListViewItem^ selectedItem = listView1->SelectedItems[0];
			System::String^ selectedTourID = selectedItem->SubItems[0]->Text;

			// Перевірка на обране значення в ComboBox та dateTimePicker
			if (!String::IsNullOrEmpty(comboBox3->Text) && !String::IsNullOrEmpty(comboBox4->Text)) {
				try {
					// З'єднання з базою даних
					Database connect("tcp://127.0.0.1:3306", "root", "12345", "turagentstvo");
					sql::Connection* conn = connect.getConnection();

					// Виконання запиту до бази даних для отримання ID маршруту за вибраним містом, транспортом і датою
					sql::PreparedStatement* pstmt;
					pstmt = conn->prepareStatement("SELECT ID_route FROM route WHERE ID_transport = ? AND Date = ?");
					pstmt->setString(1, msclr::interop::marshal_as<std::string>(comboBox4->Text)); // ID_transport
					pstmt->setString(2, msclr::interop::marshal_as<std::string>(dateTimePicker3->Value.ToString("yyyy-MM-dd"))); // Date
					sql::ResultSet* res = pstmt->executeQuery();

					// Перевірка, чи знайдено маршрут за вказаними параметрами
					if (res->next()) {
						System::String^ selectedRouteID = gcnew String(res->getString("ID_route").c_str());

						// Виконання запиту до бази даних для прив'язки маршруту до туру
						sql::PreparedStatement* pstmtBind;
						pstmtBind = conn->prepareStatement("UPDATE route SET ID_tour = ? WHERE ID_route = ?");
						pstmtBind->setString(1, msclr::interop::marshal_as<std::string>(selectedTourID));
						pstmtBind->setString(2, msclr::interop::marshal_as<std::string>(selectedRouteID));
						pstmtBind->executeUpdate();

						// Повідомлення про успішну прив'язку
						MessageBox::Show("Route successfully bound to tour!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);

						// Оновлення відповідних елементів інтерфейсу
						calculateTour();
						fillRouteListViewFromDB(Int32::Parse(selectedTourID)); // Оновлення ListView або іншого елементу

						delete pstmtBind;
					}
					else {
						MessageBox::Show("Route not found for the selected city, transport, and date!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					}

					delete res;
					delete pstmt;
					delete conn;
				}
				catch (sql::SQLException& e) {
					MessageBox::Show("SQL Error: " + gcnew String(e.what()), "Database Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}
			else {
				MessageBox::Show("Please select a city, transport, and date!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		else {
			MessageBox::Show("Please select a tour!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private: System::Void removeRout_Click(System::Object^ sender, System::EventArgs^ e) {
		
	
		// Перевірка на обране значення в ListView
    if (listView2->SelectedItems->Count > 0) {
        // Отримання обраного маршруту з ListView
        ListViewItem^ selectedItem = listView2->SelectedItems[0];
        System::String^ selectedRouteID = selectedItem->SubItems[0]->Text;
        try {
            // З'єднання з базою даних
            Database connect("tcp://127.0.0.1:3306", "root", "12345", "turagentstvo");
            sql::Connection* conn = connect.getConnection();

            // Виконання запиту до бази даних для обнулення значення ID_tour для обраного маршруту
            sql::PreparedStatement* pstmt;
            pstmt = conn->prepareStatement("UPDATE route SET ID_tour = NULL WHERE ID_route = ?");
            pstmt->setString(1, msclr::interop::marshal_as<std::string>(selectedRouteID));
            pstmt->executeUpdate();

            // Повідомлення про успішне обнулення ID_tour
            MessageBox::Show("ID_tour for the selected route has been reset!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);

            // Оновлення відповідних елементів інтерфейсу
			calculateTour();
            fillRouteListViewFromDB(1); // Оновлення ListView або іншого елементу

            delete pstmt;
            delete conn;
        }
        catch (sql::SQLException& e) {
            MessageBox::Show("SQL Error: " + gcnew String(e.what()), "Database Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
    }
    else {
        MessageBox::Show("Please select a route!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
	}

	private: System::Void listView1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (listView1->SelectedItems->Count == 1) {
			ListViewItem^ selectedItem = listView1->SelectedItems[0];
			int selectedTourID = Int32::Parse(selectedItem->SubItems[0]->Text); // ID_tour

			fillRouteListViewFromDB(selectedTourID);
			fillRoomListViewFromDB();
		}
	}
	private: System::Void cityRouteBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void transportBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void addTour_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			// Отримання тексту з comboBox1, comboBox2 та dateTimePicker
			System::String^ nameManager = comboBox2->Text;
			System::String^ nameClient = comboBox1->Text;
			System::String^ departure = dateTimePicker1->Value.ToString("yyyy-MM-dd");
			System::String^ arrival = dateTimePicker2->Value.ToString("yyyy-MM-dd");

			// Перевірка на пустий текст
			if (String::IsNullOrEmpty(nameManager->Trim()) || String::IsNullOrEmpty(nameClient->Trim())) {
				MessageBox::Show("Name cannot be empty!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			// З'єднання з базою даних (використовуйте ваші дані)
			Database connect("tcp://127.0.0.1:3306", "root", "12345", "turagentstvo");
			sql::Connection* conn = connect.getConnection();

			// Виконання запиту SELECT для отримання ID_manager
			sql::PreparedStatement* pstmt = conn->prepareStatement("SELECT ID_manager FROM manager WHERE Name = ? ");
			pstmt->setString(1, msclr::interop::marshal_as<std::string>(nameManager));
			sql::ResultSet* res = pstmt->executeQuery();

			int ID_manager = -1; // Значення за замовчуванням на випадок, якщо не знайдено
			if (res->next()) {
				ID_manager = res->getInt("ID_manager");
			}
			else {
				MessageBox::Show("Manager not found!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				delete res;
				delete pstmt;
				delete conn;
				return;
			}

			delete res;
			delete pstmt;

			// Виконання запиту SELECT для отримання ID_client
			pstmt = conn->prepareStatement("SELECT ID_client FROM client WHERE Name = ? ");
			pstmt->setString(1, msclr::interop::marshal_as<std::string>(nameClient));
			res = pstmt->executeQuery();

			int ID_client = -1; // Значення за замовчуванням на випадок, якщо не знайдено
			if (res->next()) {
				ID_client = res->getInt("ID_client");
			}
			else {
				MessageBox::Show("Client not found!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				delete res;
				delete pstmt;
				delete conn;
				return;
			}

			delete res;
			delete pstmt;

			// Виконання запиту INSERT INTO
			pstmt = conn->prepareStatement("INSERT INTO tour (ID_manager, ID_client, Date_of_departure, Date_of_arrival, Cost_of_tour) VALUES (?, ?, ?, ?, ?)");
			pstmt->setInt(1, ID_manager);
			pstmt->setInt(2, ID_client);
			pstmt->setString(3, msclr::interop::marshal_as<std::string>(departure));
			pstmt->setString(4, msclr::interop::marshal_as<std::string>(arrival));
			pstmt->setInt(5, cost); // Передбачаємо, що змінна `cost` існує і визначена раніше
			pstmt->executeUpdate();

			// Повідомлення про успішну вставку
			MessageBox::Show("Tour added successfully!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);

			// Оновлення ListView після вставки
			fillTourListViewFromDB();

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

private: System::Void editTour_Click(System::Object^ sender, System::EventArgs^ e) {


	if (listView1->SelectedItems->Count == 1) {

		if (!isEditMode) {
			// Витягуємо дані вибраного готелю та заповнюємо текстові поля
			ListViewItem^ selectedItem = listView1->SelectedItems[0];
			selectedManagerID = Int32::Parse(selectedItem->SubItems[0]->Text);
			comboBox1->Text = selectedItem->SubItems[1]->Text; // Назва готелю
			comboBox2->Text = selectedItem->SubItems[2]->Text; // Клас готелю
			dateTimePicker1->Text = selectedItem->SubItems[3]->Text; // Назва країни
			dateTimePicker2->Text = selectedItem->SubItems[4]->Text; // Назва міста
			isEditMode = true;
			editTour->Text = "Save";

		}
		else {
			// Перевірка на пусті поля
			if (String::IsNullOrEmpty(comboBox1->Text) || String::IsNullOrEmpty(comboBox2->Text)) {
				MessageBox::Show("Fields can't be empty!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			try {
				// Оновлюємо дані готелю в базі даних
				Database connect("tcp://127.0.0.1:3306", "root", "12345", "turagentstvo");
				sql::Connection* conn = connect.getConnection();

				// Виконуємо запит до бази даних
				sql::PreparedStatement* pstmt;
				pstmt = conn->prepareStatement("SELECT ID_client FROM client WHERE Name = ?");
				pstmt->setString(1, msclr::interop::marshal_as<std::string>(comboBox1->Text));
				sql::ResultSet* clientRes = pstmt->executeQuery();


				int ID_client = -1;
				if (clientRes->next()) {
					ID_client = clientRes->getInt("ID_client");


					// Виконання запиту SELECT для отримання ID менеджера
					sql::PreparedStatement* pstmtManager = conn->prepareStatement("SELECT ID_manager FROM manager WHERE Name = ?");
					pstmtManager->setString(1, msclr::interop::marshal_as<std::string>(comboBox2->Text));
					sql::ResultSet* managerRes = pstmtManager->executeQuery();


					int ID_manager = -1;
					if (managerRes->next()) {
						ID_manager = managerRes->getInt("ID_manager");


						// Оновлення даних готелю в базі даних
						pstmt = conn->prepareStatement("UPDATE tour SET ID_client = ?, ID_manager = ?, Date_of_departure = ?, Date_of_arrival = ? WHERE ID_tour = ?");
						pstmt->setInt(1, ID_client);
						pstmt->setInt(2, ID_manager);
						pstmt->setString(3, msclr::interop::marshal_as<std::string>(dateTimePicker1->Value.ToString("yyyy-MM-dd")));
						pstmt->setString(4, msclr::interop::marshal_as<std::string>(dateTimePicker2->Value.ToString("yyyy-MM-dd")));
						pstmt->setInt(5, selectedManagerID);
						pstmt->executeUpdate();



						// Повідомлення про успішне оновлення
						MessageBox::Show("Hotel updated successfully!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);

						// Очищаємо текстові поля та оновлюємо ListView
						isEditMode = false;
						editTour->Text = "Edit";
						fillTourListViewFromDB();
					}
					else {
						MessageBox::Show("Manager not found!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					}

					delete managerRes;
					delete pstmtManager;
				}
				else {
					MessageBox::Show("Client not found! Name: " + comboBox1->Text, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}

				delete clientRes;
				delete pstmt;
				delete conn;
			}
			catch (sql::SQLException& e) {
				MessageBox::Show("SQL Error: " + gcnew String(e.what()), "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
	}
	else {
		MessageBox::Show("Select a tour to edit!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void removeTour_Click(System::Object^ sender, System::EventArgs^ e) {
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
			pstmt = conn->prepareStatement("DELETE FROM tour WHERE ID_tour = ?");
			pstmt->setInt(1, selectedManagerID);

			pstmt->executeUpdate();
			delete pstmt;
			// Оновлюємо значення автоінкременту
			std::string alterTableQuery = "ALTER TABLE tour AUTO_INCREMENT = " + std::to_string(selectedManagerID);
			sql::Statement* stmt = conn->createStatement();
			stmt->execute(alterTableQuery);

			delete pstmt;
			delete conn;

			MessageBox::Show("Тур успішно видалено!", "Інформація", MessageBoxButtons::OK, MessageBoxIcon::Information);

			// Оновлюємо ListView
			fillTourListViewFromDB();
		}
		catch (sql::SQLException& e) {
			MessageBox::Show("SQL Error: " + gcnew String(e.what()), "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	else {
		MessageBox::Show("Виберіть Тур для видалення!", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}

private: System::Void comboBox3_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	// Отримання назви вибраного міста
	String^ selectedCityName = comboBox3->Text;

	try {
		// З'єднання з базою даних
		Database connect("tcp://127.0.0.1:3306", "root", "12345", "turagentstvo");
		sql::Connection* conn = connect.getConnection();

		// Виконання запиту до бази даних для отримання ID міста за його назвою
		sql::PreparedStatement* pstmtCity = conn->prepareStatement("SELECT ID_city FROM city WHERE Name = ?");
		pstmtCity->setString(1, msclr::interop::marshal_as<std::string>(selectedCityName));
		sql::ResultSet* cityRes = pstmtCity->executeQuery();

		// Отримання ID міста
		int cityID = -1;
		if (cityRes->next()) {
			cityID = cityRes->getInt("ID_city");

			// Очищення ComboBox4 перед заповненням
			comboBox4->Items->Clear();

			// Виконання запиту до бази даних для отримання ID транспорту за ID міста
			sql::PreparedStatement* pstmtTransport = conn->prepareStatement("SELECT ID_transport FROM route WHERE ID_city = ?");
			pstmtTransport->setInt(1, cityID);
			sql::ResultSet* transportRes = pstmtTransport->executeQuery();

			// Додавання ID транспорту до ComboBox4
			while (transportRes->next()) {
				int transportID = transportRes->getInt("ID_transport");
				comboBox4->Items->Add(transportID.ToString());
			}

			delete transportRes;
			delete pstmtTransport;
		}

		delete cityRes;
		delete pstmtCity;
		delete conn;
	}
	catch (sql::SQLException& e) {
		// Обробка помилок бази даних
		MessageBox::Show("SQL Error: " + gcnew String(e.what()), "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	catch (System::Exception^ ex) {
		// Обробка інших винятків
		MessageBox::Show("An error occurred: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void comboBox4_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	// Отримання ID обраного транспорту з comboBox4
    int selectedTransportID = System::Convert::ToInt32(comboBox4->SelectedItem->ToString());

    try {
        // З'єднання з базою даних
        Database connect("tcp://127.0.0.1:3306", "root", "12345", "turagentstvo");
        sql::Connection* conn = connect.getConnection();

        // Виконання запиту до бази даних для отримання дати за ID транспорту
        sql::PreparedStatement* pstmt = conn->prepareStatement("SELECT Date FROM route WHERE ID_transport = ?");
        pstmt->setInt(1, selectedTransportID);
        sql::ResultSet* res = pstmt->executeQuery();

        // Отримання дати
        String^ transportDate = "";
        if (res->next()) {
            transportDate = gcnew String(res->getString("Date").c_str());
        }

        delete res;
        delete pstmt;
        delete conn;

        // Встановлення отриманої дати для dateTimePicker3
		dateTimePicker3->Value = DateTime::Parse(transportDate);
    }
    catch (sql::SQLException& e) {
        // Обробка помилок бази даних
        MessageBox::Show("SQL Error: " + gcnew String(e.what()), "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
    catch (System::Exception^ ex) {
        // Обробка інших винятків
        MessageBox::Show("An error occurred: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	calculateTour();
}
private: System::Void clientListButton_Click(System::Object^ sender, System::EventArgs^ e) {
	ClientByCountryForm^ clientByCountry = gcnew ClientByCountryForm();
	clientByCountry->Show();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	MostWantedCountry^ mostWantedCountry = gcnew MostWantedCountry();
	mostWantedCountry->Show();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	AverageTourCost^ averageTourCost = gcnew AverageTourCost();
	averageTourCost->Show();
}
private: System::Void removeRoom_Click(System::Object^ sender, System::EventArgs^ e) {

	// Перевірка на обране значення в ListView
	if (listView3->SelectedItems->Count > 0) {
		// Отримання обраного маршруту з ListView
		ListViewItem^ selectedItem = listView3->SelectedItems[0];
		System::String^ selectedRouteID = selectedItem->SubItems[0]->Text;
		try {
			// З'єднання з базою даних
			Database connect("tcp://127.0.0.1:3306", "root", "12345", "turagentstvo");
			sql::Connection* conn = connect.getConnection();

			// Виконання запиту до бази даних для обнулення значення ID_tour для обраного маршруту
			sql::PreparedStatement* pstmt;
			pstmt = conn->prepareStatement("UPDATE room SET ID_tour = NULL WHERE ID_room = ?");
			pstmt->setString(1, msclr::interop::marshal_as<std::string>(selectedRouteID));
			pstmt->executeUpdate();

			// Повідомлення про успішне обнулення ID_tour
			MessageBox::Show("ID_tour for the selected room has been reset!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);

			// Оновлення відповідних елементів інтерфейсу
			calculateTour();
			fillRouteListViewFromDB(1); // Оновлення ListView або іншого елементу

			delete pstmt;
			delete conn;
		}
		catch (sql::SQLException& e) {
			MessageBox::Show("SQL Error: " + gcnew String(e.what()), "Database Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	else {
		MessageBox::Show("Please select a room!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void dateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
dateTimePicker1->MaxDate = System::DateTime(dateTimePicker2->Value.Year, dateTimePicker2->Value.Month, dateTimePicker2->Value.Day,0,0,0,0);
dateTimePicker2->MinDate = System::DateTime(dateTimePicker1->Value.Year, dateTimePicker1->Value.Month, dateTimePicker1->Value.Day, 0, 0, 0, 0);
}
private: System::Void dateTimePicker2_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	dateTimePicker1->MaxDate = System::DateTime(dateTimePicker2->Value.Year, dateTimePicker2->Value.Month, dateTimePicker2->Value.Day, 0, 0, 0, 0);
	dateTimePicker2->MinDate = System::DateTime(dateTimePicker1->Value.Year, dateTimePicker1->Value.Month, dateTimePicker1->Value.Day, 0, 0, 0, 0);
}
private: System::Void dateTimePicker5_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	dateTimePicker5->MaxDate = System::DateTime(dateTimePicker2->Value.Year, dateTimePicker2->Value.Month, dateTimePicker2->Value.Day, 0, 0, 0, 0);
	dateTimePicker4->MinDate = System::DateTime(dateTimePicker1->Value.Year, dateTimePicker1->Value.Month, dateTimePicker1->Value.Day, 0, 0, 0, 0);
	listView3->Items->Clear(); // Очищаємо ListView перед заповненням
	// Отримання обраного туру з ListView
	System::String^ selectedTourID = hotelBox->Text;

	try {
		// З'єднання з базою даних (використовуйте ваші дані)
		Database connect("tcp://127.0.0.1:3306", "root", "12345", "turagentstvo");
		sql::Connection* conn = connect.getConnection();

		// Виконуємо запит до бази даних
		sql::Statement* stmt;
		stmt = conn->createStatement();

		sql::PreparedStatement* pstmt = conn->prepareStatement("SELECT ID_hotel FROM hotel WHERE Name_of_hotel = ? ");
		pstmt->setString(1, msclr::interop::marshal_as<std::string>(hotelBox->Text));
		sql::ResultSet* cityRes = pstmt->executeQuery();

		sql::ResultSet* res = stmt->executeQuery("SELECT * FROM room WHERE ID_hotel = " + cityRes->getString("ID_hotel") + "AND Date_of_in = " + msclr::interop::marshal_as<std::string>(dateTimePicker4->Text));

		// Додавання рядків до ListView
		while (res->next()) {
			ListViewItem^ item = gcnew ListViewItem(gcnew String(res->getString("ID_room").c_str()));
			// Виконання запиту SELECT для отримання імені готеля


			item->SubItems->Add(gcnew ListViewItem::ListViewSubItem(item, gcnew String(hotelBox->Text)));
			item->SubItems->Add(gcnew ListViewItem::ListViewSubItem(item, gcnew String(res->getString("Class_of_room").c_str())));
			item->SubItems->Add(gcnew ListViewItem::ListViewSubItem(item, gcnew String(res->getString("Cost_for_day").c_str())));
			item->SubItems->Add(gcnew ListViewItem::ListViewSubItem(item, gcnew String(res->getString("Quantity_of_beds").c_str())));
			item->SubItems->Add(gcnew ListViewItem::ListViewSubItem(item, gcnew String(res->getString("Date_of_in").c_str())));
			item->SubItems->Add(gcnew ListViewItem::ListViewSubItem(item, gcnew String(res->getString("Date_of_out").c_str())));
			item->SubItems->Add(gcnew ListViewItem::ListViewSubItem(item, gcnew String(res->getString("ID_tour").c_str())));
			listView3->Items->Add(item);


		}
		delete cityRes;
		delete pstmt;
		delete res;
		delete stmt;
		delete conn;
	}
	catch (sql::SQLException& e) {
		MessageBox::Show("SQL Error: " + gcnew String(e.what()), "Database Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	catch (System::Exception^ ex) {
		MessageBox::Show("An error occurred: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}

private: System::Void comboBox5_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	comboBox6->Items->Clear(); // Очищаємо ComboBox перед заповненням
	std::string Name_of_country = msclr::interop::marshal_as<std::string>(comboBox5->Text);
	try {
		// З'єднання з базою даних
		Database connect("tcp://127.0.0.1:3306", "root", "12345", "turagentstvo");
		sql::Connection* conn = connect.getConnection();

		// Виконуємо запит до бази даних
		sql::PreparedStatement* pstmt;
		pstmt = conn->prepareStatement("SELECT ID_country FROM country WHERE Name_of_country = ?");
		pstmt->setString(1, msclr::interop::marshal_as<std::string>(comboBox5->Text));
		sql::ResultSet* res = pstmt->executeQuery();

		int ID_country = -1;
		if (res->next()) {
			ID_country = res->getInt("ID_country");
		}
		else {
			MessageBox::Show("Country not found!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			delete res;
			delete pstmt;
			delete conn;
			return;
		}

		delete res;
		delete pstmt;

		// Додавання рядків до ComboBox
		pstmt = conn->prepareStatement("SELECT Name FROM city WHERE ID_country = ? ORDER BY Name");
		pstmt->setInt(1, ID_country);
		res = pstmt->executeQuery();

		while (res->next()) {
			String^ cityName = gcnew String(res->getString("Name").c_str());
			comboBox6->Items->Add(cityName);
		}

		delete res;
		delete pstmt;
		delete conn;
	}
	catch (sql::SQLException& e) {
		MessageBox::Show("SQL Error: " + gcnew String(e.what()), "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void comboBox6_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	hotelBox->Items->Clear(); // Очищаємо ComboBox перед заповненням
	std::string Name_of_city = msclr::interop::marshal_as<std::string>(comboBox6->Text);
	try {
		// З'єднання з базою даних
		Database connect("tcp://127.0.0.1:3306", "root", "12345", "turagentstvo");
		sql::Connection* conn = connect.getConnection();

		// Виконуємо запит до бази даних
		sql::PreparedStatement* pstmt;
		pstmt = conn->prepareStatement("SELECT ID_city FROM city WHERE Name = ?");
		pstmt->setString(1, Name_of_city);
		sql::ResultSet* res = pstmt->executeQuery();

		int ID_country = -1;
		if (res->next()) {
			ID_country = res->getInt("ID_city");
		}
		else {
			MessageBox::Show("City not found!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			delete res;
			delete pstmt;
			delete conn;
			return;
		}

		delete res;
		delete pstmt;

		// Додавання рядків до ComboBox
		pstmt = conn->prepareStatement("SELECT Name_of_hotel FROM hotel WHERE ID_city = ?");
		pstmt->setInt(1, ID_country);
		res = pstmt->executeQuery();

		while (res->next()) {
			String^ hotelName = gcnew String(res->getString("Name_of_hotel").c_str());
			hotelBox->Items->Add(hotelName);
		}

		delete res;
		delete pstmt;
		delete conn;
	}
	catch (sql::SQLException& e) {
		MessageBox::Show("SQL Error: " + gcnew String(e.what()), "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void hotelBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	listView3->Items->Clear(); // Очищаємо ListView перед заповненням
	// Отримання обраного туру з ListView
	System::String^ selectedTourID = hotelBox->Text;

	try {
		// З'єднання з базою даних (використовуйте ваші дані)
		Database connect("tcp://127.0.0.1:3306", "root", "12345", "turagentstvo");
		sql::Connection* conn = connect.getConnection();

		// Виконуємо запит до бази даних
		sql::Statement* stmt;
		stmt = conn->createStatement();

		sql::PreparedStatement* pstmt = conn->prepareStatement("SELECT ID_hotel FROM hotel WHERE Name_of_hotel = ? ");
		pstmt->setString(1, msclr::interop::marshal_as<std::string>(hotelBox->Text));
		sql::ResultSet* cityRes = pstmt->executeQuery();
		if (cityRes->next()) {
			int ID_hotel = cityRes->getInt("ID_hotel");
			sql::ResultSet* res = stmt->executeQuery("SELECT * FROM room WHERE ID_hotel = " + std::to_string(ID_hotel));

			while (res->next()) {
				ListViewItem^ item = gcnew ListViewItem(gcnew String(res->getString("ID_room").c_str()));
				item->SubItems->Add(gcnew ListViewItem::ListViewSubItem(item, gcnew String(cityRes->getString("ID_hotel").c_str())));
				item->SubItems->Add(gcnew ListViewItem::ListViewSubItem(item, gcnew String(hotelBox->Text)));
				item->SubItems->Add(gcnew ListViewItem::ListViewSubItem(item, gcnew String(res->getString("Class_of_room").c_str())));
				item->SubItems->Add(gcnew ListViewItem::ListViewSubItem(item, gcnew String(res->getString("Cost_for_day").c_str())));
				item->SubItems->Add(gcnew ListViewItem::ListViewSubItem(item, gcnew String(res->getString("Quantity_of_beds").c_str())));
				item->SubItems->Add(gcnew ListViewItem::ListViewSubItem(item, gcnew String(res->getString("Date_of_in").c_str())));
				item->SubItems->Add(gcnew ListViewItem::ListViewSubItem(item, gcnew String(res->getString("Date_of_out").c_str())));
				item->SubItems->Add(gcnew ListViewItem::ListViewSubItem(item, gcnew String(res->getString("ID_tour").c_str())));
				listView3->Items->Add(item);
			}
			delete res;
		}
		else {
			// Виконати дії, якщо результат порожній
		}
		delete cityRes;
		delete pstmt;
		delete stmt;
		delete conn;
	}
	catch (sql::SQLException& e) {
		MessageBox::Show("SQL Error: " + gcnew String(e.what()), "Database Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	catch (System::Exception^ ex) {
		MessageBox::Show("An error occurred: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

}
private: System::Void dateTimePicker4_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	dateTimePicker5->MaxDate = System::DateTime(dateTimePicker2->Value.Year, dateTimePicker2->Value.Month, dateTimePicker2->Value.Day, 0, 0, 0, 0);
	dateTimePicker4->MinDate = System::DateTime(dateTimePicker1->Value.Year, dateTimePicker1->Value.Month, dateTimePicker1->Value.Day, 0, 0, 0, 0);
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	MostWantedManager^ mostWantedManager = gcnew MostWantedManager();
	mostWantedManager->Show();
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	// Перевірка на обране значення в ListView
	if (listView1->SelectedItems->Count > 0) {
		// Отримання обраного туру з ListView
		ListViewItem^ selectedItem = listView1->SelectedItems[0];
		if (listView3->SelectedItems->Count > 0) {
			System::String^ selectedTourID = selectedItem->SubItems[0]->Text;
			ListViewItem^ selectedRoom = listView3->SelectedItems[0];
			// Перевірка на обране значення в ComboBox та dateTimePicker
			if (!String::IsNullOrEmpty(dateTimePicker5->Text) && !String::IsNullOrEmpty(dateTimePicker4->Text)) {
				try {
					// З'єднання з базою даних
					Database connect("tcp://127.0.0.1:3306", "root", "12345", "turagentstvo");
					sql::Connection* conn = connect.getConnection();

					System::String^ selectedRoomID = selectedItem->SubItems[0]->Text;

					// Виконання запиту до бази даних для прив'язки маршруту до туру
					sql::PreparedStatement* pstmtBind;
					pstmtBind = conn->prepareStatement("UPDATE room SET ID_tour = ? , Date_of_in = ?, Date_of_out = ? WHERE ID_room = ?");
					pstmtBind->setString(1, msclr::interop::marshal_as<std::string>(selectedTourID));
					pstmtBind->setString(2, msclr::interop::marshal_as<std::string>(dateTimePicker5->Value.ToString("yyyy-MM-dd")));
					pstmtBind->setString(3, msclr::interop::marshal_as<std::string>(dateTimePicker4->Value.ToString("yyyy-MM-dd")));
					pstmtBind->setString(4, msclr::interop::marshal_as<std::string>(selectedRoomID));
					pstmtBind->executeUpdate();

					// Повідомлення про успішну прив'язку
					MessageBox::Show("Room successfully bound to tour!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);

					// Оновлення відповідних елементів інтерфейсу
					calculateTour();

					delete pstmtBind;

					delete conn;
				}
				catch (sql::SQLException& e) {
					MessageBox::Show("SQL Error: " + gcnew String(e.what()), "Database Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}
			else {
				MessageBox::Show("Please select a date!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		else {
			MessageBox::Show("Please select a room!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	else {
		MessageBox::Show("Please select a tour!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
	
private: System::Void listView3_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}


};
}

