#pragma once

#include "PSFKeyForm.h"

namespace Odyssey {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for PSOOFigurineForm
	/// </summary>
	public ref class PSOOFigurineForm : public System::Windows::Forms::Form
	{
	public:
		PSOOFigurineForm(void)
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
		~PSOOFigurineForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ btnSafe;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PSOOFigurineForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnSafe = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Location = System::Drawing::Point(12, 33);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(945, 36);
			this->label1->TabIndex = 2;
			this->label1->Text = resources->GetString(L"label1.Text");
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label2->Location = System::Drawing::Point(12, 423);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(575, 18);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Turns out it has a secret compartment which had the key. What terrific luck you h"
				L"ave. \r\n";
			// 
			// btnSafe
			// 
			this->btnSafe->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSafe->Location = System::Drawing::Point(439, 465);
			this->btnSafe->Name = L"btnSafe";
			this->btnSafe->Size = System::Drawing::Size(91, 23);
			this->btnSafe->TabIndex = 4;
			this->btnSafe->Text = L"next\r\n";
			this->btnSafe->UseVisualStyleBackColor = true;
			this->btnSafe->Click += gcnew System::EventHandler(this, &PSOOFigurineForm::btnSafe_Click);
			// 
			// PSOOFigurineForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1000, 500);
			this->Controls->Add(this->btnSafe);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"PSOOFigurineForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"PSOOFigurineForm";
			this->Load += gcnew System::EventHandler(this, &PSOOFigurineForm::PSOOFigurineForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void PSOOFigurineForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnSafe_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		PSFKeyForm^ fkk = gcnew PSFKeyForm();

		fkk->Show();

	}
};
}
