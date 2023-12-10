#pragma once

#include "BSuiForm.h"
#include "BAcceptForm.h"
#include "BCowardForm.h"

namespace Odyssey {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for BStrangerForm
	/// </summary>
	public ref class BStrangerForm : public System::Windows::Forms::Form
	{
	public:
		BStrangerForm(void)
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
		~BStrangerForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ broomtxt1;
	protected:
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(BStrangerForm::typeid));
			this->broomtxt1 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// broomtxt1
			// 
			this->broomtxt1->AutoSize = true;
			this->broomtxt1->BackColor = System::Drawing::Color::Transparent;
			this->broomtxt1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->broomtxt1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->broomtxt1->Location = System::Drawing::Point(678, 104);
			this->broomtxt1->Margin = System::Windows::Forms::Padding(7, 0, 7, 0);
			this->broomtxt1->Name = L"broomtxt1";
			this->broomtxt1->Size = System::Drawing::Size(306, 180);
			this->broomtxt1->TabIndex = 24;
			this->broomtxt1->Text = resources->GetString(L"broomtxt1.Text");
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button3->Location = System::Drawing::Point(655, 416);
			this->button3->Margin = System::Windows::Forms::Padding(9, 3, 9, 3);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(259, 57);
			this->button3->TabIndex = 23;
			this->button3->Text = L"Get in the closet and hide.";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &BStrangerForm::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button2->Location = System::Drawing::Point(329, 416);
			this->button2->Margin = System::Windows::Forms::Padding(9, 3, 9, 3);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(323, 57);
			this->button2->TabIndex = 22;
			this->button2->Text = L"Remain. Abandon all hope. Surrender to the void.";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &BStrangerForm::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button1->Location = System::Drawing::Point(62, 416);
			this->button1->Margin = System::Windows::Forms::Padding(9, 3, 9, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(262, 57);
			this->button1->TabIndex = 21;
			this->button1->Text = L"Commit suicide. Die by your own terms.";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &BStrangerForm::button1_Click);
			// 
			// BStrangerForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1000, 500);
			this->Controls->Add(this->broomtxt1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"BStrangerForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"BStrangerForm";
			this->Load += gcnew System::EventHandler(this, &BStrangerForm::BStrangerForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void BStrangerForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		BSuiForm^ suu = gcnew BSuiForm();

		suu->Show();
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	BAcceptForm^ acce = gcnew BAcceptForm();

	acce->Show();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	BCowardForm^ cocc = gcnew BCowardForm();

	cocc->Show();
}
};
}
