#pragma once

#include "ENDIntroForm.h"

namespace Odyssey {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for BSuiForm
	/// </summary>
	public ref class BSuiForm : public System::Windows::Forms::Form
	{
	public:
		BSuiForm(void)
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
		~BSuiForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ broomtxt1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(BSuiForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->broomtxt1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 48, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Location = System::Drawing::Point(49, 45);
			this->label1->Margin = System::Windows::Forms::Padding(12, 0, 12, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(270, 158);
			this->label1->TabIndex = 24;
			this->label1->Text = L"DEJAVU\r\nENDING";
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::Transparent;
			this->button3->Location = System::Drawing::Point(761, 415);
			this->button3->Margin = System::Windows::Forms::Padding(21, 3, 21, 3);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(204, 40);
			this->button3->TabIndex = 23;
			this->button3->Text = L"Game Over";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &BSuiForm::button3_Click);
			// 
			// broomtxt1
			// 
			this->broomtxt1->AutoSize = true;
			this->broomtxt1->BackColor = System::Drawing::Color::Transparent;
			this->broomtxt1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->broomtxt1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->broomtxt1->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->broomtxt1->Location = System::Drawing::Point(35, 269);
			this->broomtxt1->Margin = System::Windows::Forms::Padding(12, 0, 12, 0);
			this->broomtxt1->Name = L"broomtxt1";
			this->broomtxt1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->broomtxt1->Size = System::Drawing::Size(379, 108);
			this->broomtxt1->TabIndex = 22;
			this->broomtxt1->Text = resources->GetString(L"broomtxt1.Text");
			this->broomtxt1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// BSuiForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1000, 500);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->broomtxt1);
			this->Name = L"BSuiForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"BSuiForm";
			this->Load += gcnew System::EventHandler(this, &BSuiForm::BSuiForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void BSuiForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		ENDIntroForm^ iii = gcnew ENDIntroForm();

		iii->Show();
	}
};
}
