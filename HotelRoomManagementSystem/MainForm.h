#pragma once

namespace HotelRoomManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ pnlHeader;
	private: System::Windows::Forms::Label^ lblAppTitle;
	private: System::Windows::Forms::ComboBox^ cmbUserRole;
	private: System::Windows::Forms::Panel^ pnlNavBar;
	private: System::Windows::Forms::Panel^ pnlSidebar;
	private: System::Windows::Forms::Panel^ pnlContent;
	protected:

	protected:





	private: System::Windows::Forms::Button^ btnNavMaintenance;

	private: System::Windows::Forms::Button^ btnNavGuests;

	private: System::Windows::Forms::Button^ btnNavRooms;
	private: System::Windows::Forms::Button^ btnNavServices;


	private: System::Windows::Forms::Button^ btnNavBookings;
	private: System::Windows::Forms::Button^ btnQuickRepairRequest;


	private: System::Windows::Forms::Button^ btnQuickAddService;

	private: System::Windows::Forms::Button^ btnQuickNewBooking;

	private: System::Windows::Forms::Button^ btnQuickAddGuest;

	private: System::Windows::Forms::Button^ btnQuickAddRoom;

	private: System::Windows::Forms::Label^ lblQuickActions;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ mainDataGridView;





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
			this->cmbUserRole = (gcnew System::Windows::Forms::ComboBox());
			this->lblAppTitle = (gcnew System::Windows::Forms::Label());
			this->pnlNavBar = (gcnew System::Windows::Forms::Panel());
			this->pnlSidebar = (gcnew System::Windows::Forms::Panel());
			this->pnlContent = (gcnew System::Windows::Forms::Panel());
			this->btnNavRooms = (gcnew System::Windows::Forms::Button());
			this->btnNavGuests = (gcnew System::Windows::Forms::Button());
			this->btnNavBookings = (gcnew System::Windows::Forms::Button());
			this->btnNavServices = (gcnew System::Windows::Forms::Button());
			this->btnNavMaintenance = (gcnew System::Windows::Forms::Button());
			this->lblQuickActions = (gcnew System::Windows::Forms::Label());
			this->btnQuickAddRoom = (gcnew System::Windows::Forms::Button());
			this->btnQuickAddGuest = (gcnew System::Windows::Forms::Button());
			this->btnQuickNewBooking = (gcnew System::Windows::Forms::Button());
			this->btnQuickAddService = (gcnew System::Windows::Forms::Button());
			this->btnQuickRepairRequest = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->mainDataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->pnlHeader->SuspendLayout();
			this->pnlNavBar->SuspendLayout();
			this->pnlSidebar->SuspendLayout();
			this->pnlContent->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->mainDataGridView))->BeginInit();
			this->SuspendLayout();
			// 
			// pnlHeader
			// 
			this->pnlHeader->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->pnlHeader->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pnlHeader->Controls->Add(this->cmbUserRole);
			this->pnlHeader->Controls->Add(this->lblAppTitle);
			this->pnlHeader->Dock = System::Windows::Forms::DockStyle::Top;
			this->pnlHeader->Location = System::Drawing::Point(0, 0);
			this->pnlHeader->Name = L"pnlHeader";
			this->pnlHeader->Size = System::Drawing::Size(1277, 91);
			this->pnlHeader->TabIndex = 0;
			// 
			// cmbUserRole
			// 
			this->cmbUserRole->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cmbUserRole->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->cmbUserRole->FormattingEnabled = true;
			this->cmbUserRole->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Адміністратор", L"Користувач" });
			this->cmbUserRole->Location = System::Drawing::Point(1005, 31);
			this->cmbUserRole->Name = L"cmbUserRole";
			this->cmbUserRole->Size = System::Drawing::Size(246, 33);
			this->cmbUserRole->TabIndex = 1;
			// 
			// lblAppTitle
			// 
			this->lblAppTitle->AutoSize = true;
			this->lblAppTitle->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblAppTitle->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->lblAppTitle->Location = System::Drawing::Point(28, 26);
			this->lblAppTitle->Name = L"lblAppTitle";
			this->lblAppTitle->Size = System::Drawing::Size(551, 35);
			this->lblAppTitle->TabIndex = 0;
			this->lblAppTitle->Text = L"Система Управління Номерами Готелю";
			// 
			// pnlNavBar
			// 
			this->pnlNavBar->BackColor = System::Drawing::Color::WhiteSmoke;
			this->pnlNavBar->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pnlNavBar->Controls->Add(this->btnNavMaintenance);
			this->pnlNavBar->Controls->Add(this->btnNavGuests);
			this->pnlNavBar->Controls->Add(this->btnNavRooms);
			this->pnlNavBar->Controls->Add(this->btnNavServices);
			this->pnlNavBar->Controls->Add(this->btnNavBookings);
			this->pnlNavBar->Dock = System::Windows::Forms::DockStyle::Top;
			this->pnlNavBar->Location = System::Drawing::Point(0, 91);
			this->pnlNavBar->Margin = System::Windows::Forms::Padding(10);
			this->pnlNavBar->Name = L"pnlNavBar";
			this->pnlNavBar->Size = System::Drawing::Size(1277, 72);
			this->pnlNavBar->TabIndex = 1;
			// 
			// pnlSidebar
			// 
			this->pnlSidebar->BackColor = System::Drawing::Color::WhiteSmoke;
			this->pnlSidebar->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pnlSidebar->Controls->Add(this->btnQuickRepairRequest);
			this->pnlSidebar->Controls->Add(this->btnQuickAddService);
			this->pnlSidebar->Controls->Add(this->btnQuickNewBooking);
			this->pnlSidebar->Controls->Add(this->btnQuickAddGuest);
			this->pnlSidebar->Controls->Add(this->btnQuickAddRoom);
			this->pnlSidebar->Controls->Add(this->lblQuickActions);
			this->pnlSidebar->Dock = System::Windows::Forms::DockStyle::Left;
			this->pnlSidebar->Location = System::Drawing::Point(0, 163);
			this->pnlSidebar->Margin = System::Windows::Forms::Padding(10);
			this->pnlSidebar->Name = L"pnlSidebar";
			this->pnlSidebar->Size = System::Drawing::Size(324, 584);
			this->pnlSidebar->TabIndex = 2;
			// 
			// pnlContent
			// 
			this->pnlContent->BackColor = System::Drawing::Color::WhiteSmoke;
			this->pnlContent->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pnlContent->Controls->Add(this->mainDataGridView);
			this->pnlContent->Controls->Add(this->label1);
			this->pnlContent->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pnlContent->Location = System::Drawing::Point(324, 163);
			this->pnlContent->Margin = System::Windows::Forms::Padding(10);
			this->pnlContent->Name = L"pnlContent";
			this->pnlContent->Size = System::Drawing::Size(953, 584);
			this->pnlContent->TabIndex = 3;
			// 
			// btnNavRooms
			// 
			this->btnNavRooms->FlatAppearance->BorderSize = 0;
			this->btnNavRooms->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnNavRooms->Location = System::Drawing::Point(34, 12);
			this->btnNavRooms->Name = L"btnNavRooms";
			this->btnNavRooms->Size = System::Drawing::Size(149, 46);
			this->btnNavRooms->TabIndex = 1;
			this->btnNavRooms->Text = L"Номери";
			this->btnNavRooms->UseVisualStyleBackColor = true;
			// 
			// btnNavGuests
			// 
			this->btnNavGuests->FlatAppearance->BorderSize = 0;
			this->btnNavGuests->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnNavGuests->Location = System::Drawing::Point(190, 12);
			this->btnNavGuests->Name = L"btnNavGuests";
			this->btnNavGuests->Size = System::Drawing::Size(149, 46);
			this->btnNavGuests->TabIndex = 2;
			this->btnNavGuests->Text = L"Гості";
			this->btnNavGuests->UseVisualStyleBackColor = true;
			// 
			// btnNavBookings
			// 
			this->btnNavBookings->FlatAppearance->BorderSize = 0;
			this->btnNavBookings->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnNavBookings->Location = System::Drawing::Point(345, 12);
			this->btnNavBookings->Name = L"btnNavBookings";
			this->btnNavBookings->Size = System::Drawing::Size(211, 46);
			this->btnNavBookings->TabIndex = 3;
			this->btnNavBookings->Text = L"Бронювання";
			this->btnNavBookings->UseVisualStyleBackColor = true;
			// 
			// btnNavServices
			// 
			this->btnNavServices->FlatAppearance->BorderSize = 0;
			this->btnNavServices->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnNavServices->Location = System::Drawing::Point(562, 12);
			this->btnNavServices->Name = L"btnNavServices";
			this->btnNavServices->Size = System::Drawing::Size(211, 46);
			this->btnNavServices->TabIndex = 4;
			this->btnNavServices->Text = L"Послуги";
			this->btnNavServices->UseVisualStyleBackColor = true;
			// 
			// btnNavMaintenance
			// 
			this->btnNavMaintenance->FlatAppearance->BorderSize = 0;
			this->btnNavMaintenance->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnNavMaintenance->Location = System::Drawing::Point(779, 12);
			this->btnNavMaintenance->Name = L"btnNavMaintenance";
			this->btnNavMaintenance->Size = System::Drawing::Size(211, 46);
			this->btnNavMaintenance->TabIndex = 5;
			this->btnNavMaintenance->Text = L"Обслуговування";
			this->btnNavMaintenance->UseVisualStyleBackColor = true;
			// 
			// lblQuickActions
			// 
			this->lblQuickActions->AutoSize = true;
			this->lblQuickActions->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblQuickActions->ForeColor = System::Drawing::Color::Black;
			this->lblQuickActions->Location = System::Drawing::Point(85, 28);
			this->lblQuickActions->Name = L"lblQuickActions";
			this->lblQuickActions->Size = System::Drawing::Size(155, 32);
			this->lblQuickActions->TabIndex = 1;
			this->lblQuickActions->Text = L"Швидкі Дії";
			// 
			// btnQuickAddRoom
			// 
			this->btnQuickAddRoom->FlatAppearance->BorderSize = 0;
			this->btnQuickAddRoom->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnQuickAddRoom->Location = System::Drawing::Point(34, 93);
			this->btnQuickAddRoom->Name = L"btnQuickAddRoom";
			this->btnQuickAddRoom->Size = System::Drawing::Size(262, 46);
			this->btnQuickAddRoom->TabIndex = 2;
			this->btnQuickAddRoom->Text = L"Додати Номер";
			this->btnQuickAddRoom->UseVisualStyleBackColor = true;
			// 
			// btnQuickAddGuest
			// 
			this->btnQuickAddGuest->FlatAppearance->BorderSize = 0;
			this->btnQuickAddGuest->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnQuickAddGuest->Location = System::Drawing::Point(34, 145);
			this->btnQuickAddGuest->Name = L"btnQuickAddGuest";
			this->btnQuickAddGuest->Size = System::Drawing::Size(262, 46);
			this->btnQuickAddGuest->TabIndex = 3;
			this->btnQuickAddGuest->Text = L"Додати Гостя";
			this->btnQuickAddGuest->UseVisualStyleBackColor = true;
			// 
			// btnQuickNewBooking
			// 
			this->btnQuickNewBooking->FlatAppearance->BorderSize = 0;
			this->btnQuickNewBooking->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnQuickNewBooking->Location = System::Drawing::Point(34, 197);
			this->btnQuickNewBooking->Name = L"btnQuickNewBooking";
			this->btnQuickNewBooking->Size = System::Drawing::Size(262, 46);
			this->btnQuickNewBooking->TabIndex = 4;
			this->btnQuickNewBooking->Text = L"Нове бронювання";
			this->btnQuickNewBooking->UseVisualStyleBackColor = true;
			// 
			// btnQuickAddService
			// 
			this->btnQuickAddService->FlatAppearance->BorderSize = 0;
			this->btnQuickAddService->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnQuickAddService->Location = System::Drawing::Point(34, 249);
			this->btnQuickAddService->Name = L"btnQuickAddService";
			this->btnQuickAddService->Size = System::Drawing::Size(262, 46);
			this->btnQuickAddService->TabIndex = 5;
			this->btnQuickAddService->Text = L"Додати  послугу";
			this->btnQuickAddService->UseVisualStyleBackColor = true;
			// 
			// btnQuickRepairRequest
			// 
			this->btnQuickRepairRequest->FlatAppearance->BorderSize = 0;
			this->btnQuickRepairRequest->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->btnQuickRepairRequest->Location = System::Drawing::Point(34, 301);
			this->btnQuickRepairRequest->Name = L"btnQuickRepairRequest";
			this->btnQuickRepairRequest->Size = System::Drawing::Size(262, 46);
			this->btnQuickRepairRequest->TabIndex = 6;
			this->btnQuickRepairRequest->Text = L"Заявка на ремонт";
			this->btnQuickRepairRequest->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(15, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(233, 32);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Таблиця Номерів";
			// 
			// mainDataGridView
			// 
			this->mainDataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->mainDataGridView->Location = System::Drawing::Point(21, 93);
			this->mainDataGridView->Name = L"mainDataGridView";
			this->mainDataGridView->RowHeadersWidth = 51;
			this->mainDataGridView->RowTemplate->Height = 24;
			this->mainDataGridView->Size = System::Drawing::Size(906, 454);
			this->mainDataGridView->TabIndex = 3;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1277, 747);
			this->Controls->Add(this->pnlContent);
			this->Controls->Add(this->pnlSidebar);
			this->Controls->Add(this->pnlNavBar);
			this->Controls->Add(this->pnlHeader);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MainForm";
			this->pnlHeader->ResumeLayout(false);
			this->pnlHeader->PerformLayout();
			this->pnlNavBar->ResumeLayout(false);
			this->pnlSidebar->ResumeLayout(false);
			this->pnlSidebar->PerformLayout();
			this->pnlContent->ResumeLayout(false);
			this->pnlContent->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->mainDataGridView))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
