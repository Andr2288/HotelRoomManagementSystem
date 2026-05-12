#pragma once

namespace HotelRoomManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AddRoomForm
	/// </summary>
	public ref class AddRoomForm : public System::Windows::Forms::Form
	{
	public:
		AddRoomForm(void)
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
		~AddRoomForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ pnlHeader;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtRoomNumber;
	private: System::Windows::Forms::TextBox^ txtCapacity;
	private: System::Windows::Forms::TextBox^ txtPricePerNight;



	private: System::Windows::Forms::ComboBox^ cmbRoomType;
	private: System::Windows::Forms::ComboBox^ cmbRoomStatus;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ cancelButton;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ submitButton;



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
			this->pnlHeader = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtRoomNumber = (gcnew System::Windows::Forms::TextBox());
			this->txtCapacity = (gcnew System::Windows::Forms::TextBox());
			this->txtPricePerNight = (gcnew System::Windows::Forms::TextBox());
			this->cmbRoomType = (gcnew System::Windows::Forms::ComboBox());
			this->cmbRoomStatus = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->cancelButton = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->submitButton = (gcnew System::Windows::Forms::Button());
			this->pnlHeader->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
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
			this->pnlHeader->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label1->Location = System::Drawing::Point(266, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(206, 35);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Додати Номер";
			// 
			// txtRoomNumber
			// 
			this->txtRoomNumber->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtRoomNumber->Location = System::Drawing::Point(30, 162);
			this->txtRoomNumber->Name = L"txtRoomNumber";
			this->txtRoomNumber->Size = System::Drawing::Size(319, 39);
			this->txtRoomNumber->TabIndex = 2;
			// 
			// txtCapacity
			// 
			this->txtCapacity->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtCapacity->Location = System::Drawing::Point(30, 255);
			this->txtCapacity->Name = L"txtCapacity";
			this->txtCapacity->Size = System::Drawing::Size(319, 39);
			this->txtCapacity->TabIndex = 3;
			// 
			// txtPricePerNight
			// 
			this->txtPricePerNight->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtPricePerNight->Location = System::Drawing::Point(400, 255);
			this->txtPricePerNight->Name = L"txtPricePerNight";
			this->txtPricePerNight->Size = System::Drawing::Size(319, 39);
			this->txtPricePerNight->TabIndex = 4;
			// 
			// cmbRoomType
			// 
			this->cmbRoomType->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F));
			this->cmbRoomType->FormattingEnabled = true;
			this->cmbRoomType->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Стандарт", L"Люкс", L"Сімейний", L"Економ" });
			this->cmbRoomType->Location = System::Drawing::Point(400, 162);
			this->cmbRoomType->Name = L"cmbRoomType";
			this->cmbRoomType->Size = System::Drawing::Size(319, 39);
			this->cmbRoomType->TabIndex = 5;
			this->cmbRoomType->Text = L"Стандарт";
			// 
			// cmbRoomStatus
			// 
			this->cmbRoomStatus->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F));
			this->cmbRoomStatus->FormattingEnabled = true;
			this->cmbRoomStatus->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"Вільний", L"Заброньований", L"Зайнятий",
					L"Ремонт"
			});
			this->cmbRoomStatus->Location = System::Drawing::Point(30, 347);
			this->cmbRoomStatus->Name = L"cmbRoomStatus";
			this->cmbRoomStatus->Size = System::Drawing::Size(319, 39);
			this->cmbRoomStatus->TabIndex = 6;
			this->cmbRoomStatus->Text = L"Вільний";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(27, 126);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(139, 22);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Номер кімнати";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(396, 126);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(111, 22);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Тип номера";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(27, 219);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(144, 22);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Кількість місць";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(396, 219);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(115, 22);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Ціна за добу";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(27, 310);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(67, 22);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Статус";
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
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->submitButton);
			this->panel1->Controls->Add(this->cancelButton);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel1->Location = System::Drawing::Point(0, 419);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(746, 90);
			this->panel1->TabIndex = 13;
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
			// AddRoomForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(746, 509);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->cmbRoomStatus);
			this->Controls->Add(this->cmbRoomType);
			this->Controls->Add(this->txtPricePerNight);
			this->Controls->Add(this->txtCapacity);
			this->Controls->Add(this->txtRoomNumber);
			this->Controls->Add(this->pnlHeader);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"AddRoomForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"AddRoomForm";
			this->pnlHeader->ResumeLayout(false);
			this->pnlHeader->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
};
}
