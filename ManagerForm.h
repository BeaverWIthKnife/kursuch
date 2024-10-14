#include "includes.h"
#include "ClientListForm.h"
#include "TourForm.h"
#include "MapForm.h"
#pragma once

namespace Project6 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ManagerForm1
	/// </summary>
	public ref class ManagerForm : public System::Windows::Forms::Form
	{
	public:
		ManagerForm(int idUser)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			userID = idUser;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ManagerForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Button^ clientListButton;
	private: System::Windows::Forms::Button^ button1;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
	private: System::Windows::Forms::Button^ button2;
		   int userID;
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->clientListButton = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Minecraft Title Cyrillic", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(63, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(607, 92);
			this->label1->TabIndex = 6;
			this->label1->Text = L"in the way!";
			// 
			// clientListButton
			// 
			this->clientListButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->clientListButton->Font = (gcnew System::Drawing::Font(L"Minecraft Title Cyrillic", 24, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->clientListButton->Location = System::Drawing::Point(32, 153);
			this->clientListButton->Name = L"clientListButton";
			this->clientListButton->Size = System::Drawing::Size(673, 52);
			this->clientListButton->TabIndex = 5;
			this->clientListButton->Text = L"show client list";
			this->clientListButton->UseVisualStyleBackColor = true;
			this->clientListButton->Click += gcnew System::EventHandler(this, &ManagerForm::clientListButton_Click);
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button1->Font = (gcnew System::Drawing::Font(L"Minecraft Title Cyrillic", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(33, 229);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(673, 52);
			this->button1->TabIndex = 7;
			this->button1->Text = L"show tour list";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ManagerForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button2->Font = (gcnew System::Drawing::Font(L"Minecraft Title Cyrillic", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(33, 303);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(673, 52);
			this->button2->TabIndex = 8;
			this->button2->Text = L"show map";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &ManagerForm::button2_Click);
			// 
			// ManagerForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(739, 409);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->clientListButton);
			this->Name = L"ManagerForm";
			this->Text = L"ManagerForm1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void clientListButton_Click(System::Object^ sender, System::EventArgs^ e) {
		ClientListForm^ clientListForm = gcnew ClientListForm(userID);
		clientListForm->Show();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		TourForm^ tourForm = gcnew TourForm();
		tourForm->Show();
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	MapForm^ mapForm = gcnew MapForm();
	mapForm->Show();
}
};
}
