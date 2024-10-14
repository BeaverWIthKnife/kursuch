#pragma once

namespace Project6 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for TransportForm
	/// </summary>
	public ref class TransportForm : public System::Windows::Forms::Form
	{
	public:
		TransportForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~TransportForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ statusBox;
	private: System::Windows::Forms::Button^ editCity;
	private: System::Windows::Forms::Button^ removeCity;
	private: System::Windows::Forms::Button^ addCity;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ nameCityBox;
	private: System::Windows::Forms::ListView^ listView2;
	private: System::Windows::Forms::ColumnHeader^ columnHeader2;
	private: System::Windows::Forms::ColumnHeader^ columnHeader3;
	private: System::Windows::Forms::ColumnHeader^ columnHeader4;
	private: System::Windows::Forms::ColumnHeader^ columnHeader5;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::ListBox^ cityListBox;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ListBox^ countryListBox;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::ListView^ listView1;
	private: System::Windows::Forms::ColumnHeader^ columnHeader1;
	private: System::Windows::Forms::ColumnHeader^ columnHeader6;
	private: System::Windows::Forms::ColumnHeader^ columnHeader7;
	private: System::Windows::Forms::ColumnHeader^ columnHeader8;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::ListBox^ cityRouteBox;
	private: System::Windows::Forms::ListBox^ transportBox;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker2;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;



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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->statusBox = (gcnew System::Windows::Forms::TextBox());
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
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->cityListBox = (gcnew System::Windows::Forms::ListBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->countryListBox = (gcnew System::Windows::Forms::ListBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader6 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader7 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader8 = (gcnew System::Windows::Forms::ColumnHeader());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->cityRouteBox = (gcnew System::Windows::Forms::ListBox());
			this->transportBox = (gcnew System::Windows::Forms::ListBox());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(207, 111);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(71, 31);
			this->label2->TabIndex = 72;
			this->label2->Text = L"Cost";
			// 
			// statusBox
			// 
			this->statusBox->Location = System::Drawing::Point(213, 154);
			this->statusBox->Name = L"statusBox";
			this->statusBox->Size = System::Drawing::Size(104, 20);
			this->statusBox->TabIndex = 71;
			// 
			// editCity
			// 
			this->editCity->Location = System::Drawing::Point(12, 139);
			this->editCity->Name = L"editCity";
			this->editCity->Size = System::Drawing::Size(66, 23);
			this->editCity->TabIndex = 70;
			this->editCity->Text = L"Edit";
			this->editCity->UseVisualStyleBackColor = true;
			// 
			// removeCity
			// 
			this->removeCity->Location = System::Drawing::Point(12, 168);
			this->removeCity->Name = L"removeCity";
			this->removeCity->Size = System::Drawing::Size(66, 23);
			this->removeCity->TabIndex = 69;
			this->removeCity->Text = L"Remove";
			this->removeCity->UseVisualStyleBackColor = true;
			// 
			// addCity
			// 
			this->addCity->Location = System::Drawing::Point(12, 110);
			this->addCity->Name = L"addCity";
			this->addCity->Size = System::Drawing::Size(66, 23);
			this->addCity->TabIndex = 68;
			this->addCity->Text = L"Add";
			this->addCity->UseVisualStyleBackColor = true;
			this->addCity->Click += gcnew System::EventHandler(this, &TransportForm::addCity_Click);
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(93, 111);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(75, 31);
			this->label1->TabIndex = 67;
			this->label1->Text = L"Type";
			// 
			// nameCityBox
			// 
			this->nameCityBox->Location = System::Drawing::Point(90, 154);
			this->nameCityBox->Name = L"nameCityBox";
			this->nameCityBox->Size = System::Drawing::Size(116, 20);
			this->nameCityBox->TabIndex = 66;
			this->nameCityBox->TextChanged += gcnew System::EventHandler(this, &TransportForm::nameCityBox_TextChanged);
			// 
			// listView2
			// 
			this->listView2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->listView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(4) {
				this->columnHeader2, this->columnHeader3,
					this->columnHeader4, this->columnHeader5
			});
			this->listView2->HideSelection = false;
			this->listView2->Location = System::Drawing::Point(12, 197);
			this->listView2->Name = L"listView2";
			this->listView2->Size = System::Drawing::Size(456, 180);
			this->listView2->TabIndex = 65;
			this->listView2->UseCompatibleStateImageBehavior = false;
			this->listView2->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"ID transport";
			this->columnHeader2->Width = 74;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"Type ";
			this->columnHeader3->Width = 129;
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"Cost";
			this->columnHeader4->Width = 115;
			// 
			// columnHeader5
			// 
			this->columnHeader5->Text = L"Free tickets";
			this->columnHeader5->Width = 127;
			// 
			// label9
			// 
			this->label9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(356, 111);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(72, 31);
			this->label9->TabIndex = 75;
			this->label9->Text = L"Date";
			// 
			// cityListBox
			// 
			this->cityListBox->FormattingEnabled = true;
			this->cityListBox->Location = System::Drawing::Point(257, 52);
			this->cityListBox->Name = L"cityListBox";
			this->cityListBox->Size = System::Drawing::Size(211, 17);
			this->cityListBox->TabIndex = 80;
			// 
			// label6
			// 
			this->label6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(251, 9);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(62, 31);
			this->label6->TabIndex = 79;
			this->label6->Text = L"City";
			// 
			// countryListBox
			// 
			this->countryListBox->FormattingEnabled = true;
			this->countryListBox->Location = System::Drawing::Point(5, 52);
			this->countryListBox->Name = L"countryListBox";
			this->countryListBox->Size = System::Drawing::Size(201, 17);
			this->countryListBox->TabIndex = 78;
			// 
			// label5
			// 
			this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(12, 9);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(110, 31);
			this->label5->TabIndex = 77;
			this->label5->Text = L"Country";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 453);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(66, 23);
			this->button1->TabIndex = 84;
			this->button1->Text = L"Edit";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 482);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(66, 23);
			this->button2->TabIndex = 83;
			this->button2->Text = L"Remove";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(12, 424);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(66, 23);
			this->button3->TabIndex = 82;
			this->button3->Text = L"Add";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// listView1
			// 
			this->listView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(4) {
				this->columnHeader1, this->columnHeader6,
					this->columnHeader7, this->columnHeader8
			});
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(12, 511);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(456, 180);
			this->listView1->TabIndex = 81;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"ID route";
			this->columnHeader1->Width = 74;
			// 
			// columnHeader6
			// 
			this->columnHeader6->Text = L"ID city";
			this->columnHeader6->Width = 129;
			// 
			// columnHeader7
			// 
			this->columnHeader7->Text = L"ID transpot";
			this->columnHeader7->Width = 115;
			// 
			// columnHeader8
			// 
			this->columnHeader8->Text = L"Date";
			this->columnHeader8->Width = 127;
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(207, 424);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(131, 31);
			this->label3->TabIndex = 88;
			this->label3->Text = L"Transport";
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(93, 424);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(62, 31);
			this->label4->TabIndex = 86;
			this->label4->Text = L"City";
			this->label4->Click += gcnew System::EventHandler(this, &TransportForm::label4_Click);
			// 
			// cityRouteBox
			// 
			this->cityRouteBox->FormattingEnabled = true;
			this->cityRouteBox->Location = System::Drawing::Point(99, 459);
			this->cityRouteBox->Name = L"cityRouteBox";
			this->cityRouteBox->Size = System::Drawing::Size(107, 17);
			this->cityRouteBox->TabIndex = 91;
			this->cityRouteBox->SelectedIndexChanged += gcnew System::EventHandler(this, &TransportForm::cityRouteBox_SelectedIndexChanged);
			// 
			// transportBox
			// 
			this->transportBox->FormattingEnabled = true;
			this->transportBox->Location = System::Drawing::Point(213, 459);
			this->transportBox->Name = L"transportBox";
			this->transportBox->Size = System::Drawing::Size(113, 17);
			this->transportBox->TabIndex = 92;
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Location = System::Drawing::Point(336, 459);
			this->dateTimePicker2->MaxDate = System::DateTime(2024, 6, 1, 18, 44, 20, 0);
			this->dateTimePicker2->MinDate = System::DateTime(2024, 1, 1, 0, 0, 0, 0);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(132, 20);
			this->dateTimePicker2->TabIndex = 94;
			this->dateTimePicker2->Value = System::DateTime(2024, 6, 1, 0, 0, 0, 0);
			// 
			// label7
			// 
			this->label7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(356, 424);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(72, 31);
			this->label7->TabIndex = 93;
			this->label7->Text = L"Date";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(336, 154);
			this->dateTimePicker1->MaxDate = System::DateTime(2024, 6, 1, 18, 44, 20, 0);
			this->dateTimePicker1->MinDate = System::DateTime(2024, 1, 1, 0, 0, 0, 0);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(132, 20);
			this->dateTimePicker1->TabIndex = 76;
			this->dateTimePicker1->Value = System::DateTime(2024, 6, 1, 0, 0, 0, 0);
			// 
			// TransportForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(483, 706);
			this->Controls->Add(this->dateTimePicker2);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->transportBox);
			this->Controls->Add(this->cityRouteBox);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->cityListBox);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->countryListBox);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->statusBox);
			this->Controls->Add(this->editCity);
			this->Controls->Add(this->removeCity);
			this->Controls->Add(this->addCity);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->nameCityBox);
			this->Controls->Add(this->listView2);
			this->Name = L"TransportForm";
			this->Text = L"TransportForm";
			this->Load += gcnew System::EventHandler(this, &TransportForm::TransportForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}


#pragma endregion
private: System::Void TransportForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void cityRouteBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void nameCityBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void addCity_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
