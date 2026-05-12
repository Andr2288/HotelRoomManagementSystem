#pragma once

namespace HotelRoomManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for NewBookingForm
	/// </summary>
	public ref class NewBookingForm : public System::Windows::Forms::Form
	{
	public:
		NewBookingForm(void)
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
		~NewBookingForm()
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
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ComboBox^ cmbGuest;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ cmbRoom;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ cmbBookingStatus;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::DateTimePicker^ dtpCheckIn;
	private: System::Windows::Forms::DateTimePicker^ dtpCheckInDate;


	private: System::Windows::Forms::Label^ label5;

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
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->cmbGuest = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->cmbRoom = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->cmbBookingStatus = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->dtpCheckIn = (gcnew System::Windows::Forms::DateTimePicker());
			this->dtpCheckInDate = (gcnew System::Windows::Forms::DateTimePicker());
			this->label5 = (gcnew System::Windows::Forms::Label());
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
			this->panel1->Location = System::Drawing::Point(0, 469);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(746, 90);
			this->panel1->TabIndex = 17;
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
			this->pnlHeader->TabIndex = 16;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label1->Location = System::Drawing::Point(229, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(290, 35);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Додати Бронювання";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(28, 137);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(55, 22);
			this->label6->TabIndex = 19;
			this->label6->Text = L"Гість";
			// 
			// cmbGuest
			// 
			this->cmbGuest->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F));
			this->cmbGuest->FormattingEnabled = true;
			this->cmbGuest->Location = System::Drawing::Point(31, 174);
			this->cmbGuest->Name = L"cmbGuest";
			this->cmbGuest->Size = System::Drawing::Size(318, 39);
			this->cmbGuest->TabIndex = 18;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(397, 137);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(66, 22);
			this->label2->TabIndex = 21;
			this->label2->Text = L"Номер";
			// 
			// cmbRoom
			// 
			this->cmbRoom->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F));
			this->cmbRoom->FormattingEnabled = true;
			this->cmbRoom->Location = System::Drawing::Point(400, 174);
			this->cmbRoom->Name = L"cmbRoom";
			this->cmbRoom->Size = System::Drawing::Size(318, 39);
			this->cmbRoom->TabIndex = 20;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(29, 352);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(67, 22);
			this->label3->TabIndex = 23;
			this->label3->Text = L"Статус";
			// 
			// cmbBookingStatus
			// 
			this->cmbBookingStatus->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F));
			this->cmbBookingStatus->FormattingEnabled = true;
			this->cmbBookingStatus->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Активне", L"Оплачено", L"Скасовано" });
			this->cmbBookingStatus->Location = System::Drawing::Point(32, 389);
			this->cmbBookingStatus->Name = L"cmbBookingStatus";
			this->cmbBookingStatus->Size = System::Drawing::Size(317, 39);
			this->cmbBookingStatus->TabIndex = 22;
			this->cmbBookingStatus->Text = L"Активне";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(30, 247);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(105, 22);
			this->label4->TabIndex = 25;
			this->label4->Text = L"Дата заїзду";
			// 
			// dtpCheckIn
			// 
			this->dtpCheckIn->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F));
			this->dtpCheckIn->Location = System::Drawing::Point(34, 286);
			this->dtpCheckIn->Name = L"dtpCheckIn";
			this->dtpCheckIn->Size = System::Drawing::Size(315, 39);
			this->dtpCheckIn->TabIndex = 26;
			// 
			// dtpCheckInDate
			// 
			this->dtpCheckInDate->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F));
			this->dtpCheckInDate->Location = System::Drawing::Point(400, 286);
			this->dtpCheckInDate->Name = L"dtpCheckInDate";
			this->dtpCheckInDate->Size = System::Drawing::Size(319, 39);
			this->dtpCheckInDate->TabIndex = 28;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(396, 247);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(108, 22);
			this->label5->TabIndex = 27;
			this->label5->Text = L"Дата виїзду";
			// 
			// NewBookingForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(746, 559);
			this->Controls->Add(this->dtpCheckInDate);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->dtpCheckIn);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->cmbBookingStatus);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->cmbRoom);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->cmbGuest);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->pnlHeader);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"NewBookingForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"NewBookingForm";
			this->panel1->ResumeLayout(false);
			this->pnlHeader->ResumeLayout(false);
			this->pnlHeader->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
