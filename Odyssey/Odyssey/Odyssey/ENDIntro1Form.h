#pragma once

namespace Odyssey {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ENDIntro1Form
	/// </summary>
	public ref class ENDIntro1Form : public System::Windows::Forms::Form
	{
	public:
		ENDIntro1Form(void)
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
		~ENDIntro1Form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnRight;
	protected:
	private: System::Windows::Forms::Button^ btnNorth;
	private: System::Windows::Forms::Button^ btnLeft;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ENDIntro1Form::typeid));
			this->btnRight = (gcnew System::Windows::Forms::Button());
			this->btnNorth = (gcnew System::Windows::Forms::Button());
			this->btnLeft = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btnRight
			// 
			this->btnRight->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnRight->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRight->ForeColor = System::Drawing::Color::Transparent;
			this->btnRight->Location = System::Drawing::Point(709, 433);
			this->btnRight->Name = L"btnRight";
			this->btnRight->Size = System::Drawing::Size(253, 37);
			this->btnRight->TabIndex = 9;
			this->btnRight->Text = L"Go to right";
			this->btnRight->UseVisualStyleBackColor = true;
			// 
			// btnNorth
			// 
			this->btnNorth->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnNorth->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnNorth->ForeColor = System::Drawing::Color::Transparent;
			this->btnNorth->Location = System::Drawing::Point(394, 433);
			this->btnNorth->Name = L"btnNorth";
			this->btnNorth->Size = System::Drawing::Size(253, 37);
			this->btnNorth->TabIndex = 8;
			this->btnNorth->Text = L"Go up north";
			this->btnNorth->UseVisualStyleBackColor = true;
			// 
			// btnLeft
			// 
			this->btnLeft->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnLeft->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLeft->ForeColor = System::Drawing::Color::Transparent;
			this->btnLeft->Location = System::Drawing::Point(63, 433);
			this->btnLeft->Name = L"btnLeft";
			this->btnLeft->Size = System::Drawing::Size(253, 37);
			this->btnLeft->TabIndex = 7;
			this->btnLeft->Text = L"Go to Left";
			this->btnLeft->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(440, 377);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label1->Size = System::Drawing::Size(158, 18);
			this->label1->TabIndex = 6;
			this->label1->Text = L"What would you do\?";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(40, 46);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label2->Size = System::Drawing::Size(896, 54);
			this->label2->TabIndex = 10;
			this->label2->Text = resources->GetString(L"label2.Text");
			// 
			// ENDIntro1Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1000, 500);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->btnRight);
			this->Controls->Add(this->btnNorth);
			this->Controls->Add(this->btnLeft);
			this->Controls->Add(this->label1);
			this->Name = L"ENDIntro1Form";
			this->Text = L"ENDIntro1Form";
			this->Load += gcnew System::EventHandler(this, &ENDIntro1Form::ENDIntro1Form_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ENDIntro1Form_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
