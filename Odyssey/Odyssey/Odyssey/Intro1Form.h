#pragma once

#include "LeftForm.h"
#include "RightForm.h"
#include "NorthForm.h"

namespace Odyssey {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Intro1Form
	/// </summary>
	public ref class Intro1Form : public System::Windows::Forms::Form
	{
	public:
		Intro1Form(void)
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
		~Intro1Form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ btnLeft;
	private: System::Windows::Forms::Button^ btnNorth;
	private: System::Windows::Forms::Button^ btnRight;
	private: System::Windows::Forms::Label^ label2;


	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Intro1Form::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->btnLeft = (gcnew System::Windows::Forms::Button());
			this->btnNorth = (gcnew System::Windows::Forms::Button());
			this->btnRight = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Location = System::Drawing::Point(407, 352);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label1->Size = System::Drawing::Size(158, 18);
			this->label1->TabIndex = 1;
			this->label1->Text = L"What would you do\?";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 8.249999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(1220, 454);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 28);
			this->button1->TabIndex = 2;
			this->button1->Text = L"next";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// btnLeft
			// 
			this->btnLeft->BackColor = System::Drawing::Color::Transparent;
			this->btnLeft->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnLeft->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLeft->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnLeft->Location = System::Drawing::Point(40, 399);
			this->btnLeft->Name = L"btnLeft";
			this->btnLeft->Size = System::Drawing::Size(247, 40);
			this->btnLeft->TabIndex = 3;
			this->btnLeft->Text = L"Go to Left";
			this->btnLeft->UseVisualStyleBackColor = false;
			this->btnLeft->Click += gcnew System::EventHandler(this, &Intro1Form::btnLeft_Click);
			// 
			// btnNorth
			// 
			this->btnNorth->BackColor = System::Drawing::Color::Transparent;
			this->btnNorth->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnNorth->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnNorth->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnNorth->Location = System::Drawing::Point(371, 399);
			this->btnNorth->Name = L"btnNorth";
			this->btnNorth->Size = System::Drawing::Size(247, 40);
			this->btnNorth->TabIndex = 4;
			this->btnNorth->Text = L"Go up north";
			this->btnNorth->UseVisualStyleBackColor = false;
			this->btnNorth->Click += gcnew System::EventHandler(this, &Intro1Form::btnNorth_Click);
			// 
			// btnRight
			// 
			this->btnRight->BackColor = System::Drawing::Color::Transparent;
			this->btnRight->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnRight->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRight->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnRight->Location = System::Drawing::Point(686, 399);
			this->btnRight->Name = L"btnRight";
			this->btnRight->Size = System::Drawing::Size(247, 40);
			this->btnRight->TabIndex = 5;
			this->btnRight->Text = L"Go to right";
			this->btnRight->UseVisualStyleBackColor = false;
			this->btnRight->Click += gcnew System::EventHandler(this, &Intro1Form::btnRight_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(37, 57);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label2->Size = System::Drawing::Size(896, 54);
			this->label2->TabIndex = 6;
			this->label2->Text = resources->GetString(L"label2.Text");
			// 
			// Intro1Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1003, 470);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->btnRight);
			this->Controls->Add(this->btnNorth);
			this->Controls->Add(this->btnLeft);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Intro1Form";
			this->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Intro1Form";
			this->Load += gcnew System::EventHandler(this, &Intro1Form::Intro1Form_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Intro1Form_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnLeft_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		LeftForm^ left = gcnew LeftForm(this);

		left->Show();


	}
private: System::Void btnRight_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	RightForm^ right = gcnew RightForm(this);

	right->Show();
}
private: System::Void btnNorth_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	NorthForm^ north = gcnew NorthForm();

	north->Show();
}

};
}
