#include "ClientListForm.h"
#include "ManagerListForm.h"
#include "TourForm.h"
#include "MapForm.h"
#include "TransportForm.h"
#pragma once



namespace Project6 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AdminForm
	/// </summary>
	public ref class AdminForm : public System::Windows::Forms::Form
	{
	public:
		int userID;
		AdminForm(int number_user)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			userID = number_user;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AdminForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ clientListButton;
	protected:
	private: System::Windows::Forms::Button^ managerListButton;
	private: System::Windows::Forms::Button^ tourListButton;
	private: System::Windows::Forms::Button^ admn;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ map;

	private: System::Windows::Forms::Button^ button3;

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
			this->clientListButton = (gcnew System::Windows::Forms::Button());
			this->managerListButton = (gcnew System::Windows::Forms::Button());
			this->tourListButton = (gcnew System::Windows::Forms::Button());
			this->admn = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->map = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// clientListButton
			// 
			this->clientListButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->clientListButton->Font = (gcnew System::Drawing::Font(L"Minecraft Title Cyrillic", 24, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->clientListButton->Location = System::Drawing::Point(12, 149);
			this->clientListButton->Name = L"clientListButton";
			this->clientListButton->Size = System::Drawing::Size(673, 52);
			this->clientListButton->TabIndex = 0;
			this->clientListButton->Text = L"show client list";
			this->clientListButton->UseVisualStyleBackColor = true;
			this->clientListButton->Click += gcnew System::EventHandler(this, &AdminForm::clientListButton_Click);
			// 
			// managerListButton
			// 
			this->managerListButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->managerListButton->Font = (gcnew System::Drawing::Font(L"Minecraft Title Cyrillic", 24, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->managerListButton->Location = System::Drawing::Point(12, 219);
			this->managerListButton->Name = L"managerListButton";
			this->managerListButton->Size = System::Drawing::Size(673, 52);
			this->managerListButton->TabIndex = 1;
			this->managerListButton->Text = L"show manager list";
			this->managerListButton->UseVisualStyleBackColor = true;
			this->managerListButton->Click += gcnew System::EventHandler(this, &AdminForm::managerListButton_Click);
			// 
			// tourListButton
			// 
			this->tourListButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tourListButton->Font = (gcnew System::Drawing::Font(L"Minecraft Title Cyrillic", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tourListButton->Location = System::Drawing::Point(12, 291);
			this->tourListButton->Name = L"tourListButton";
			this->tourListButton->Size = System::Drawing::Size(673, 52);
			this->tourListButton->TabIndex = 2;
			this->tourListButton->Text = L"show tour list";
			this->tourListButton->UseVisualStyleBackColor = true;
			this->tourListButton->Click += gcnew System::EventHandler(this, &AdminForm::tourListButton_Click);
			// 
			// admn
			// 
			this->admn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->admn->Font = (gcnew System::Drawing::Font(L"Minecraft Title Cyrillic", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->admn->Location = System::Drawing::Point(12, 368);
			this->admn->Name = L"admn";
			this->admn->Size = System::Drawing::Size(673, 52);
			this->admn->TabIndex = 3;
			this->admn->Text = L"show admin list";
			this->admn->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Minecraft Title Cyrillic", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(43, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(607, 92);
			this->label1->TabIndex = 4;
			this->label1->Text = L"in the way!";
			// 
			// map
			// 
			this->map->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->map->Font = (gcnew System::Drawing::Font(L"Minecraft Title Cyrillic", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->map->Location = System::Drawing::Point(12, 437);
			this->map->Name = L"map";
			this->map->Size = System::Drawing::Size(673, 52);
			this->map->TabIndex = 5;
			this->map->Text = L"show map";
			this->map->UseVisualStyleBackColor = true;
			this->map->Click += gcnew System::EventHandler(this, &AdminForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button3->Font = (gcnew System::Drawing::Font(L"Minecraft Title Cyrillic", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(12, 506);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(673, 52);
			this->button3->TabIndex = 6;
			this->button3->Text = L"show transport list";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &AdminForm::button3_Click);
			// 
			// AdminForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(697, 576);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->map);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->admn);
			this->Controls->Add(this->tourListButton);
			this->Controls->Add(this->managerListButton);
			this->Controls->Add(this->clientListButton);
			this->Name = L"AdminForm";
			this->Text = L"AdminForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
	private: System::Void clientListButton_Click(System::Object^ sender, System::EventArgs^ e) {
		ClientListForm^ clientListForm = gcnew ClientListForm(userID);
		clientListForm->Show();
	}
	private: System::Void managerListButton_Click(System::Object^ sender, System::EventArgs^ e) {
		ManagerListForm^ managerListForm = gcnew ManagerListForm(userID);
		managerListForm->Show();
	}
	private: System::Void tourListButton_Click(System::Object^ sender, System::EventArgs^ e) {
		TourForm^ tourForm = gcnew TourForm();
		tourForm->Show();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		MapForm^ mapForm = gcnew MapForm();
		mapForm->Show();
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	TransportForm^ mapForm = gcnew TransportForm();
	mapForm->Show();
}
};
}
