#pragma once

#include "BCertForm.h"

namespace Odyssey {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for BAcceptForm
	/// </summary>
	public ref class BAcceptForm : public System::Windows::Forms::Form
	{
	public:
		BAcceptForm(void)
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
		~BAcceptForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ broomtxt1;
	protected:
	private: System::Windows::Forms::Label^ label1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(BAcceptForm::typeid));
			this->broomtxt1 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// broomtxt1
			// 
			this->broomtxt1->AutoSize = true;
			this->broomtxt1->BackColor = System::Drawing::Color::Transparent;
			this->broomtxt1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->broomtxt1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->broomtxt1->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->broomtxt1->Location = System::Drawing::Point(137, 77);
			this->broomtxt1->Margin = System::Windows::Forms::Padding(7, 0, 7, 0);
			this->broomtxt1->Name = L"broomtxt1";
			this->broomtxt1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->broomtxt1->Size = System::Drawing::Size(728, 72);
			this->broomtxt1->TabIndex = 21;
			this->broomtxt1->Text = resources->GetString(L"broomtxt1.Text");
			this->broomtxt1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Wide Latin", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Location = System::Drawing::Point(27, 433);
			this->label1->Margin = System::Windows::Forms::Padding(7, 0, 7, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(389, 33);
			this->label1->TabIndex = 20;
			this->label1->Text = L"TRUE ENDING";
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button3->Location = System::Drawing::Point(836, 433);
			this->button3->Margin = System::Windows::Forms::Padding(12, 3, 12, 3);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(115, 33);
			this->button3->TabIndex = 19;
			this->button3->Text = L"Game Over";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &BAcceptForm::button3_Click);
			// 
			// BAcceptForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1000, 500);
			this->Controls->Add(this->broomtxt1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button3);
			this->Name = L"BAcceptForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"BAcceptForm";
			this->WindowState = System::Windows::Forms::FormWindowState::Minimized;
			this->Load += gcnew System::EventHandler(this, &BAcceptForm::BAcceptForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void BAcceptForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

		MessageBox::Show("Now that the game is over, the game will terminate. 'Till we meet again, dumb adventurer.", "END", MessageBoxButtons::OK, MessageBoxIcon::None);
		this->Close();
		
	}

};
}
