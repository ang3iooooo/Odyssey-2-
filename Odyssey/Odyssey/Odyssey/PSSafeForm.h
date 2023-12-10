#pragma once

#include "PSPhoneForm.h"
#include "PSFigurineForm.h"

namespace Odyssey {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for PSSafeForm
	/// </summary>
	public ref class PSSafeForm : public System::Windows::Forms::Form
	{
	public:
		PSSafeForm(void)
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
		~PSSafeForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnPhone;
	private: System::Windows::Forms::Button^ button1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PSSafeForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnPhone = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Black;
			this->label1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Location = System::Drawing::Point(12, 50);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(964, 36);
			this->label1->TabIndex = 0;
			this->label1->Text = resources->GetString(L"label1.Text");
			// 
			// btnPhone
			// 
			this->btnPhone->BackColor = System::Drawing::Color::Transparent;
			this->btnPhone->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnPhone->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPhone->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnPhone->Location = System::Drawing::Point(202, 426);
			this->btnPhone->Name = L"btnPhone";
			this->btnPhone->Size = System::Drawing::Size(269, 47);
			this->btnPhone->TabIndex = 2;
			this->btnPhone->Text = L"Check the phone";
			this->btnPhone->UseVisualStyleBackColor = false;
			this->btnPhone->Click += gcnew System::EventHandler(this, &PSSafeForm::btnPhone_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button1->Location = System::Drawing::Point(496, 426);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(269, 47);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Inspect the figurine on the desk";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &PSSafeForm::button1_Click);
			// 
			// PSSafeForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1000, 500);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->btnPhone);
			this->Controls->Add(this->label1);
			this->Name = L"PSSafeForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"PSSafeForm";
			this->Load += gcnew System::EventHandler(this, &PSSafeForm::PSSafeForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void PSSafeForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnPhone_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		PSPhoneForm^ phone = gcnew PSPhoneForm();

		phone->Show(); 
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	PSFigurineForm^ fif = gcnew PSFigurineForm();

	fif->Show();
}
};
}
