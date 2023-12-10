#pragma once

#include "BRoomForm.h"

namespace Odyssey {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for BLeaveForm
	/// </summary>
	public ref class BLeaveForm : public System::Windows::Forms::Form
	{
	public:
		BLeaveForm(void)
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
		~BLeaveForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(BLeaveForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->broomtxt1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button1->Location = System::Drawing::Point(315, 442);
			this->button1->Margin = System::Windows::Forms::Padding(9, 3, 9, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(426, 35);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Check out the door where the noise is coming from. ";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &BLeaveForm::button1_Click);
			// 
			// broomtxt1
			// 
			this->broomtxt1->AutoSize = true;
			this->broomtxt1->BackColor = System::Drawing::Color::Transparent;
			this->broomtxt1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->broomtxt1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->broomtxt1->Location = System::Drawing::Point(18, 373);
			this->broomtxt1->Margin = System::Windows::Forms::Padding(9, 0, 9, 0);
			this->broomtxt1->Name = L"broomtxt1";
			this->broomtxt1->Size = System::Drawing::Size(889, 54);
			this->broomtxt1->TabIndex = 9;
			this->broomtxt1->Text = resources->GetString(L"broomtxt1.Text");
			// 
			// BLeaveForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1000, 500);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->broomtxt1);
			this->Name = L"BLeaveForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"BLeaveForm";
			this->Load += gcnew System::EventHandler(this, &BLeaveForm::BLeaveForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void BLeaveForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		BRoomForm^ oom = gcnew BRoomForm();

		oom->Show();
	}
	};
}
