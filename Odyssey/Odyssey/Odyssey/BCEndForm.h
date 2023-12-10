#pragma once


namespace Odyssey {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for BCEndForm
	/// </summary>
	public ref class BCEndForm : public System::Windows::Forms::Form
	{

	//public:
	//	PlayerData^ pd = gcnew PlayerData();

	public:
		BCEndForm(void)
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
		~BCEndForm()
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(BCEndForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->broomtxt1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Goudy Stout", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Location = System::Drawing::Point(554, 54);
			this->label1->Margin = System::Windows::Forms::Padding(12, 0, 12, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(425, 37);
			this->label1->TabIndex = 24;
			this->label1->Text = L"COWARD ENDING";
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button3->Location = System::Drawing::Point(774, 427);
			this->button3->Margin = System::Windows::Forms::Padding(21, 3, 21, 3);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(193, 32);
			this->button3->TabIndex = 23;
			this->button3->Text = L"Game Over";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &BCEndForm::button3_Click);
			// 
			// broomtxt1
			// 
			this->broomtxt1->AutoSize = true;
			this->broomtxt1->BackColor = System::Drawing::Color::Transparent;
			this->broomtxt1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->broomtxt1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->broomtxt1->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->broomtxt1->Location = System::Drawing::Point(834, 133);
			this->broomtxt1->Margin = System::Windows::Forms::Padding(12, 0, 12, 0);
			this->broomtxt1->Name = L"broomtxt1";
			this->broomtxt1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->broomtxt1->Size = System::Drawing::Size(133, 36);
			this->broomtxt1->TabIndex = 22;
			this->broomtxt1->Text = L"\r\nYou\'re fucked now.";
			this->broomtxt1->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// BCEndForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1000, 500);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->broomtxt1);
			this->Name = L"BCEndForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"BCEndForm";
			this->Load += gcnew System::EventHandler(this, &BCEndForm::BCEndForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void BCEndForm_Load(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Now that the game is over, the game will terminate. 'Till we meet again, dumb adventurer.", "END", MessageBoxButtons::OK, MessageBoxIcon::None);
		this->Close(); 
		
	}
};
}
