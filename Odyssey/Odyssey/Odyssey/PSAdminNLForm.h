#pragma once

#include "PSPhoneForm.h"
#include "PSSafeForm.h"
#include "PSFigurineForm.h"

namespace Odyssey {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for PSAdminNLForm
	/// </summary>
	public ref class PSAdminNLForm : public System::Windows::Forms::Form
	{
	public:
		PSAdminNLForm(void)
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
		~PSAdminNLForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnPhone;
	private: System::Windows::Forms::Button^ btnSafe;
	private: System::Windows::Forms::Button^ button1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PSAdminNLForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnPhone = (gcnew System::Windows::Forms::Button());
			this->btnSafe = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Location = System::Drawing::Point(409, 388);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(158, 18);
			this->label1->TabIndex = 0;
			this->label1->Text = L"What would you do\?";
			this->label1->Click += gcnew System::EventHandler(this, &PSAdminNLForm::label1_Click);
			// 
			// btnPhone
			// 
			this->btnPhone->BackColor = System::Drawing::Color::Transparent;
			this->btnPhone->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnPhone->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPhone->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnPhone->Location = System::Drawing::Point(78, 424);
			this->btnPhone->Name = L"btnPhone";
			this->btnPhone->Size = System::Drawing::Size(249, 47);
			this->btnPhone->TabIndex = 1;
			this->btnPhone->Text = L"Check the phone";
			this->btnPhone->UseVisualStyleBackColor = false;
			this->btnPhone->Click += gcnew System::EventHandler(this, &PSAdminNLForm::btnPhone_Click);
			// 
			// btnSafe
			// 
			this->btnSafe->BackColor = System::Drawing::Color::Transparent;
			this->btnSafe->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnSafe->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSafe->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnSafe->Location = System::Drawing::Point(367, 424);
			this->btnSafe->Name = L"btnSafe";
			this->btnSafe->Size = System::Drawing::Size(249, 47);
			this->btnSafe->TabIndex = 2;
			this->btnSafe->Text = L"Open the safe";
			this->btnSafe->UseVisualStyleBackColor = false;
			this->btnSafe->Click += gcnew System::EventHandler(this, &PSAdminNLForm::btnSafe_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button1->Location = System::Drawing::Point(671, 424);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(249, 47);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Inspect the figurine on the desk";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &PSAdminNLForm::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label2->Location = System::Drawing::Point(27, 45);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(945, 54);
			this->label2->TabIndex = 4;
			this->label2->Text = resources->GetString(L"label2.Text");
			// 
			// PSAdminNLForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1000, 500);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->btnSafe);
			this->Controls->Add(this->btnPhone);
			this->Controls->Add(this->label1);
			this->Name = L"PSAdminNLForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"PSAdminNLForm";
			this->Load += gcnew System::EventHandler(this, &PSAdminNLForm::PSAdminNLForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void PSAdminNLForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnPhone_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		PSPhoneForm^ phone = gcnew PSPhoneForm();

		phone->Show();
	}
private: System::Void btnSafe_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	PSSafeForm^ sss = gcnew PSSafeForm();

	sss->Show();
}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		PSFigurineForm^ figg = gcnew PSFigurineForm();

		figg->Show();
	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
