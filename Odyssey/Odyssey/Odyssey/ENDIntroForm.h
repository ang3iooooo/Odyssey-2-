#pragma once

#include "ENDIntro1Form.h"

namespace Odyssey {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ENDIntroForm
	/// </summary>
	public ref class ENDIntroForm : public System::Windows::Forms::Form
	{
	public:
		ENDIntroForm(void)
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
		~ENDIntroForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Button^ btnIntroNext;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ENDIntroForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnIntroNext = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label1->Location = System::Drawing::Point(33, 381);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(660, 18);
			this->label1->TabIndex = 5;
			this->label1->Text = L"The sun rays hit your skin with intense heat. You feel sluggish but still you for"
				L"ce to open your eyes.";
			// 
			// btnIntroNext
			// 
			this->btnIntroNext->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnIntroNext->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnIntroNext->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnIntroNext->Location = System::Drawing::Point(889, 443);
			this->btnIntroNext->Name = L"btnIntroNext";
			this->btnIntroNext->Size = System::Drawing::Size(95, 38);
			this->btnIntroNext->TabIndex = 4;
			this->btnIntroNext->Text = L"next";
			this->btnIntroNext->UseVisualStyleBackColor = true;
			this->btnIntroNext->Click += gcnew System::EventHandler(this, &ENDIntroForm::btnIntroNext_Click);
			// 
			// ENDIntroForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1000, 500);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnIntroNext);
			this->Name = L"ENDIntroForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ENDIntroForm";
			this->Load += gcnew System::EventHandler(this, &ENDIntroForm::ENDIntroForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ENDIntroForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnIntroNext_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		ENDIntro1Form^ inny = gcnew ENDIntro1Form();

		inny->Show();
	}
	};
}
