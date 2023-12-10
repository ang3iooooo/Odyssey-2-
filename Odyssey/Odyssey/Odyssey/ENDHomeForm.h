#pragma once

namespace Odyssey {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ENDHomeForm
	/// </summary>
	public ref class ENDHomeForm : public System::Windows::Forms::Form
	{
	public:
		ENDHomeForm(void)
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
		~ENDHomeForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnStart;
	protected:
	private: System::Windows::Forms::Button^ btnQuit;
	private: System::Windows::Forms::Button^ btnAbout;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ENDHomeForm::typeid));
			this->btnStart = (gcnew System::Windows::Forms::Button());
			this->btnQuit = (gcnew System::Windows::Forms::Button());
			this->btnAbout = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btnStart
			// 
			this->btnStart->Font = (gcnew System::Drawing::Font(L"Old English Text MT", 20.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnStart->Location = System::Drawing::Point(472, 273);
			this->btnStart->Name = L"btnStart";
			this->btnStart->Size = System::Drawing::Size(105, 44);
			this->btnStart->TabIndex = 6;
			this->btnStart->Text = L"Start";
			this->btnStart->UseVisualStyleBackColor = true;
			// 
			// btnQuit
			// 
			this->btnQuit->Font = (gcnew System::Drawing::Font(L"Old English Text MT", 20.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnQuit->Location = System::Drawing::Point(472, 414);
			this->btnQuit->Name = L"btnQuit";
			this->btnQuit->Size = System::Drawing::Size(105, 44);
			this->btnQuit->TabIndex = 5;
			this->btnQuit->Text = L"Quit";
			this->btnQuit->UseVisualStyleBackColor = true;
			this->btnQuit->Click += gcnew System::EventHandler(this, &ENDHomeForm::btnQuit_Click);
			// 
			// btnAbout
			// 
			this->btnAbout->Font = (gcnew System::Drawing::Font(L"Old English Text MT", 20.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnAbout->Location = System::Drawing::Point(472, 337);
			this->btnAbout->Name = L"btnAbout";
			this->btnAbout->Size = System::Drawing::Size(105, 44);
			this->btnAbout->TabIndex = 4;
			this->btnAbout->Text = L"About";
			this->btnAbout->UseVisualStyleBackColor = true;
			// 
			// ENDHomeForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1000, 500);
			this->Controls->Add(this->btnStart);
			this->Controls->Add(this->btnQuit);
			this->Controls->Add(this->btnAbout);
			this->Name = L"ENDHomeForm";
			this->Text = L"ENDHomeForm";
			this->Load += gcnew System::EventHandler(this, &ENDHomeForm::ENDHomeForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ENDHomeForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnQuit_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	};
}
