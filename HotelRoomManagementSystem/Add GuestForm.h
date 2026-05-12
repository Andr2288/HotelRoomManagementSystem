#pragma once
#include "HotelModels.h"

namespace HotelRoomManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AddGuestForm
	/// </summary>
	public ref class AddGuestForm : public System::Windows::Forms::Form
	{
	public:
		int GuestId;
		String^ FullName;
		String^ Phone;
		String^ Document;
		String^ Email;

		AddGuestForm(void)
		{
			InitializeComponent();
			GuestId = 0;
			submitButton->Click += gcnew System::EventHandler(this, &AddGuestForm::submitButton_Click);
			cancelButton->Click += gcnew System::EventHandler(this, &AddGuestForm::cancelButton_Click);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AddGuestForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Button^ submitButton;
	private: System::Windows::Forms::Button^ cancelButton;
	private: System::Windows::Forms::Panel^ pnlHeader;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtFullName;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtPhone;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txtDocument;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txtEmail;


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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->submitButton = (gcnew System::Windows::Forms::Button());
			this->cancelButton = (gcnew System::Windows::Forms::Button());
			this->pnlHeader = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtFullName = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtPhone = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtDocument = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtEmail = (gcnew System::Windows::Forms::TextBox());
			this->panel1->SuspendLayout();
			this->pnlHeader->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->submitButton);
			this->panel1->Controls->Add(this->cancelButton);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel1->Location = System::Drawing::Point(0, 342);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(746, 90);
			this->panel1->TabIndex = 15;
			// 
			// submitButton
			// 
			this->submitButton->FlatAppearance->BorderSize = 0;
			this->submitButton->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->submitButton->Location = System::Drawing::Point(399, 22);
			this->submitButton->Name = L"submitButton";
			this->submitButton->Size = System::Drawing::Size(318, 46);
			this->submitButton->TabIndex = 13;
			this->submitButton->Text = L"Додати";
			this->submitButton->UseVisualStyleBackColor = true;
			// 
			// cancelButton
			// 
			this->cancelButton->FlatAppearance->BorderSize = 0;
			this->cancelButton->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->cancelButton->Location = System::Drawing::Point(30, 22);
			this->cancelButton->Name = L"cancelButton";
			this->cancelButton->Size = System::Drawing::Size(318, 46);
			this->cancelButton->TabIndex = 12;
			this->cancelButton->Text = L"Скасувати";
			this->cancelButton->UseVisualStyleBackColor = true;
			// 
			// pnlHeader
			// 
			this->pnlHeader->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->pnlHeader->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pnlHeader->Controls->Add(this->label1);
			this->pnlHeader->Dock = System::Windows::Forms::DockStyle::Top;
			this->pnlHeader->Location = System::Drawing::Point(0, 0);
			this->pnlHeader->Name = L"pnlHeader";
			this->pnlHeader->Size = System::Drawing::Size(746, 91);
			this->pnlHeader->TabIndex = 14;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label1->Location = System::Drawing::Point(266, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(195, 35);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Додати Гостя";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(28, 124);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(41, 22);
			this->label2->TabIndex = 17;
			this->label2->Text = L"ПІБ";
			// 
			// txtFullName
			// 
			this->txtFullName->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtFullName->Location = System::Drawing::Point(31, 160);
			this->txtFullName->Name = L"txtFullName";
			this->txtFullName->Size = System::Drawing::Size(319, 39);
			this->txtFullName->TabIndex = 16;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(397, 124);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(83, 22);
			this->label3->TabIndex = 19;
			this->label3->Text = L"Телефон";
			// 
			// txtPhone
			// 
			this->txtPhone->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtPhone->Location = System::Drawing::Point(400, 160);
			this->txtPhone->Name = L"txtPhone";
			this->txtPhone->Size = System::Drawing::Size(319, 39);
			this->txtPhone->TabIndex = 18;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(29, 232);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(95, 22);
			this->label4->TabIndex = 21;
			this->label4->Text = L"Документ";
			// 
			// txtDocument
			// 
			this->txtDocument->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtDocument->Location = System::Drawing::Point(32, 268);
			this->txtDocument->Name = L"txtDocument";
			this->txtDocument->Size = System::Drawing::Size(319, 39);
			this->txtDocument->TabIndex = 20;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(398, 232);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(57, 22);
			this->label5->TabIndex = 23;
			this->label5->Text = L"Email";
			// 
			// txtEmail
			// 
			this->txtEmail->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtEmail->Location = System::Drawing::Point(401, 268);
			this->txtEmail->Name = L"txtEmail";
			this->txtEmail->Size = System::Drawing::Size(319, 39);
			this->txtEmail->TabIndex = 22;
			// 
			// AddGuestForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(746, 432);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txtEmail);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txtDocument);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txtPhone);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtFullName);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->pnlHeader);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"AddGuestForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"AddGuestForm";
			this->panel1->ResumeLayout(false);
			this->pnlHeader->ResumeLayout(false);
			this->pnlHeader->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public:
		void LoadGuest(Guest^ guest)
		{
			GuestId = guest->Id;
			txtFullName->Text = guest->FullName;
			txtPhone->Text = guest->Phone;
			txtDocument->Text = guest->Document;
			txtEmail->Text = guest->Email;
			label1->Text = L"Редагувати Гостя";
			submitButton->Text = L"Зберегти";
		}

	private:
		System::Void submitButton_Click(System::Object^ sender, System::EventArgs^ e)
		{
			if (String::IsNullOrWhiteSpace(txtFullName->Text)) {
				MessageBox::Show(L"Введіть ПІБ гостя.");
				return;
			}

			if (String::IsNullOrWhiteSpace(txtPhone->Text)) {
				MessageBox::Show(L"Введіть телефон гостя.");
				return;
			}

			FullName = txtFullName->Text;
			Phone = txtPhone->Text;
			Document = txtDocument->Text;
			Email = txtEmail->Text;
			DialogResult = System::Windows::Forms::DialogResult::OK;
			Close();
		}

		System::Void cancelButton_Click(System::Object^ sender, System::EventArgs^ e)
		{
			DialogResult = System::Windows::Forms::DialogResult::Cancel;
			Close();
		}
	};
}
