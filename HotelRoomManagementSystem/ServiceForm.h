#pragma once

namespace HotelRoomManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ServiceForm
	/// </summary>
	public ref class ServiceForm : public System::Windows::Forms::Form
	{
	public:
		ServiceForm(void)
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
		~ServiceForm()
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
	private: System::Windows::Forms::TextBox^ txtServiceName;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtPrice;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ComboBox^ cmbCategory;


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
			this->txtServiceName = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtPrice = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->cmbCategory = (gcnew System::Windows::Forms::ComboBox());
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
			this->panel1->Location = System::Drawing::Point(0, 479);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(746, 90);
			this->panel1->TabIndex = 19;
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
			this->pnlHeader->TabIndex = 18;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label1->Location = System::Drawing::Point(309, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(128, 35);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Послуги";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(28, 141);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(132, 22);
			this->label2->TabIndex = 21;
			this->label2->Text = L"Назва послуги";
			// 
			// txtServiceName
			// 
			this->txtServiceName->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtServiceName->Location = System::Drawing::Point(31, 177);
			this->txtServiceName->Name = L"txtServiceName";
			this->txtServiceName->Size = System::Drawing::Size(319, 39);
			this->txtServiceName->TabIndex = 20;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(397, 141);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(50, 22);
			this->label3->TabIndex = 23;
			this->label3->Text = L"Ціна";
			// 
			// txtPrice
			// 
			this->txtPrice->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtPrice->Location = System::Drawing::Point(400, 177);
			this->txtPrice->Name = L"txtPrice";
			this->txtPrice->Size = System::Drawing::Size(319, 39);
			this->txtPrice->TabIndex = 22;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(28, 251);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(92, 22);
			this->label4->TabIndex = 25;
			this->label4->Text = L"Категорія";
			// 
			// cmbCategory
			// 
			this->cmbCategory->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F));
			this->cmbCategory->FormattingEnabled = true;
			this->cmbCategory->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Харчування", L"Прибирання", L"Трансфер", L"Інше" });
			this->cmbCategory->Location = System::Drawing::Point(31, 288);
			this->cmbCategory->Name = L"cmbCategory";
			this->cmbCategory->Size = System::Drawing::Size(317, 39);
			this->cmbCategory->TabIndex = 24;
			this->cmbCategory->Text = L"Харчування";
			// 
			// ServiceForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(746, 569);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->cmbCategory);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txtPrice);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtServiceName);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->pnlHeader);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"ServiceForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ServiceForm";
			this->panel1->ResumeLayout(false);
			this->pnlHeader->ResumeLayout(false);
			this->pnlHeader->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
};
}
