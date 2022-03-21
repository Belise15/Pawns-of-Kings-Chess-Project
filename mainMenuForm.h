#pragma once
#include "gameSetupForm.h"

namespace PawnsofKingsChessProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for mainMenuForm
	/// </summary>
	public ref class mainMenuForm : public System::Windows::Forms::Form
	{
	public:
		mainMenuForm(void)
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
		~mainMenuForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ playBtn;
	protected:

	protected:



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ pStatsBtn;
	private: System::Windows::Forms::Button^ topGamesBtn;
	private: System::Windows::Forms::Button^ exitBtn;

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
			this->playBtn = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pStatsBtn = (gcnew System::Windows::Forms::Button());
			this->topGamesBtn = (gcnew System::Windows::Forms::Button());
			this->exitBtn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// playBtn
			// 
			this->playBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->playBtn->BackColor = System::Drawing::Color::Transparent;
			this->playBtn->Font = (gcnew System::Drawing::Font(L"Lucida Console", 10.125F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->playBtn->Location = System::Drawing::Point(454, 141);
			this->playBtn->Name = L"playBtn";
			this->playBtn->Size = System::Drawing::Size(232, 79);
			this->playBtn->TabIndex = 0;
			this->playBtn->Text = L"Play!";
			this->playBtn->UseVisualStyleBackColor = false;
			this->playBtn->Click += gcnew System::EventHandler(this, &mainMenuForm::playBtn_Click);
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Lucida Console", 19.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(207, 47);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(287, 53);
			this->label1->TabIndex = 4;
			this->label1->Text = L"PK Chess";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// pStatsBtn
			// 
			this->pStatsBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->pStatsBtn->BackColor = System::Drawing::Color::Transparent;
			this->pStatsBtn->Font = (gcnew System::Drawing::Font(L"Lucida Console", 10.125F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pStatsBtn->Location = System::Drawing::Point(454, 332);
			this->pStatsBtn->Name = L"pStatsBtn";
			this->pStatsBtn->Size = System::Drawing::Size(232, 79);
			this->pStatsBtn->TabIndex = 5;
			this->pStatsBtn->Text = L"Player Stats";
			this->pStatsBtn->UseVisualStyleBackColor = false;
			// 
			// topGamesBtn
			// 
			this->topGamesBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->topGamesBtn->BackColor = System::Drawing::Color::Transparent;
			this->topGamesBtn->Font = (gcnew System::Drawing::Font(L"Lucida Console", 10.125F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->topGamesBtn->Location = System::Drawing::Point(454, 235);
			this->topGamesBtn->Name = L"topGamesBtn";
			this->topGamesBtn->Size = System::Drawing::Size(232, 79);
			this->topGamesBtn->TabIndex = 6;
			this->topGamesBtn->Text = L"Top Games";
			this->topGamesBtn->UseVisualStyleBackColor = false;
			this->topGamesBtn->Click += gcnew System::EventHandler(this, &mainMenuForm::topGamesBtn_Click);
			// 
			// exitBtn
			// 
			this->exitBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->exitBtn->BackColor = System::Drawing::Color::Transparent;
			this->exitBtn->Font = (gcnew System::Drawing::Font(L"Lucida Console", 10.125F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->exitBtn->Location = System::Drawing::Point(454, 428);
			this->exitBtn->Name = L"exitBtn";
			this->exitBtn->Size = System::Drawing::Size(232, 79);
			this->exitBtn->TabIndex = 7;
			this->exitBtn->Text = L"Exit";
			this->exitBtn->UseVisualStyleBackColor = false;
			this->exitBtn->Click += gcnew System::EventHandler(this, &mainMenuForm::exitBtn_Click);
			// 
			// mainMenuForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Inherit;
			this->ClientSize = System::Drawing::Size(749, 567);
			this->Controls->Add(this->exitBtn);
			this->Controls->Add(this->topGamesBtn);
			this->Controls->Add(this->pStatsBtn);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->playBtn);
			this->Name = L"mainMenuForm";
			this->Text = L"PK Chess";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void playBtn_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		gameSetupForm^ f2 = gcnew gameSetupForm;
		f2->ShowDialog();
		this->Hide();
	}
	private: System::Void exitBtn_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->Close();
	}
	private: System::Void topGamesBtn_Click(System::Object^ sender, System::EventArgs^ e) 
	{
	}
};
}
