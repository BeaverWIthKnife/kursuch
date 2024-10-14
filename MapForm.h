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
	/// Summary for MapForm
	/// </summary>
	public ref class MapForm : public System::Windows::Forms::Form
	{
	public:
		MapForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			fillCountryListViewFromDB();
			fillCityListViewFromDB();
			fillHotelListViewFromDB();
			fillRoomListViewFromDB();

			fillCountryBoxFromDB(CCbox);
			fillCountryBoxFromDB(CHbox);
			fillCityBoxFromDB(CityHbox);

			dateTimePicker1->MaxDate = System::DateTime(dateTimePicker2->Value.Year, dateTimePicker2->Value.Month, dateTimePicker2->Value.Day, 0, 0, 0, 0);
			dateTimePicker2->MinDate = System::DateTime(dateTimePicker1->Value.Year, dateTimePicker1->Value.Month, dateTimePicker1->Value.Day, 0, 0, 0, 0);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MapForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListView^ listView1;
	protected:
	private: System::Windows::Forms::ColumnHeader^ columnHeader6;
	private: System::Windows::Forms::ColumnHeader^ columnHeader1;
	private: System::Windows::Forms::Label^ nameLabel;
	private: System::Windows::Forms::TextBox^ nameCountryBox;

	private: System::Windows::Forms::Button^ editButton;
	private: System::Windows::Forms::Button^ removeButton;
	private: System::Windows::Forms::Button^ addButton;
	private: System::Windows::Forms::Button^ editCity;
	private: System::Windows::Forms::Button^ removeCity;



	private: System::Windows::Forms::Button^ addCity;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ nameCityBox;

	private: System::Windows::Forms::ListView^ listView2;
	private: System::Windows::Forms::ColumnHeader^ columnHeader2;
	private: System::Windows::Forms::ColumnHeader^ columnHeader3;
	private: System::Windows::Forms::ColumnHeader^ columnHeader4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ statusBox;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ColumnHeader^ columnHeader5;
	private: System::Windows::Forms::Button^ editHotel;
	private: System::Windows::Forms::Button^ removeHotel;

















	private: System::Windows::Forms::Button^ addHotel;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ hotelBox;

	private: System::Windows::Forms::ListView^ listView3;

	private: System::Windows::Forms::ColumnHeader^ columnHeader11;
	private: System::Windows::Forms::ColumnHeader^ columnHeader12;
	private: System::Windows::Forms::ColumnHeader^ columnHeader7;
	private: System::Windows::Forms::ColumnHeader^ columnHeader8;
	private: System::Windows::Forms::ColumnHeader^ columnHeader9;
	private: System::Windows::Forms::ColumnHeader^ columnHeader13;
	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Label^ label5;



	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Button^ editRoom;
	private: System::Windows::Forms::Button^ removeRoom;


	private: System::Windows::Forms::Button^ addRoom;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::ListView^ listView4;


	private: System::Windows::Forms::ColumnHeader^ columnHeader10;
	private: System::Windows::Forms::ColumnHeader^ columnHeader14;
	private: System::Windows::Forms::ColumnHeader^ columnHeader15;
	private: System::Windows::Forms::ColumnHeader^ columnHeader16;
	private: System::Windows::Forms::ColumnHeader^ columnHeader17;
	private: System::Windows::Forms::ColumnHeader^ columnHeader18;





	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ costBox;
	private: System::Windows::Forms::TextBox^ bedsBox;
	private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::DateTimePicker^ dateTimePicker2;
private: System::Windows::Forms::Label^ label13;
private: System::Windows::Forms::ColumnHeader^ ID_tour;
private: System::Windows::Forms::ColumnHeader^ columnHeader19;






	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
	private:
		int selectedManagerID; // Для збереження ID вибраного клієнта
private: System::Windows::Forms::ComboBox^ CCbox;
private: System::Windows::Forms::ComboBox^ CHbox;
private: System::Windows::Forms::ComboBox^ CityHbox;
private: System::Windows::Forms::TextBox^ classBox;
private: System::Windows::Forms::ComboBox^ HRbox;
private: System::Windows::Forms::TextBox^ roomClassBox;


private: System::Windows::Forms::Label^ label14;
private: System::Windows::Forms::TextBox^ tourBox;

	   bool isEditMode = false;  // Для відстеження режиму редагування
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader6 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->nameLabel = (gcnew System::Windows::Forms::Label());
			this->nameCountryBox = (gcnew System::Windows::Forms::TextBox());
			this->editButton = (gcnew System::Windows::Forms::Button());
			this->removeButton = (gcnew System::Windows::Forms::Button());
			this->addButton = (gcnew System::Windows::Forms::Button());
			this->editCity = (gcnew System::Windows::Forms::Button());
			this->removeCity = (gcnew System::Windows::Forms::Button());
			this->addCity = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->nameCityBox = (gcnew System::Windows::Forms::TextBox());
			this->listView2 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader5 = (gcnew System::Windows::Forms::ColumnHeader());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->statusBox = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->editHotel = (gcnew System::Windows::Forms::Button());
			this->removeHotel = (gcnew System::Windows::Forms::Button());
			this->addHotel = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->hotelBox = (gcnew System::Windows::Forms::TextBox());
			this->listView3 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader11 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader12 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader7 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader8 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader9 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader13 = (gcnew System::Windows::Forms::ColumnHeader());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->editRoom = (gcnew System::Windows::Forms::Button());
			this->removeRoom = (gcnew System::Windows::Forms::Button());
			this->addRoom = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->listView4 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader10 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader14 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader15 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader16 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader17 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader18 = (gcnew System::Windows::Forms::ColumnHeader());
			this->ID_tour = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader19 = (gcnew System::Windows::Forms::ColumnHeader());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->costBox = (gcnew System::Windows::Forms::TextBox());
			this->bedsBox = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->CCbox = (gcnew System::Windows::Forms::ComboBox());
			this->CHbox = (gcnew System::Windows::Forms::ComboBox());
			this->CityHbox = (gcnew System::Windows::Forms::ComboBox());
			this->classBox = (gcnew System::Windows::Forms::TextBox());
			this->HRbox = (gcnew System::Windows::Forms::ComboBox());
			this->roomClassBox = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->tourBox = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// listView1
			// 
			this->listView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(2) { this->columnHeader6, this->columnHeader1 });
			this->listView1->FullRowSelect = true;
			this->listView1->GridLines = true;
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(7, 95);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(364, 180);
			this->listView1->TabIndex = 24;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader6
			// 
			this->columnHeader6->Text = L"ID country";
			this->columnHeader6->Width = 74;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"Name of country";
			this->columnHeader1->Width = 278;
			// 
			// nameLabel
			// 
			this->nameLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->nameLabel->AutoSize = true;
			this->nameLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->nameLabel->Location = System::Drawing::Point(88, 9);
			this->nameLabel->Name = L"nameLabel";
			this->nameLabel->Size = System::Drawing::Size(213, 31);
			this->nameLabel->TabIndex = 26;
			this->nameLabel->Text = L"Name of country";
			// 
			// nameCountryBox
			// 
			this->nameCountryBox->Location = System::Drawing::Point(85, 52);
			this->nameCountryBox->Name = L"nameCountryBox";
			this->nameCountryBox->Size = System::Drawing::Size(236, 20);
			this->nameCountryBox->TabIndex = 25;
			// 
			// editButton
			// 
			this->editButton->Location = System::Drawing::Point(7, 37);
			this->editButton->Name = L"editButton";
			this->editButton->Size = System::Drawing::Size(75, 23);
			this->editButton->TabIndex = 29;
			this->editButton->Text = L"Edit";
			this->editButton->UseVisualStyleBackColor = true;
			this->editButton->Click += gcnew System::EventHandler(this, &MapForm::editButton_Click);
			// 
			// removeButton
			// 
			this->removeButton->Location = System::Drawing::Point(7, 66);
			this->removeButton->Name = L"removeButton";
			this->removeButton->Size = System::Drawing::Size(75, 23);
			this->removeButton->TabIndex = 28;
			this->removeButton->Text = L"Remove";
			this->removeButton->UseVisualStyleBackColor = true;
			this->removeButton->Click += gcnew System::EventHandler(this, &MapForm::removeButton_Click);
			// 
			// addButton
			// 
			this->addButton->Location = System::Drawing::Point(7, 8);
			this->addButton->Name = L"addButton";
			this->addButton->Size = System::Drawing::Size(75, 23);
			this->addButton->TabIndex = 27;
			this->addButton->Text = L"Add";
			this->addButton->UseVisualStyleBackColor = true;
			this->addButton->Click += gcnew System::EventHandler(this, &MapForm::addButton_Click);
			// 
			// editCity
			// 
			this->editCity->Location = System::Drawing::Point(377, 37);
			this->editCity->Name = L"editCity";
			this->editCity->Size = System::Drawing::Size(66, 23);
			this->editCity->TabIndex = 35;
			this->editCity->Text = L"Edit";
			this->editCity->UseVisualStyleBackColor = true;
			this->editCity->Click += gcnew System::EventHandler(this, &MapForm::editCity_Click);
			// 
			// removeCity
			// 
			this->removeCity->Location = System::Drawing::Point(377, 66);
			this->removeCity->Name = L"removeCity";
			this->removeCity->Size = System::Drawing::Size(66, 23);
			this->removeCity->TabIndex = 34;
			this->removeCity->Text = L"Remove";
			this->removeCity->UseVisualStyleBackColor = true;
			this->removeCity->Click += gcnew System::EventHandler(this, &MapForm::removeCity_Click);
			// 
			// addCity
			// 
			this->addCity->Location = System::Drawing::Point(377, 8);
			this->addCity->Name = L"addCity";
			this->addCity->Size = System::Drawing::Size(66, 23);
			this->addCity->TabIndex = 33;
			this->addCity->Text = L"Add";
			this->addCity->UseVisualStyleBackColor = true;
			this->addCity->Click += gcnew System::EventHandler(this, &MapForm::addCity_Click);
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(458, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(165, 31);
			this->label1->TabIndex = 32;
			this->label1->Text = L"Name of city";
			// 
			// nameCityBox
			// 
			this->nameCityBox->Location = System::Drawing::Point(456, 52);
			this->nameCityBox->Name = L"nameCityBox";
			this->nameCityBox->Size = System::Drawing::Size(221, 20);
			this->nameCityBox->TabIndex = 31;
			// 
			// listView2
			// 
			this->listView2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->listView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(4) {
				this->columnHeader2, this->columnHeader3,
					this->columnHeader4, this->columnHeader5
			});
			this->listView2->FullRowSelect = true;
			this->listView2->GridLines = true;
			this->listView2->HideSelection = false;
			this->listView2->Location = System::Drawing::Point(377, 95);
			this->listView2->Name = L"listView2";
			this->listView2->Size = System::Drawing::Size(650, 180);
			this->listView2->TabIndex = 30;
			this->listView2->UseCompatibleStateImageBehavior = false;
			this->listView2->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"ID city";
			this->columnHeader2->Width = 74;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"Name of city";
			this->columnHeader3->Width = 234;
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"Status";
			this->columnHeader4->Width = 127;
			// 
			// columnHeader5
			// 
			this->columnHeader5->Text = L"Country";
			this->columnHeader5->Width = 202;
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(676, 18);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(92, 31);
			this->label2->TabIndex = 37;
			this->label2->Text = L"Status";
			// 
			// statusBox
			// 
			this->statusBox->Location = System::Drawing::Point(682, 52);
			this->statusBox->Name = L"statusBox";
			this->statusBox->Size = System::Drawing::Size(125, 20);
			this->statusBox->TabIndex = 36;
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(807, 18);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(110, 31);
			this->label3->TabIndex = 38;
			this->label3->Text = L"Country";
			// 
			// editHotel
			// 
			this->editHotel->Location = System::Drawing::Point(7, 319);
			this->editHotel->Name = L"editHotel";
			this->editHotel->Size = System::Drawing::Size(75, 23);
			this->editHotel->TabIndex = 45;
			this->editHotel->Text = L"Edit";
			this->editHotel->UseVisualStyleBackColor = true;
			this->editHotel->Click += gcnew System::EventHandler(this, &MapForm::editHotel_Click);
			// 
			// removeHotel
			// 
			this->removeHotel->Location = System::Drawing::Point(7, 348);
			this->removeHotel->Name = L"removeHotel";
			this->removeHotel->Size = System::Drawing::Size(75, 23);
			this->removeHotel->TabIndex = 44;
			this->removeHotel->Text = L"Remove";
			this->removeHotel->UseVisualStyleBackColor = true;
			this->removeHotel->Click += gcnew System::EventHandler(this, &MapForm::removeHotel_Click);
			// 
			// addHotel
			// 
			this->addHotel->Location = System::Drawing::Point(7, 290);
			this->addHotel->Name = L"addHotel";
			this->addHotel->Size = System::Drawing::Size(75, 23);
			this->addHotel->TabIndex = 43;
			this->addHotel->Text = L"Add";
			this->addHotel->UseVisualStyleBackColor = true;
			this->addHotel->Click += gcnew System::EventHandler(this, &MapForm::addHotel_Click);
			// 
			// label7
			// 
			this->label7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(88, 291);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(152, 31);
			this->label7->TabIndex = 42;
			this->label7->Text = L"Hotel name";
			// 
			// hotelBox
			// 
			this->hotelBox->Location = System::Drawing::Point(85, 334);
			this->hotelBox->Name = L"hotelBox";
			this->hotelBox->Size = System::Drawing::Size(226, 20);
			this->hotelBox->TabIndex = 41;
			// 
			// listView3
			// 
			this->listView3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->listView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(6) {
				this->columnHeader11, this->columnHeader12,
					this->columnHeader7, this->columnHeader8, this->columnHeader9, this->columnHeader13
			});
			this->listView3->FullRowSelect = true;
			this->listView3->GridLines = true;
			this->listView3->HideSelection = false;
			this->listView3->Location = System::Drawing::Point(7, 377);
			this->listView3->Name = L"listView3";
			this->listView3->Size = System::Drawing::Size(1020, 205);
			this->listView3->TabIndex = 40;
			this->listView3->UseCompatibleStateImageBehavior = false;
			this->listView3->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader11
			// 
			this->columnHeader11->Text = L"ID hotel";
			this->columnHeader11->Width = 74;
			// 
			// columnHeader12
			// 
			this->columnHeader12->Text = L"Hotel name";
			this->columnHeader12->Width = 240;
			// 
			// columnHeader7
			// 
			this->columnHeader7->Text = L"Class";
			this->columnHeader7->Width = 70;
			// 
			// columnHeader8
			// 
			this->columnHeader8->Text = L"Free rooms";
			this->columnHeader8->Width = 113;
			// 
			// columnHeader9
			// 
			this->columnHeader9->Text = L"Country";
			this->columnHeader9->Width = 241;
			// 
			// columnHeader13
			// 
			this->columnHeader13->Text = L"City";
			this->columnHeader13->Width = 269;
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(311, 291);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(83, 31);
			this->label4->TabIndex = 47;
			this->label4->Text = L"Class";
			// 
			// label5
			// 
			this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(510, 291);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(110, 31);
			this->label5->TabIndex = 48;
			this->label5->Text = L"Country";
			// 
			// label6
			// 
			this->label6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(745, 291);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(62, 31);
			this->label6->TabIndex = 50;
			this->label6->Text = L"City";
			// 
			// label10
			// 
			this->label10->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(280, 603);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(83, 31);
			this->label10->TabIndex = 59;
			this->label10->Text = L"Class";
			// 
			// editRoom
			// 
			this->editRoom->Location = System::Drawing::Point(7, 631);
			this->editRoom->Name = L"editRoom";
			this->editRoom->Size = System::Drawing::Size(75, 23);
			this->editRoom->TabIndex = 57;
			this->editRoom->Text = L"Edit";
			this->editRoom->UseVisualStyleBackColor = true;
			this->editRoom->Click += gcnew System::EventHandler(this, &MapForm::editRoom_Click);
			// 
			// removeRoom
			// 
			this->removeRoom->Location = System::Drawing::Point(7, 660);
			this->removeRoom->Name = L"removeRoom";
			this->removeRoom->Size = System::Drawing::Size(75, 23);
			this->removeRoom->TabIndex = 56;
			this->removeRoom->Text = L"Remove";
			this->removeRoom->UseVisualStyleBackColor = true;
			this->removeRoom->Click += gcnew System::EventHandler(this, &MapForm::removeRoom_Click);
			// 
			// addRoom
			// 
			this->addRoom->Location = System::Drawing::Point(7, 602);
			this->addRoom->Name = L"addRoom";
			this->addRoom->Size = System::Drawing::Size(75, 23);
			this->addRoom->TabIndex = 55;
			this->addRoom->Text = L"Add";
			this->addRoom->UseVisualStyleBackColor = true;
			this->addRoom->Click += gcnew System::EventHandler(this, &MapForm::addRoom_Click);
			// 
			// label11
			// 
			this->label11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(88, 603);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(152, 31);
			this->label11->TabIndex = 54;
			this->label11->Text = L"Hotel name";
			// 
			// listView4
			// 
			this->listView4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->listView4->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(8) {
				this->columnHeader10, this->columnHeader14,
					this->columnHeader15, this->columnHeader16, this->columnHeader17, this->columnHeader18, this->ID_tour, this->columnHeader19
			});
			this->listView4->FullRowSelect = true;
			this->listView4->GridLines = true;
			this->listView4->HideSelection = false;
			this->listView4->Location = System::Drawing::Point(7, 689);
			this->listView4->Name = L"listView4";
			this->listView4->Size = System::Drawing::Size(1020, 205);
			this->listView4->TabIndex = 52;
			this->listView4->UseCompatibleStateImageBehavior = false;
			this->listView4->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader10
			// 
			this->columnHeader10->Text = L"ID hotel";
			this->columnHeader10->Width = 82;
			// 
			// columnHeader14
			// 
			this->columnHeader14->Text = L"Hotel name";
			this->columnHeader14->Width = 203;
			// 
			// columnHeader15
			// 
			this->columnHeader15->Text = L"Class";
			this->columnHeader15->Width = 102;
			// 
			// columnHeader16
			// 
			this->columnHeader16->Text = L"Cost";
			this->columnHeader16->Width = 106;
			// 
			// columnHeader17
			// 
			this->columnHeader17->Text = L"Quantity of beds";
			this->columnHeader17->Width = 119;
			// 
			// columnHeader18
			// 
			this->columnHeader18->Text = L"Date of in";
			this->columnHeader18->Width = 135;
			// 
			// ID_tour
			// 
			this->ID_tour->Text = L"Date of out";
			this->ID_tour->Width = 137;
			// 
			// columnHeader19
			// 
			this->columnHeader19->Text = L"ID_tour";
			this->columnHeader19->Width = 128;
			// 
			// label12
			// 
			this->label12->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(383, 603);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(71, 31);
			this->label12->TabIndex = 69;
			this->label12->Text = L"Cost";
			// 
			// costBox
			// 
			this->costBox->Location = System::Drawing::Point(389, 646);
			this->costBox->Name = L"costBox";
			this->costBox->Size = System::Drawing::Size(98, 20);
			this->costBox->TabIndex = 70;
			// 
			// bedsBox
			// 
			this->bedsBox->Location = System::Drawing::Point(503, 646);
			this->bedsBox->Name = L"bedsBox";
			this->bedsBox->Size = System::Drawing::Size(98, 20);
			this->bedsBox->TabIndex = 72;
			// 
			// label8
			// 
			this->label8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(497, 603);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(76, 31);
			this->label8->TabIndex = 71;
			this->label8->Text = L"Beds";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(622, 646);
			this->dateTimePicker1->MaxDate = System::DateTime(2025, 6, 1, 18, 44, 20, 0);
			this->dateTimePicker1->MinDate = System::DateTime(2023, 1, 1, 0, 0, 0, 0);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(132, 20);
			this->dateTimePicker1->TabIndex = 74;
			this->dateTimePicker1->Value = System::DateTime(2024, 6, 1, 0, 0, 0, 0);
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &MapForm::dateTimePicker1_ValueChanged);
			// 
			// label9
			// 
			this->label9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(616, 603);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(130, 31);
			this->label9->TabIndex = 73;
			this->label9->Text = L"Date of in";
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Location = System::Drawing::Point(764, 646);
			this->dateTimePicker2->MaxDate = System::DateTime(2025, 6, 1, 18, 44, 20, 0);
			this->dateTimePicker2->MinDate = System::DateTime(2023, 6, 1, 18, 44, 20, 0);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(132, 20);
			this->dateTimePicker2->TabIndex = 76;
			this->dateTimePicker2->Value = System::DateTime(2024, 6, 1, 0, 0, 0, 0);
			this->dateTimePicker2->ValueChanged += gcnew System::EventHandler(this, &MapForm::dateTimePicker2_ValueChanged);
			// 
			// label13
			// 
			this->label13->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->Location = System::Drawing::Point(758, 603);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(147, 31);
			this->label13->TabIndex = 75;
			this->label13->Text = L"Date of out";
			// 
			// CCbox
			// 
			this->CCbox->FormattingEnabled = true;
			this->CCbox->Location = System::Drawing::Point(813, 51);
			this->CCbox->Name = L"CCbox";
			this->CCbox->Size = System::Drawing::Size(214, 21);
			this->CCbox->TabIndex = 79;
			// 
			// CHbox
			// 
			this->CHbox->FormattingEnabled = true;
			this->CHbox->Location = System::Drawing::Point(516, 334);
			this->CHbox->Name = L"CHbox";
			this->CHbox->Size = System::Drawing::Size(230, 21);
			this->CHbox->TabIndex = 80;
			this->CHbox->SelectedIndexChanged += gcnew System::EventHandler(this, &MapForm::CHbox_SelectedIndexChanged);
			// 
			// CityHbox
			// 
			this->CityHbox->FormattingEnabled = true;
			this->CityHbox->Location = System::Drawing::Point(752, 333);
			this->CityHbox->Name = L"CityHbox";
			this->CityHbox->Size = System::Drawing::Size(275, 21);
			this->CityHbox->TabIndex = 81;
			this->CityHbox->SelectedIndexChanged += gcnew System::EventHandler(this, &MapForm::CityHbox_SelectedIndexChanged);
			// 
			// classBox
			// 
			this->classBox->Location = System::Drawing::Point(317, 334);
			this->classBox->Name = L"classBox";
			this->classBox->Size = System::Drawing::Size(77, 20);
			this->classBox->TabIndex = 82;
			// 
			// HRbox
			// 
			this->HRbox->FormattingEnabled = true;
			this->HRbox->Location = System::Drawing::Point(94, 646);
			this->HRbox->Name = L"HRbox";
			this->HRbox->Size = System::Drawing::Size(186, 21);
			this->HRbox->TabIndex = 83;
			// 
			// roomClassBox
			// 
			this->roomClassBox->Location = System::Drawing::Point(286, 646);
			this->roomClassBox->Name = L"roomClassBox";
			this->roomClassBox->Size = System::Drawing::Size(98, 20);
			this->roomClassBox->TabIndex = 84;
			// 
			// label14
			// 
			this->label14->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->Location = System::Drawing::Point(911, 603);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(70, 31);
			this->label14->TabIndex = 77;
			this->label14->Text = L"Tour";
			// 
			// tourBox
			// 
			this->tourBox->Location = System::Drawing::Point(902, 646);
			this->tourBox->Name = L"tourBox";
			this->tourBox->Size = System::Drawing::Size(125, 20);
			this->tourBox->TabIndex = 85;
			// 
			// MapForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1039, 910);
			this->Controls->Add(this->tourBox);
			this->Controls->Add(this->roomClassBox);
			this->Controls->Add(this->HRbox);
			this->Controls->Add(this->classBox);
			this->Controls->Add(this->CityHbox);
			this->Controls->Add(this->CHbox);
			this->Controls->Add(this->CCbox);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->dateTimePicker2);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->bedsBox);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->costBox);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->editRoom);
			this->Controls->Add(this->removeRoom);
			this->Controls->Add(this->addRoom);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->listView4);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->editHotel);
			this->Controls->Add(this->removeHotel);
			this->Controls->Add(this->addHotel);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->hotelBox);
			this->Controls->Add(this->listView3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->statusBox);
			this->Controls->Add(this->editCity);
			this->Controls->Add(this->removeCity);
			this->Controls->Add(this->addCity);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->nameCityBox);
			this->Controls->Add(this->listView2);
			this->Controls->Add(this->editButton);
			this->Controls->Add(this->removeButton);
			this->Controls->Add(this->addButton);
			this->Controls->Add(this->nameLabel);
			this->Controls->Add(this->nameCountryBox);
			this->Controls->Add(this->listView1);
			this->Name = L"MapForm";
			this->Text = L"MapForm";
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
				sql::ResultSet* res = stmt->executeQuery("SELECT * FROM country");

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
		}

		void fillCountryListViewFromDB() {
			listView1->Items->Clear(); // Очищаємо ListView перед заповненням

			try {
				// З'єднання з базою даних (використовуйте ваші дані)
				Database connect("tcp://127.0.0.1:3306", "root", "12345", "turagentstvo");
				sql::Connection* conn = connect.getConnection();
				// Виконуємо запит до бази даних
				sql::Statement* stmt;
				stmt = conn->createStatement();
				sql::ResultSet* res = stmt->executeQuery("SELECT * FROM country");
				// Додавання рядків до ListView

				while (res->next()) {
					ListViewItem^ item = gcnew ListViewItem(gcnew String(res->getString("ID_country").c_str()));
					item->SubItems->Add(gcnew ListViewItem::ListViewSubItem(item, gcnew String(res->getString("Name_of_country").c_str())));
					listView1->Items->Add(item);
				}

				delete res;
				delete stmt;
				delete conn;
				fillCountryBoxFromDB(CCbox);
				fillCountryBoxFromDB(CHbox);
			}
			catch (sql::SQLException& e) {
				Console::WriteLine("SQL Error: " + gcnew String(e.what()));
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

		void fillCityListViewFromDB() {
			listView2->Items->Clear(); // Очищаємо ListView перед заповненням

			try {
				// З'єднання з базою даних (використовуйте ваші дані)
				Database connect("tcp://127.0.0.1:3306", "root", "12345", "turagentstvo");
				sql::Connection* conn = connect.getConnection();
				

				// Виконуємо запит до бази даних
				sql::Statement* stmt;
				stmt = conn->createStatement();
				sql::ResultSet* res = stmt->executeQuery("SELECT * FROM city");
				

				// Додавання рядків до ListView
				while (res->next()) {
					String^ cityName = gcnew String(res->getString("Name").c_str());
					

					ListViewItem^ item = gcnew ListViewItem(gcnew String(res->getString("ID_city").c_str()));
					item->SubItems->Add(gcnew ListViewItem::ListViewSubItem(item, gcnew String(res->getString("Name").c_str())));
					item->SubItems->Add(gcnew ListViewItem::ListViewSubItem(item, gcnew String(res->getString("Status").c_str())));

					// Виконання запиту SELECT для отримання імені країни
					sql::PreparedStatement* pstmt = conn->prepareStatement("SELECT Name_of_country FROM country WHERE ID_country = ?");
					pstmt->setInt(1, res->getInt("ID_country"));
					sql::ResultSet* countryRes = pstmt->executeQuery();

					if (countryRes->next()) {
						item->SubItems->Add(gcnew ListViewItem::ListViewSubItem(item, gcnew String(countryRes->getString("Name_of_country").c_str())));
					}
					else {
						item->SubItems->Add(gcnew ListViewItem::ListViewSubItem(item, "Unknown"));
					}

					listView2->Items->Add(item);

					fillCityBoxFromDB(CityHbox);
					delete countryRes;
					delete pstmt;
				}

				delete res;
				delete stmt;
				delete conn;
			}
			catch (sql::SQLException& e) {
				MessageBox::Show("SQL Error: " + gcnew String(e.what()), "Database Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}

		void fillHotelBoxFromDB(System::Windows::Forms::ComboBox^ comboBox) {
			comboBox->Items->Clear(); // Очищаємо ComboBox перед заповненням

			try {
				// З'єднання з базою даних
				Database connect("tcp://127.0.0.1:3306", "root", "12345", "turagentstvo");
				sql::Connection* conn = connect.getConnection();

				// Виконуємо запит до бази даних
				sql::Statement* stmt;
				stmt = conn->createStatement();
				sql::ResultSet* res = stmt->executeQuery("SELECT * FROM hotel");

				// Додавання рядків до ComboBox
				while (res->next()) {
					String^ hotelName = gcnew String(res->getString("Name_of_hotel").c_str());
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

		void fillHotelListViewFromDB() {
			listView3->Items->Clear(); // Очищаємо ListView перед заповненням

			try {
				// З'єднання з базою даних (використовуйте ваші дані)
				Database connect("tcp://127.0.0.1:3306", "root", "12345", "turagentstvo");
				sql::Connection* conn = connect.getConnection();

				// Виконуємо запит до бази даних
				sql::Statement* stmt;
				stmt = conn->createStatement();
				sql::ResultSet* res = stmt->executeQuery("SELECT * FROM hotel");

				// Додавання рядків до ListView
				while (res->next()) {
					ListViewItem^ item = gcnew ListViewItem(gcnew String(res->getString("ID_hotel").c_str()));
					item->SubItems->Add(gcnew ListViewItem::ListViewSubItem(item, gcnew String(res->getString("Name_of_hotel").c_str())));
					item->SubItems->Add(gcnew ListViewItem::ListViewSubItem(item, gcnew String(res->getString("Class").c_str())));
					item->SubItems->Add(gcnew ListViewItem::ListViewSubItem(item, gcnew String(res->getString("Free_rooms").c_str())));

					// Виконання запиту SELECT для отримання імені міста
					sql::PreparedStatement* pstmt = conn->prepareStatement("SELECT Name, ID_country FROM city WHERE ID_city = ?");
					pstmt->setInt(1, res->getInt("ID_city"));
					sql::ResultSet* cityRes = pstmt->executeQuery();

					if (cityRes->next()) {
						

						// Виконання запиту SELECT для отримання імені країни
						sql::PreparedStatement* pstmtCountry = conn->prepareStatement("SELECT Name_of_country FROM country WHERE ID_country = ?");
						pstmtCountry->setInt(1, cityRes->getInt("ID_country"));
						sql::ResultSet* countryRes = pstmtCountry->executeQuery();

						if (countryRes->next()) {
							item->SubItems->Add(gcnew ListViewItem::ListViewSubItem(item, gcnew String(countryRes->getString("Name_of_country").c_str())));
							item->SubItems->Add(gcnew ListViewItem::ListViewSubItem(item, gcnew String(cityRes->getString("Name").c_str())));
						}
						else {
							item->SubItems->Add(gcnew ListViewItem::ListViewSubItem(item, "Unknown Country"));
						}

						delete countryRes;
						delete pstmtCountry;
					}
					else {
						item->SubItems->Add(gcnew ListViewItem::ListViewSubItem(item, "Unknown City"));
						item->SubItems->Add(gcnew ListViewItem::ListViewSubItem(item, "Unknown Country"));
					}

					listView3->Items->Add(item);

					delete cityRes;
					delete pstmt;
				}

				delete res;
				delete stmt;
				delete conn;
				fillHotelBoxFromDB(HRbox);
			}
			catch (sql::SQLException& e) {
				MessageBox::Show("SQL Error: " + gcnew String(e.what()), "Database Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			catch (System::Exception^ ex) {
				MessageBox::Show("An error occurred: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}

		void fillRoomListViewFromDB() {
			listView4->Items->Clear(); // Очищаємо ListView перед заповненням

			try {
				// З'єднання з базою даних (використовуйте ваші дані)
				Database connect("tcp://127.0.0.1:3306", "root", "12345", "turagentstvo");
				sql::Connection* conn = connect.getConnection();

				// Виконуємо запит до бази даних
				sql::Statement* stmt;
				stmt = conn->createStatement();
				sql::ResultSet* res = stmt->executeQuery("SELECT * FROM room");

				// Додавання рядків до ListView
				while (res->next()) {
					ListViewItem^ item = gcnew ListViewItem(gcnew String(res->getString("ID_room").c_str()));
					// Виконання запиту SELECT для отримання імені готеля
					sql::PreparedStatement* pstmt = conn->prepareStatement("SELECT Name_of_hotel FROM hotel WHERE ID_hotel = ?");
					pstmt->setInt(1, res->getInt("ID_hotel"));
					sql::ResultSet* cityRes = pstmt->executeQuery();

					if (cityRes->next()) {

					}
					item->SubItems->Add(gcnew ListViewItem::ListViewSubItem(item, gcnew String(cityRes->getString("Name_of_hotel").c_str())));
					item->SubItems->Add(gcnew ListViewItem::ListViewSubItem(item, gcnew String(res->getString("Class_of_room").c_str())));
					item->SubItems->Add(gcnew ListViewItem::ListViewSubItem(item, gcnew String(res->getString("Cost_for_day").c_str())));
					item->SubItems->Add(gcnew ListViewItem::ListViewSubItem(item, gcnew String(res->getString("Quantity_of_beds").c_str())));
					item->SubItems->Add(gcnew ListViewItem::ListViewSubItem(item, gcnew String(res->getString("Date_of_in").c_str())));
					item->SubItems->Add(gcnew ListViewItem::ListViewSubItem(item, gcnew String(res->getString("Date_of_out").c_str())));
					item->SubItems->Add(gcnew ListViewItem::ListViewSubItem(item, gcnew String(res->getString("ID_tour").c_str())));
					listView4->Items->Add(item);

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



#pragma endregion
private: System::Void addButton_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		// Отримання тексту з textBox1 та textBox2
		System::String^ name = nameCountryBox->Text;
		// Перевірка на пустий текст
		if (name->Trim() == "") {
			MessageBox::Show("Name cannot be empty!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		// Отримання ідентифікатора користувача (замість ID_manager)

		// З'єднання з базою даних (використовуйте ваші дані)
		Database connect("tcp://127.0.0.1:3306", "root", "12345", "turagentstvo");
		sql::Connection* conn = connect.getConnection();

		// Виконання запиту INSERT INTO
		sql::PreparedStatement* pstmt = conn->prepareStatement("INSERT INTO country (Name_of_country) VALUES ( ? )");
		pstmt->setString(1, msclr::interop::marshal_as<std::string>(name));
		pstmt->executeUpdate();

		// Очищення textBox1 та textBox2 після вставки
		nameCountryBox->Clear();

		// Повідомлення про успішну вставку
		MessageBox::Show("Country added successfully!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);

		// Оновлення ListView після вставки
		fillCountryListViewFromDB();
		fillCountryBoxFromDB(CCbox);
		fillCountryBoxFromDB(CHbox);

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
			nameCountryBox->Text = selectedItem->SubItems[1]->Text; // Ім'я
			isEditMode = true;
			editButton->Text = "Save";
		}
		else {
			// Перевірка на пусті поля
			if (String::IsNullOrEmpty(nameCountryBox->Text)) {
				MessageBox::Show("Cant be empty!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			try {
				// Оновлюємо дані клієнта в базі даних
				Database connect("tcp://127.0.0.1:3306", "root", "12345", "turagentstvo");
				sql::Connection* conn = connect.getConnection();

				sql::PreparedStatement* pstmt;
				pstmt = conn->prepareStatement("UPDATE country SET Name_of_country = ? WHERE ID_country = ?");
				pstmt->setString(1, msclr::interop::marshal_as<std::string>(nameCountryBox->Text));
				pstmt->setInt(2, selectedManagerID);
				pstmt->executeUpdate();

				delete pstmt;
				delete conn;

				MessageBox::Show("Країна успішно оновлена!", "Інформація", MessageBoxButtons::OK, MessageBoxIcon::Information);

				// Очищаємо текстові поля та оновлюємо ListView
				nameCountryBox->Clear();
				isEditMode = false;
				editButton->Text = "Edit";
				fillCountryListViewFromDB();
			}
			catch (sql::SQLException& e) {
				MessageBox::Show("SQL Error: " + gcnew String(e.what()), "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
	}
	else {
		MessageBox::Show("Виберіть країну для редагування!", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
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
			pstmt = conn->prepareStatement("DELETE FROM country WHERE ID_country = ?");
			pstmt->setInt(1, selectedManagerID);

			pstmt->executeUpdate();
			delete pstmt;
			// Оновлюємо значення автоінкременту
			std::string alterTableQuery = "ALTER TABLE country AUTO_INCREMENT = " + std::to_string(selectedManagerID);
			sql::Statement* stmt = conn->createStatement();
			stmt->execute(alterTableQuery);

			delete pstmt;
			delete conn;

			MessageBox::Show("Країна успішно видалена!", "Інформація", MessageBoxButtons::OK, MessageBoxIcon::Information);

			// Оновлюємо ListView
			fillCountryListViewFromDB();
		}
		catch (sql::SQLException& e) {
			MessageBox::Show("SQL Error: " + gcnew String(e.what()), "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	else {
		MessageBox::Show("Виберіть Країну для видалення!", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}	

private: System::Void addCity_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		// Отримання тексту з textBox1 та textBox2
		System::String^ nameCity = nameCityBox->Text;
		System::String^ status = statusBox->Text;
		System::String^ nameCountry = CCbox->SelectedItem->ToString();
		// Перевірка на пустий текст
		if (nameCity->Trim() == "") {
			MessageBox::Show("Name cannot be empty!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		// Отримання ідентифікатора користувача (замість ID_manager)

		// З'єднання з базою даних (використовуйте ваші дані)
		Database connect("tcp://127.0.0.1:3306", "root", "12345", "turagentstvo");
		sql::Connection* conn = connect.getConnection();

		// Виконання запиту SELECT
		sql::PreparedStatement* pstmt = conn->prepareStatement("SELECT ID_country FROM country WHERE Name_of_country = ? ");
		pstmt->setString(1, msclr::interop::marshal_as<std::string>(nameCountry));
		sql::ResultSet* res = pstmt->executeQuery();
		// Отримання ID країни
		int ID_country = -1; // Значення за замовчуванням на випадок, якщо не знайдено
		if (res->next()) {
			ID_country = res->getInt("ID_country");
		}

		// Перевірка, чи знайдено країну
		if (ID_country != -1) {
			pstmt = conn->prepareStatement("INSERT INTO city (Name , Status , ID_country) VALUES ( ? , ? , ? )");
			pstmt->setString(1, msclr::interop::marshal_as<std::string>(nameCity));
			pstmt->setString(2, msclr::interop::marshal_as<std::string>(status));
			pstmt->setInt(3, ID_country);
			pstmt->executeUpdate();
		}
		else {
			// Обробка випадку, коли країну не знайдено
			std::cerr << "Country not found: " << msclr::interop::marshal_as<std::string>(nameCountry) << std::endl;
		}

		// Очищення textBox1 та textBox2 після вставки
		nameCountryBox->Clear();

		// Повідомлення про успішну вставку
		MessageBox::Show("City added successfully!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);

		// Оновлення ListView після вставки
		fillCityListViewFromDB();

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
private: System::Void editCity_Click(System::Object^ sender, System::EventArgs^ e) {
	if (listView2->SelectedItems->Count == 1) {
		if (!isEditMode) {
			// Витягуємо дані вибраного клієнта та заповнюємо текстові поля
			ListViewItem^ selectedItem = listView2->SelectedItems[0];
			selectedManagerID = Int32::Parse(selectedItem->SubItems[0]->Text);
			nameCityBox->Text = selectedItem->SubItems[1]->Text; // Ім'я
			statusBox->Text = selectedItem->SubItems[2]->Text; // Статус
			CCbox->Text = selectedItem->SubItems[3]->Text; // Ім'я країни
			isEditMode = true;
			editCity->Text = "Save";
		}
		else {
			// Перевірка на пусті поля
			if (String::IsNullOrEmpty(nameCityBox->Text) || String::IsNullOrEmpty(statusBox->Text) || String::IsNullOrEmpty(CCbox->Text)) {
				MessageBox::Show("Cant be empty!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			try {
				// Оновлюємо дані клієнта в базі даних
				Database connect("tcp://127.0.0.1:3306", "root", "12345", "turagentstvo");
				sql::Connection* conn = connect.getConnection();

				// Виконання запиту SELECT для отримання ID країни
				sql::PreparedStatement* pstmt = conn->prepareStatement("SELECT ID_country FROM country WHERE Name_of_country = ?");
				pstmt->setString(1, msclr::interop::marshal_as<std::string>(CCbox->Text));
				sql::ResultSet* res = pstmt->executeQuery();

				int ID_country = -1; // Значення за замовчуванням на випадок, якщо не знайдено

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

				// Оновлення даних міста в базі даних
				pstmt = conn->prepareStatement("UPDATE city SET Name = ?, Status = ?, ID_country = ? WHERE ID_city = ?");
				pstmt->setString(1, msclr::interop::marshal_as<std::string>(nameCityBox->Text));
				pstmt->setString(2, msclr::interop::marshal_as<std::string>(statusBox->Text));
				pstmt->setInt(3, ID_country);
				pstmt->setInt(4, selectedManagerID);
				pstmt->executeUpdate();

				// Повідомлення про успішне оновлення
				MessageBox::Show("City updated successfully!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);

				// Очищаємо текстові поля та оновлюємо ListView
				nameCityBox->Clear();
				statusBox->Clear();
				isEditMode = false;
				editCity->Text = "Edit";
				fillCityListViewFromDB();
			}
			catch (sql::SQLException& e) {
				MessageBox::Show("SQL Error: " + gcnew String(e.what()), "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
	}
	else {
		MessageBox::Show("Виберіть місто для редагування!", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void removeCity_Click(System::Object^ sender, System::EventArgs^ e) {
	// Витягуємо ID вибраного клієнта
	ListViewItem^ selectedItem = listView2->SelectedItems[0];
	selectedManagerID = Int32::Parse(selectedItem->SubItems[0]->Text);

	// Відображаємо підтвердження видалення
	System::Windows::Forms::DialogResult result = MessageBox::Show("Are you sure about that?", "Confirm Delete", MessageBoxButtons::YesNo, MessageBoxIcon::Warning);

	if (result == System::Windows::Forms::DialogResult::Yes) {
		try {
			// Видаляємо клієнта з бази даних
			Database connect("tcp://127.0.0.1:3306", "root", "12345", "turagentstvo");
			sql::Connection* conn = connect.getConnection();

			sql::PreparedStatement* pstmt;
			pstmt = conn->prepareStatement("DELETE FROM city WHERE ID_city = ?");
			pstmt->setInt(1, selectedManagerID);

			pstmt->executeUpdate();
			delete pstmt;
			// Оновлюємо значення автоінкременту
			std::string alterTableQuery = "ALTER TABLE city AUTO_INCREMENT = " + std::to_string(selectedManagerID);
			sql::Statement* stmt = conn->createStatement();
			stmt->execute(alterTableQuery);

			delete pstmt;
			delete conn;

			MessageBox::Show("Місто успішно видалено!", "Інформація", MessageBoxButtons::OK, MessageBoxIcon::Information);

			// Оновлюємо ListView
			fillCityListViewFromDB();
		}
		catch (sql::SQLException& e) {
			MessageBox::Show("SQL Error: " + gcnew String(e.what()), "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	else {
		MessageBox::Show("Виберіть Місто для видалення!", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}


private: System::Void addHotel_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		// Отримання тексту з textBox1 та textBox2
		System::String^ nameHotel = hotelBox->Text;
		System::String^ hotelClass = classBox->Text;
		System::String^ city = CityHbox->SelectedItem->ToString();
		// Перевірка на пустий текст
		if (nameHotel->Trim() == "" || hotelClass->Trim() == "" || city->Trim() == "") {
			MessageBox::Show("Name cannot be empty!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		
		// Отримання ідентифікатора користувача (замість ID_manager)

		// З'єднання з базою даних (використовуйте ваші дані)
		Database connect("tcp://127.0.0.1:3306", "root", "12345", "turagentstvo");
		sql::Connection* conn = connect.getConnection();

		// Виконання запиту SELECT
		sql::PreparedStatement* pstmt = conn->prepareStatement("SELECT ID_city FROM city WHERE Name = ? ");
		pstmt->setString(1, msclr::interop::marshal_as<std::string>(city));
		sql::ResultSet* res = pstmt->executeQuery();
		// Отримання ID країни
		int ID_city = -1; // Значення за замовчуванням на випадок, якщо не знайдено
		if (res->next()) {
			ID_city = res->getInt("ID_city");
		}

		// Перевірка, чи знайдено країну
		if (ID_city != -1) {
			pstmt = conn->prepareStatement("INSERT INTO hotel (Name_of_hotel , Class , ID_city , Free_rooms) VALUES ( ? , ? , ? , 0)");
			pstmt->setString(1, msclr::interop::marshal_as<std::string>(nameHotel));
			pstmt->setString(2, msclr::interop::marshal_as<std::string>(hotelClass));
			pstmt->setInt(3, ID_city);
			pstmt->executeUpdate();
		}
		else {
			// Обробка випадку, коли країну не знайдено
			std::cerr << "City not found: " << msclr::interop::marshal_as<std::string>(city) << std::endl;
		}

		// Очищення textBox1 та textBox2 після вставки
		nameCountryBox->Clear();

		// Повідомлення про успішну вставку
		MessageBox::Show("Hotel added successfully!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);

		// Оновлення ListView після вставки
		fillHotelListViewFromDB();

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
private: System::Void editHotel_Click(System::Object^ sender, System::EventArgs^ e) {
	if (listView3->SelectedItems->Count == 1) {
		if (!isEditMode) {
			// Витягуємо дані вибраного готелю та заповнюємо текстові поля
			ListViewItem^ selectedItem = listView3->SelectedItems[0];
			selectedManagerID = Int32::Parse(selectedItem->SubItems[0]->Text);
			hotelBox->Text = selectedItem->SubItems[1]->Text; // Назва готелю
			classBox->Text = selectedItem->SubItems[2]->Text; // Клас готелю
			CHbox->Text = selectedItem->SubItems[4]->Text; // Назва країни
			CityHbox->Text = selectedItem->SubItems[5]->Text; // Назва міста
			isEditMode = true;
			editHotel->Text = "Save";
		}
		else {
			// Перевірка на пусті поля
			if (String::IsNullOrEmpty(hotelBox->Text) || String::IsNullOrEmpty(classBox->Text) || String::IsNullOrEmpty(CHbox->Text) || String::IsNullOrEmpty(CityHbox->Text)) {
				MessageBox::Show("Fields can't be empty!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			try {
				// Оновлюємо дані готелю в базі даних
				Database connect("tcp://127.0.0.1:3306", "root", "12345", "turagentstvo");
				sql::Connection* conn = connect.getConnection();

				// Виконуємо запит до бази даних
				sql::PreparedStatement* pstmt;
				pstmt = conn->prepareStatement("SELECT ID_country, ID_city FROM city WHERE Name = ?");
				pstmt->setString(1, msclr::interop::marshal_as<std::string>(CityHbox->Text));
				sql::ResultSet* cityRes = pstmt->executeQuery();

				int ID_city = -1;
				if (cityRes->next()) {
					ID_city = cityRes->getInt("ID_city");

					// Виконання запиту SELECT для отримання ID країни
					sql::PreparedStatement* pstmtCountry = conn->prepareStatement("SELECT ID_country FROM country WHERE Name_of_country = ?");
					pstmtCountry->setString(1, msclr::interop::marshal_as<std::string>(CHbox->Text));
					sql::ResultSet* countryRes = pstmtCountry->executeQuery();

					if (countryRes->next()) {
						if (countryRes->getInt("ID_country") != cityRes->getInt("ID_country")) {
							MessageBox::Show("The city does not belong to this country!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
							delete countryRes;
							delete pstmtCountry;
							delete cityRes;
							delete pstmt;
							delete conn;
							return;
						}
					}

					delete countryRes;
					delete pstmtCountry;
				}
				else {
					MessageBox::Show("City not found!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					delete cityRes;
					delete pstmt;
					delete conn;
					return;
				}

				// Оновлення даних готелю в базі даних
				pstmt = conn->prepareStatement("UPDATE hotel SET Name_of_hotel = ?, Class = ?, ID_city = ? WHERE ID_hotel = ?");
				pstmt->setString(1, msclr::interop::marshal_as<std::string>(hotelBox->Text));
				pstmt->setString(2, msclr::interop::marshal_as<std::string>(classBox->Text));
				pstmt->setInt(3, ID_city);
				pstmt->setInt(4, selectedManagerID);
				pstmt->executeUpdate();

				// Повідомлення про успішне оновлення
				MessageBox::Show("Hotel updated successfully!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);

				// Очищаємо текстові поля та оновлюємо ListView
				hotelBox->Clear();
				classBox->Clear();
				isEditMode = false;
				editHotel->Text = "Edit";
				fillHotelListViewFromDB();

				delete cityRes;
				delete pstmt;
				delete conn;
			}
			catch (sql::SQLException& e) {
				MessageBox::Show("SQL Error: " + gcnew String(e.what()), "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
	}
	else {
		MessageBox::Show("Select a hotel to edit!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void removeHotel_Click(System::Object^ sender, System::EventArgs^ e) {
	// Витягуємо ID вибраного клієнта
	ListViewItem^ selectedItem = listView3->SelectedItems[0];
	selectedManagerID = Int32::Parse(selectedItem->SubItems[0]->Text);

	// Відображаємо підтвердження видалення
	System::Windows::Forms::DialogResult result = MessageBox::Show("Are you sure about that?", "Confirm Delete", MessageBoxButtons::YesNo, MessageBoxIcon::Warning);

	if (result == System::Windows::Forms::DialogResult::Yes) {
		try {
			// Видаляємо клієнта з бази даних
			Database connect("tcp://127.0.0.1:3306", "root", "12345", "turagentstvo");
			sql::Connection* conn = connect.getConnection();

			sql::PreparedStatement* pstmt;
			pstmt = conn->prepareStatement("DELETE FROM hotel WHERE ID_hotel = ?");
			pstmt->setInt(1, selectedManagerID);

			pstmt->executeUpdate();
			delete pstmt;
			// Оновлюємо значення автоінкременту
			std::string alterTableQuery = "ALTER TABLE hotel AUTO_INCREMENT = " + std::to_string(selectedManagerID);
			sql::Statement* stmt = conn->createStatement();
			stmt->execute(alterTableQuery);

			delete pstmt;
			delete conn;

			MessageBox::Show("Готель успішно видалено!", "Інформація", MessageBoxButtons::OK, MessageBoxIcon::Information);

			// Оновлюємо ListView
			fillHotelListViewFromDB();
		}
		catch (sql::SQLException& e) {
			MessageBox::Show("SQL Error: " + gcnew String(e.what()), "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	else {
		MessageBox::Show("Виберіть Місто для видалення!", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}

private: System::Void CHbox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	CityHbox->Items->Clear(); // Очищаємо ComboBox перед заповненням
	std::string Name_of_country = msclr::interop::marshal_as<std::string>(CHbox->Text);
	try {
		// З'єднання з базою даних
		Database connect("tcp://127.0.0.1:3306", "root", "12345", "turagentstvo");
		sql::Connection* conn = connect.getConnection();

		// Виконуємо запит до бази даних
		sql::PreparedStatement* pstmt;
		pstmt = conn->prepareStatement("SELECT ID_country FROM country WHERE Name_of_country = ?");
		pstmt->setString(1, msclr::interop::marshal_as<std::string>(CHbox->Text));
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
		pstmt = conn->prepareStatement("SELECT Name FROM city WHERE ID_country = ?");
		pstmt->setInt(1, ID_country);
		res = pstmt->executeQuery();

		while (res->next()) {
			String^ cityName = gcnew String(res->getString("Name").c_str());
			CityHbox->Items->Add(cityName);
		}

		delete res;
		delete pstmt;
		delete conn;
	}
	catch (sql::SQLException& e) {
		MessageBox::Show("SQL Error: " + gcnew String(e.what()), "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}


private: System::Void addRoom_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		// Отримання тексту з textBox1 та textBox2
		System::String^ nameHotel = HRbox->Text;
		System::String^ roomClass = roomClassBox->Text;
		int cost = Int32::Parse(costBox->Text);
		int beds = Int32::Parse(bedsBox->Text);
		System::String^ dateOfIn = dateTimePicker1->Value.ToString("yyyy-MM-dd");
		System::String^ dateOfOut = dateTimePicker2->Value.ToString("yyyy-MM-dd");
		int tour;
		try {
			tour = Int32::Parse(tourBox->Text);
		}
		catch (System::Exception^ ex) {
			tour = 0;
		}

		// Перевірка на пустий текст
		if (nameHotel->Trim() == "" || roomClass->Trim() == "" || cost <= 0 || beds <= 0) {
			MessageBox::Show("Name cannot be empty!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		// Отримання ідентифікатора користувача (замість ID_manager)

		// З'єднання з базою даних (використовуйте ваші дані)
		Database connect("tcp://127.0.0.1:3306", "root", "12345", "turagentstvo");
		sql::Connection* conn = connect.getConnection();

		// Виконання запиту SELECT
		// Виконання запиту SELECT
		sql::PreparedStatement* pstmt = conn->prepareStatement("SELECT ID_hotel FROM hotel WHERE Name_of_hotel = ? ");
		pstmt->setString(1, msclr::interop::marshal_as<std::string>(nameHotel));
		sql::ResultSet* res = pstmt->executeQuery();
		// Отримання ID країни
		int ID_hotel = -1; // Значення за замовчуванням на випадок, якщо не знайдено
		if (res->next()) {
			ID_hotel = res->getInt("ID_hotel");
		}

		// Перевірка, чи знайдено путівку
		if (ID_hotel != -1 ) {
			if (tour != 0) {
				pstmt = conn->prepareStatement("INSERT INTO room (ID_hotel , Class_of_room , Cost_for_day , Quantity_of_beds, Date_of_in, Date_of_out, ID_tour) VALUES ( ? , ? , ? , ? , ? , ? , ?)");
				pstmt->setInt(1, ID_hotel);
				pstmt->setString(2, msclr::interop::marshal_as<std::string>(roomClass));
				pstmt->setInt(3, cost);
				pstmt->setInt(4, beds);
				pstmt->setString(5, msclr::interop::marshal_as<std::string>(dateOfIn));
				pstmt->setString(6, msclr::interop::marshal_as<std::string>(dateOfOut));
				pstmt->setInt(7, tour);
				pstmt->executeUpdate();
			}
			else {
				pstmt = conn->prepareStatement("INSERT INTO room (ID_hotel , Class_of_room , Cost_for_day , Quantity_of_beds, Date_of_in, Date_of_out) VALUES ( ? , ? , ? , ? , ? , ? )");
				pstmt->setInt(1, ID_hotel);
				pstmt->setString(2, msclr::interop::marshal_as<std::string>(roomClass));
				pstmt->setInt(3, cost);
				pstmt->setInt(4, beds);
				pstmt->setString(5, msclr::interop::marshal_as<std::string>(dateOfIn));
				pstmt->setString(6, msclr::interop::marshal_as<std::string>(dateOfOut));
				pstmt->executeUpdate();
			}

		}
		
		// Очищення textBox1 та textBox2 після вставки
		nameCountryBox->Clear();

		// Повідомлення про успішну вставку
		MessageBox::Show("Room added successfully!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);

		// Оновлення ListView після вставки
		fillRoomListViewFromDB();

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
private: System::Void editRoom_Click(System::Object^ sender, System::EventArgs^ e) {
	if (listView4->SelectedItems->Count == 1) {
		if (!isEditMode) {
			// Витягуємо дані вибраного клієнта та заповнюємо текстові поля
			ListViewItem^ selectedItem = listView4->SelectedItems[0];
			selectedManagerID = Int32::Parse(selectedItem->SubItems[0]->Text);
			HRbox->Text = selectedItem->SubItems[1]->Text; // Ім'я
			roomClassBox->Text = selectedItem->SubItems[2]->Text; // Ім'я
				costBox->Text = selectedItem->SubItems[3]->Text; // Ім'я
				bedsBox->Text = selectedItem->SubItems[4]->Text; // Ім'я
				dateTimePicker1->Text = selectedItem->SubItems[5]->Text; // Ім'я
				dateTimePicker2->Text = selectedItem->SubItems[6]->Text; // Ім'я
			isEditMode = true;
			editRoom->Text = "Save";
		}
		else {
			

			try {
				// Оновлюємо дані клієнта в базі даних
				Database connect("tcp://127.0.0.1:3306", "root", "12345", "turagentstvo");
				sql::Connection* conn = connect.getConnection();

				System::String^ nameHotel = HRbox->Text;
				System::String^ roomClass = roomClassBox->Text;
				int cost = Int32::Parse(costBox->Text);
				int beds = Int32::Parse(bedsBox->Text);
				System::String^ dateOfIn = dateTimePicker1->Value.ToString("yyyy-MM-dd");
				System::String^ dateOfOut = dateTimePicker2->Value.ToString("yyyy-MM-dd");
				int tour;
				try {
					tour = Int32::Parse(tourBox->Text);
				}
				catch (System::Exception^ ex) {
					tour = 0;
				}
				// Перевірка на пусті поля
				if (nameHotel->Trim() == "" || roomClass->Trim() == "" || cost <= 0 || beds <= 0) {
					MessageBox::Show("Cannot be empty!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return;
				}
				sql::PreparedStatement* pstmt = conn->prepareStatement("SELECT ID_hotel FROM hotel WHERE Name_of_hotel = ? ");
				pstmt->setString(1, msclr::interop::marshal_as<std::string>(nameHotel));
				sql::ResultSet* res = pstmt->executeQuery();
				// Отримання ID країни
				int ID_hotel = -1; // Значення за замовчуванням на випадок, якщо не знайдено
				if (res->next()) {
					ID_hotel = res->getInt("ID_hotel");
				}

				// Перевірка, чи знайдено путівку
				if (ID_hotel != -1) {
					if (tour != 0) {

						sql::PreparedStatement* pstmt;
						pstmt = conn->prepareStatement("UPDATE room SET ID_hotel = ? , Class_of_room = ? , Cost_for_day = ? , Quantity_of_beds = ? , Date_of_in = ? , Date_of_out = ? , ID_tour = ? WHERE ID_room = ?");
						pstmt->setInt(1, ID_hotel);
						pstmt->setString(2, msclr::interop::marshal_as<std::string>(roomClass));
						pstmt->setInt(3, cost);
						pstmt->setInt(4, beds);
						pstmt->setString(5, msclr::interop::marshal_as<std::string>(dateOfIn));
						pstmt->setString(6, msclr::interop::marshal_as<std::string>(dateOfOut));
						pstmt->setInt(7, tour);
						pstmt->setInt(8, selectedManagerID);
						pstmt->executeUpdate();
					}
					else {
						pstmt = conn->prepareStatement("UPDATE room SET ID_hotel = ? , Class_of_room = ? , Cost_for_day = ? , Quantity_of_beds = ? , Date_of_in = ? , Date_of_out = ? WHERE ID_room = ?");
						pstmt->setInt(1, ID_hotel);
						pstmt->setString(2, msclr::interop::marshal_as<std::string>(roomClass));
						pstmt->setInt(3, cost);
						pstmt->setInt(4, beds);
						pstmt->setString(5, msclr::interop::marshal_as<std::string>(dateOfIn));
						pstmt->setString(6, msclr::interop::marshal_as<std::string>(dateOfOut));
						pstmt->setInt(7, selectedManagerID);
						pstmt->executeUpdate();
					}

					delete pstmt;
					delete conn;

					MessageBox::Show("Кімната успішно оновлена!", "Інформація", MessageBoxButtons::OK, MessageBoxIcon::Information);

					// Очищаємо текстові поля та оновлюємо ListView
					nameCountryBox->Clear();
					isEditMode = false;
					editRoom->Text = "Edit";
					fillRoomListViewFromDB();
				}
			}
			catch (sql::SQLException& e) {
				MessageBox::Show("SQL Error: " + gcnew String(e.what()), "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
	}
	else {
		MessageBox::Show("Виберіть кімнату для редагування!", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void removeRoom_Click(System::Object^ sender, System::EventArgs^ e) {
	// Витягуємо ID вибраного клієнта
	ListViewItem^ selectedItem = listView4->SelectedItems[0];
	selectedManagerID = Int32::Parse(selectedItem->SubItems[0]->Text);

	// Відображаємо підтвердження видалення
	System::Windows::Forms::DialogResult result = MessageBox::Show("Are you sure about that?", "Confirm Delete", MessageBoxButtons::YesNo, MessageBoxIcon::Warning);

	if (result == System::Windows::Forms::DialogResult::Yes) {
		try {
			// Видаляємо клієнта з бази даних
			Database connect("tcp://127.0.0.1:3306", "root", "12345", "turagentstvo");
			sql::Connection* conn = connect.getConnection();

			sql::PreparedStatement* pstmt;
			pstmt = conn->prepareStatement("DELETE FROM room WHERE ID_room = ?");
			pstmt->setInt(1, selectedManagerID);

			pstmt->executeUpdate();
			delete pstmt;
			// Оновлюємо значення автоінкременту
			std::string alterTableQuery = "ALTER TABLE room AUTO_INCREMENT = " + std::to_string(selectedManagerID);
			sql::Statement* stmt = conn->createStatement();
			stmt->execute(alterTableQuery);
			fillRoomListViewFromDB();
			delete pstmt;
			delete conn;

			MessageBox::Show("Кімнату успішно видалено!", "Інформація", MessageBoxButtons::OK, MessageBoxIcon::Information);

		}
		catch (sql::SQLException& e) {
			MessageBox::Show("SQL Error: " + gcnew String(e.what()), "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	else {
		MessageBox::Show("Виберіть кімнату для видалення!", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void dateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	dateTimePicker1->MaxDate = System::DateTime(dateTimePicker2->Value.Year, dateTimePicker2->Value.Month, dateTimePicker2->Value.Day, 0, 0, 0, 0);
	dateTimePicker2->MinDate = System::DateTime(dateTimePicker1->Value.Year, dateTimePicker1->Value.Month, dateTimePicker1->Value.Day, 0, 0, 0, 0);
}
private: System::Void dateTimePicker2_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	dateTimePicker1->MaxDate = System::DateTime(dateTimePicker2->Value.Year, dateTimePicker2->Value.Month, dateTimePicker2->Value.Day, 0, 0, 0, 0);
	dateTimePicker2->MinDate = System::DateTime(dateTimePicker1->Value.Year, dateTimePicker1->Value.Month, dateTimePicker1->Value.Day, 0, 0, 0, 0);
}
private: System::Void CityHbox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	HRbox->Items->Clear(); // Очищаємо ComboBox перед заповненням
	std::string Name_of_city = msclr::interop::marshal_as<std::string>(CityHbox->Text);
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
			HRbox->Items->Add(hotelName);
		}

		delete res;
		delete pstmt;
		delete conn;
	}
	catch (sql::SQLException& e) {
		MessageBox::Show("SQL Error: " + gcnew String(e.what()), "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
};
}
