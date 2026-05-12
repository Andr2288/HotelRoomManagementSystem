#pragma once
#include "HotelModels.h"

namespace HotelRoomManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Summary for MaintainanceForm
	/// </summary>
	public ref class MaintainanceForm : public System::Windows::Forms::Form
	{
	public:
		int TaskId;
		int RoomId;
		String^ Executor;
		String^ WorkStatus;
		String^ Details;

		MaintainanceForm(void)
		{
			InitializeComponent();
			TaskId = 0;
			submitButton->Click += gcnew System::EventHandler(this, &MaintainanceForm::submitButton_Click);
			cancelButton->Click += gcnew System::EventHandler(this, &MaintainanceForm::cancelButton_Click);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MaintainanceForm()
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
	private: System::Windows::Forms::ComboBox^ cmbRoom;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ cmbExecutor;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ComboBox^ cmbWorkStatus;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ dgvDetails;


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
			this->cmbRoom = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->cmbExecutor = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->cmbWorkStatus = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->dgvDetails = (gcnew System::Windows::Forms::TextBox());
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
			this->panel1->Location = System::Drawing::Point(0, 441);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(746, 90);
			this->panel1->TabIndex = 21;
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
			this->pnlHeader->TabIndex = 20;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label1->Location = System::Drawing::Point(252, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(233, 35);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Обслуговування";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(28, 125);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(66, 22);
			this->label2->TabIndex = 23;
			this->label2->Text = L"Номер";
			// 
			// cmbRoom
			// 
			this->cmbRoom->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F));
			this->cmbRoom->FormattingEnabled = true;
			this->cmbRoom->Location = System::Drawing::Point(31, 162);
			this->cmbRoom->Name = L"cmbRoom";
			this->cmbRoom->Size = System::Drawing::Size(318, 39);
			this->cmbRoom->TabIndex = 22;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(29, 231);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(111, 22);
			this->label3->TabIndex = 25;
			this->label3->Text = L"Виконавець";
			// 
			// cmbExecutor
			// 
			this->cmbExecutor->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F));
			this->cmbExecutor->FormattingEnabled = true;
			this->cmbExecutor->Location = System::Drawing::Point(32, 268);
			this->cmbExecutor->Name = L"cmbExecutor";
			this->cmbExecutor->Size = System::Drawing::Size(318, 39);
			this->cmbExecutor->TabIndex = 24;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(30, 337);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(67, 22);
			this->label4->TabIndex = 27;
			this->label4->Text = L"Статус";
			// 
			// cmbWorkStatus
			// 
			this->cmbWorkStatus->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F));
			this->cmbWorkStatus->FormattingEnabled = true;
			this->cmbWorkStatus->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"В роботі", L"Виконано" });
			this->cmbWorkStatus->Location = System::Drawing::Point(33, 374);
			this->cmbWorkStatus->Name = L"cmbWorkStatus";
			this->cmbWorkStatus->Size = System::Drawing::Size(318, 39);
			this->cmbWorkStatus->TabIndex = 26;
			this->cmbWorkStatus->Text = L"В роботі";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(396, 126);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(55, 22);
			this->label5->TabIndex = 29;
			this->label5->Text = L"Опис";
			// 
			// dgvDetails
			// 
			this->dgvDetails->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->dgvDetails->Location = System::Drawing::Point(400, 162);
			this->dgvDetails->Multiline = true;
			this->dgvDetails->Name = L"dgvDetails";
			this->dgvDetails->Size = System::Drawing::Size(319, 251);
			this->dgvDetails->TabIndex = 28;
			// 
			// MaintainanceForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(746, 531);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->dgvDetails);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->cmbWorkStatus);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->cmbExecutor);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->cmbRoom);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->pnlHeader);
			this->Name = L"MaintainanceForm";
			this->Text = L"MaintainanceForm";
			this->panel1->ResumeLayout(false);
			this->pnlHeader->ResumeLayout(false);
			this->pnlHeader->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public:
		void LoadOptions(List<Room^>^ rooms, array<String^>^ employees)
		{
			cmbRoom->Items->Clear();
			for each (Room^ room in rooms) {
				cmbRoom->Items->Add(room);
			}
			if (cmbRoom->Items->Count > 0) {
				cmbRoom->SelectedIndex = 0;
			}

			cmbExecutor->Items->Clear();
			for each (String^ employee in employees) {
				cmbExecutor->Items->Add(employee);
			}
			if (cmbExecutor->Items->Count > 0) {
				cmbExecutor->SelectedIndex = 0;
			}
		}

		void LoadTask(MaintenanceTask^ task)
		{
			TaskId = task->Id;
			Executor = task->Executor;
			WorkStatus = task->Status;
			Details = task->Details;
			cmbExecutor->Text = task->Executor;
			cmbWorkStatus->Text = task->Status;
			dgvDetails->Text = task->Details;
			label1->Text = L"Редагувати Заявку";
			submitButton->Text = L"Зберегти";

			for (int i = 0; i < cmbRoom->Items->Count; i++) {
				Room^ room = safe_cast<Room^>(cmbRoom->Items[i]);
				if (room->Id == task->RoomId) {
					cmbRoom->SelectedIndex = i;
					break;
				}
			}
		}

	private:
		System::Void submitButton_Click(System::Object^ sender, System::EventArgs^ e)
		{
			if (cmbRoom->SelectedItem == nullptr) {
				MessageBox::Show(L"Оберіть номер.");
				return;
			}

			if (String::IsNullOrWhiteSpace(dgvDetails->Text)) {
				MessageBox::Show(L"Введіть опис заявки.");
				return;
			}

			Room^ room = safe_cast<Room^>(cmbRoom->SelectedItem);
			RoomId = room->Id;
			Executor = cmbExecutor->Text;
			WorkStatus = cmbWorkStatus->Text;
			Details = dgvDetails->Text;
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
