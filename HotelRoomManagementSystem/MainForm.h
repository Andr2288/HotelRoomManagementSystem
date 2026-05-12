#pragma once
#include "HotelModels.h"
#include "JsonDataUtility.h"
#include "AddRoomForm.h"
#include "Add GuestForm.h"
#include "NewBookingForm.h"
#include "ServiceForm.h"
#include "MaintainanceForm.h"

namespace HotelRoomManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			InitializeData();
			InitializeEvents();
			currentSection = L"rooms";
			cmbUserRole->SelectedIndex = 0;
			ApplyRole();
			ShowRooms();
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
	private: List<Room^>^ rooms;
	private: List<Guest^>^ guests;
	private: List<Booking^>^ bookings;
	private: List<ServiceItem^>^ services;
	private: List<MaintenanceTask^>^ maintenanceTasks;
	private: array<String^>^ employees;
	private: String^ currentSection;
	private: int nextRoomId;
	private: int nextGuestId;
	private: int nextBookingId;
	private: int nextServiceId;
	private: int nextMaintenanceId;





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

	private:
		void InitializeEvents()
		{
			btnNavRooms->Click += gcnew System::EventHandler(this, &MainForm::btnNavRooms_Click);
			btnNavGuests->Click += gcnew System::EventHandler(this, &MainForm::btnNavGuests_Click);
			btnNavBookings->Click += gcnew System::EventHandler(this, &MainForm::btnNavBookings_Click);
			btnNavServices->Click += gcnew System::EventHandler(this, &MainForm::btnNavServices_Click);
			btnNavMaintenance->Click += gcnew System::EventHandler(this, &MainForm::btnNavMaintenance_Click);

			btnQuickAddRoom->Click += gcnew System::EventHandler(this, &MainForm::btnQuickAddRoom_Click);
			btnQuickAddGuest->Click += gcnew System::EventHandler(this, &MainForm::btnQuickAddGuest_Click);
			btnQuickNewBooking->Click += gcnew System::EventHandler(this, &MainForm::btnQuickNewBooking_Click);
			btnQuickAddService->Click += gcnew System::EventHandler(this, &MainForm::btnQuickAddService_Click);
			btnQuickRepairRequest->Click += gcnew System::EventHandler(this, &MainForm::btnQuickRepairRequest_Click);

			cmbUserRole->SelectedIndexChanged += gcnew System::EventHandler(this, &MainForm::cmbUserRole_SelectedIndexChanged);
			mainDataGridView->CellContentClick += gcnew DataGridViewCellEventHandler(this, &MainForm::mainDataGridView_CellContentClick);
		}

		void InitializeData()
		{
			rooms = gcnew List<Room^>();
			guests = gcnew List<Guest^>();
			bookings = gcnew List<Booking^>();
			services = gcnew List<ServiceItem^>();
			maintenanceTasks = gcnew List<MaintenanceTask^>();
			employees = gcnew array<String^> { L"Іваненко І.І.", L"Петренко П.П.", L"Сидоренко О.О." };

			if (JsonDataUtility::LoadData(
				rooms,
				guests,
				bookings,
				services,
				maintenanceTasks,
				nextRoomId,
				nextGuestId,
				nextBookingId,
				nextServiceId,
				nextMaintenanceId)) {
				return;
			}

			rooms->Add(gcnew Room(1, L"101", L"Стандарт", 2, 1200, L"Вільний"));
			rooms->Add(gcnew Room(2, L"102", L"Стандарт", 2, 1200, L"Заброньований"));
			rooms->Add(gcnew Room(3, L"201", L"Люкс", 3, 2600, L"Зайнятий"));
			rooms->Add(gcnew Room(4, L"301", L"Сімейний", 4, 3200, L"Вільний"));
			rooms->Add(gcnew Room(5, L"010", L"Економ", 1, 800, L"Ремонт"));

			guests->Add(gcnew Guest(1, L"Коваль Андрій", L"+380501112233", L"AA123456", L"koval@example.com"));
			guests->Add(gcnew Guest(2, L"Мельник Олена", L"+380671234567", L"BK998877", L"melnyk@example.com"));

			bookings->Add(gcnew Booking(1, 1, 2, DateTime(2026, 5, 15), DateTime(2026, 5, 17), L"Активне"));
			bookings->Add(gcnew Booking(2, 2, 3, DateTime(2026, 5, 10), DateTime(2026, 5, 12), L"Оплачено"));

			services->Add(gcnew ServiceItem(1, L"Сніданок", 250, L"Харчування"));
			services->Add(gcnew ServiceItem(2, L"Додаткове прибирання", 180, L"Прибирання"));
			services->Add(gcnew ServiceItem(3, L"Трансфер з вокзалу", 500, L"Трансфер"));

			maintenanceTasks->Add(gcnew MaintenanceTask(1, 5, L"Іваненко І.І.", L"В роботі", L"Перевірити сантехніку"));

			nextRoomId = 6;
			nextGuestId = 3;
			nextBookingId = 3;
			nextServiceId = 4;
			nextMaintenanceId = 2;

			SaveData();
		}

		void SaveData()
		{
			JsonDataUtility::SaveData(
				rooms,
				guests,
				bookings,
				services,
				maintenanceTasks,
				nextRoomId,
				nextGuestId,
				nextBookingId,
				nextServiceId,
				nextMaintenanceId
			);
		}

		void PrepareGrid()
		{
			mainDataGridView->Columns->Clear();
			mainDataGridView->Rows->Clear();
			mainDataGridView->AllowUserToAddRows = false;
			mainDataGridView->ReadOnly = true;
			mainDataGridView->SelectionMode = DataGridViewSelectionMode::FullRowSelect;
			mainDataGridView->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;
		}

		void AddTextColumn(String^ name, String^ header)
		{
			DataGridViewTextBoxColumn^ column = gcnew DataGridViewTextBoxColumn();
			column->Name = name;
			column->HeaderText = header;
			mainDataGridView->Columns->Add(column);
		}

		void AddActionColumns()
		{
			DataGridViewButtonColumn^ editColumn = gcnew DataGridViewButtonColumn();
			editColumn->Name = L"EditButton";
			editColumn->HeaderText = L"";
			editColumn->Text = L"Редагувати";
			editColumn->UseColumnTextForButtonValue = true;
			mainDataGridView->Columns->Add(editColumn);

			DataGridViewButtonColumn^ deleteColumn = gcnew DataGridViewButtonColumn();
			deleteColumn->Name = L"DeleteButton";
			deleteColumn->HeaderText = L"";
			deleteColumn->Text = L"Видалити";
			deleteColumn->UseColumnTextForButtonValue = true;
			mainDataGridView->Columns->Add(deleteColumn);
		}

		void HideIdColumn()
		{
			if (mainDataGridView->Columns->Contains(L"Id")) {
				mainDataGridView->Columns[L"Id"]->Visible = false;
			}
		}

		bool IsAdmin()
		{
			return cmbUserRole->SelectedIndex == 0;
		}

		void ApplyRole()
		{
			bool isAdmin = IsAdmin();
			btnQuickAddRoom->Enabled = isAdmin;
			btnQuickAddGuest->Enabled = isAdmin;
			btnQuickAddService->Enabled = isAdmin;
			btnQuickRepairRequest->Enabled = isAdmin;
		}

		void RefreshCurrentTable()
		{
			if (currentSection == L"rooms") ShowRooms();
			else if (currentSection == L"guests") ShowGuests();
			else if (currentSection == L"bookings") ShowBookings();
			else if (currentSection == L"services") ShowServices();
			else ShowMaintenance();
		}

		void ShowRooms()
		{
			currentSection = L"rooms";
			label1->Text = L"Таблиця Номерів";
			PrepareGrid();
			AddTextColumn(L"Id", L"Id");
			AddTextColumn(L"Number", L"Номер");
			AddTextColumn(L"Type", L"Тип");
			AddTextColumn(L"Capacity", L"Місць");
			AddTextColumn(L"Price", L"Ціна");
			AddTextColumn(L"Status", L"Статус");
			AddActionColumns();

			for each (Room^ room in rooms) {
				mainDataGridView->Rows->Add(room->Id, room->Number, room->Type, room->Capacity, room->PricePerNight, room->Status);
			}
			HideIdColumn();
		}

		void ShowGuests()
		{
			currentSection = L"guests";
			label1->Text = L"Таблиця Гостей";
			PrepareGrid();
			AddTextColumn(L"Id", L"Id");
			AddTextColumn(L"FullName", L"ПІБ");
			AddTextColumn(L"Phone", L"Телефон");
			AddTextColumn(L"Document", L"Документ");
			AddTextColumn(L"Email", L"Email");
			AddActionColumns();

			for each (Guest^ guest in guests) {
				mainDataGridView->Rows->Add(guest->Id, guest->FullName, guest->Phone, guest->Document, guest->Email);
			}
			HideIdColumn();
		}

		void ShowBookings()
		{
			currentSection = L"bookings";
			label1->Text = L"Таблиця Бронювань";
			PrepareGrid();
			AddTextColumn(L"Id", L"Id");
			AddTextColumn(L"Guest", L"Гість");
			AddTextColumn(L"Room", L"Номер");
			AddTextColumn(L"CheckIn", L"Заїзд");
			AddTextColumn(L"CheckOut", L"Виїзд");
			AddTextColumn(L"Amount", L"Сума");
			AddTextColumn(L"Status", L"Статус");
			AddActionColumns();

			for each (Booking^ booking in bookings) {
				Guest^ guest = FindGuest(booking->GuestId);
				Room^ room = FindRoom(booking->RoomId);
				mainDataGridView->Rows->Add(
					booking->Id,
					guest == nullptr ? L"Невідомо" : guest->FullName,
					room == nullptr ? L"Невідомо" : room->Number,
					booking->CheckIn.ToShortDateString(),
					booking->CheckOut.ToShortDateString(),
					CalculateBookingAmount(booking),
					booking->Status
				);
			}
			HideIdColumn();
		}

		void ShowServices()
		{
			currentSection = L"services";
			label1->Text = L"Таблиця Послуг";
			PrepareGrid();
			AddTextColumn(L"Id", L"Id");
			AddTextColumn(L"Name", L"Назва");
			AddTextColumn(L"Price", L"Ціна");
			AddTextColumn(L"Category", L"Категорія");
			AddActionColumns();

			for each (ServiceItem^ service in services) {
				mainDataGridView->Rows->Add(service->Id, service->Name, service->Price, service->Category);
			}
			HideIdColumn();
		}

		void ShowMaintenance()
		{
			currentSection = L"maintenance";
			label1->Text = L"Таблиця Обслуговування";
			PrepareGrid();
			AddTextColumn(L"Id", L"Id");
			AddTextColumn(L"Room", L"Номер");
			AddTextColumn(L"Details", L"Опис");
			AddTextColumn(L"Executor", L"Виконавець");
			AddTextColumn(L"Status", L"Статус");
			AddActionColumns();

			for each (MaintenanceTask^ task in maintenanceTasks) {
				Room^ room = FindRoom(task->RoomId);
				mainDataGridView->Rows->Add(task->Id, room == nullptr ? L"Невідомо" : room->Number, task->Details, task->Executor, task->Status);
			}
			HideIdColumn();
		}

		Room^ FindRoom(int id)
		{
			for each (Room^ room in rooms) {
				if (room->Id == id) return room;
			}
			return nullptr;
		}

		Guest^ FindGuest(int id)
		{
			for each (Guest^ guest in guests) {
				if (guest->Id == id) return guest;
			}
			return nullptr;
		}

		Booking^ FindBooking(int id)
		{
			for each (Booking^ booking in bookings) {
				if (booking->Id == id) return booking;
			}
			return nullptr;
		}

		ServiceItem^ FindService(int id)
		{
			for each (ServiceItem^ service in services) {
				if (service->Id == id) return service;
			}
			return nullptr;
		}

		MaintenanceTask^ FindMaintenanceTask(int id)
		{
			for each (MaintenanceTask^ task in maintenanceTasks) {
				if (task->Id == id) return task;
			}
			return nullptr;
		}

		double CalculateBookingAmount(Booking^ booking)
		{
			Room^ room = FindRoom(booking->RoomId);
			if (room == nullptr) return 0;

			TimeSpan period = booking->CheckOut - booking->CheckIn;
			int days = Math::Max(1, Convert::ToInt32(Math::Ceiling(period.TotalDays)));
			return days * room->PricePerNight;
		}

		void UpdateRoomStatusAfterBooking(Booking^ booking)
		{
			Room^ room = FindRoom(booking->RoomId);
			if (room != nullptr && booking->Status == L"Активне") {
				room->Status = L"Заброньований";
			}
		}

		void UpdateRoomStatusAfterMaintenance(int roomId, String^ workStatus)
		{
			Room^ room = FindRoom(roomId);
			if (room == nullptr) {
				return;
			}

			if (workStatus == L"В роботі") {
				room->Status = L"Ремонт";
				return;
			}

			if (!HasActiveBookingForRoom(roomId, 0)) {
				room->Status = L"Вільний";
			}
		}

		List<Room^>^ GetAvailableRooms(int editedBookingId)
		{
			List<Room^>^ availableRooms = gcnew List<Room^>();

			for each (Room^ room in rooms) {
				bool usedByOtherActiveBooking = false;

				for each (Booking^ booking in bookings) {
					if (booking->Id != editedBookingId && booking->RoomId == room->Id && booking->Status == L"Активне") {
						usedByOtherActiveBooking = true;
						break;
					}
				}

				if (room->Status != L"Ремонт" && room->Status != L"Зайнятий" && !usedByOtherActiveBooking) {
					availableRooms->Add(room);
				}
			}

			return availableRooms;
		}

		bool HasActiveBookingForRoom(int roomId, int ignoredBookingId)
		{
			for each (Booking^ booking in bookings) {
				if (booking->Id != ignoredBookingId && booking->RoomId == roomId && booking->Status == L"Активне") {
					return true;
				}
			}

			return false;
		}

		bool IsBookingAllowed(int roomId, String^ status, int editedBookingId)
		{
			if (status != L"Активне") {
				return true;
			}

			Room^ room = FindRoom(roomId);
			if (room == nullptr) {
				MessageBox::Show(L"Обраний номер не знайдено.");
				return false;
			}

			if (room->Status == L"Ремонт" || room->Status == L"Зайнятий") {
				MessageBox::Show(L"Цей номер недоступний для бронювання.");
				return false;
			}

			if (HasActiveBookingForRoom(roomId, editedBookingId)) {
				MessageBox::Show(L"Цей номер вже має активне бронювання.");
				return false;
			}

			return true;
		}

		bool HasBookingsForRoom(int roomId)
		{
			for each (Booking^ booking in bookings) {
				if (booking->RoomId == roomId) {
					return true;
				}
			}

			return false;
		}

		bool HasBookingsForGuest(int guestId)
		{
			for each (Booking^ booking in bookings) {
				if (booking->GuestId == guestId) {
					return true;
				}
			}

			return false;
		}

		void RefreshRoomStatuses()
		{
			for each (Room^ room in rooms) {
				if (room->Status == L"Заброньований" && !HasActiveBookingForRoom(room->Id, 0)) {
					room->Status = L"Вільний";
				}
			}

			for each (Booking^ booking in bookings) {
				UpdateRoomStatusAfterBooking(booking);
			}

			for each (MaintenanceTask^ task in maintenanceTasks) {
				if (task->Status == L"В роботі") {
					UpdateRoomStatusAfterMaintenance(task->RoomId, task->Status);
				}
			}
		}

		void AddRoom()
		{
			if (!IsAdmin()) return;
			AddRoomForm^ form = gcnew AddRoomForm();
			if (form->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				rooms->Add(gcnew Room(nextRoomId++, form->RoomNumber, form->RoomType, form->Capacity, form->PricePerNight, form->RoomStatus));
				SaveData();
				ShowRooms();
			}
		}

		void EditRoom(int id)
		{
			Room^ room = FindRoom(id);
			if (room == nullptr) return;
			AddRoomForm^ form = gcnew AddRoomForm();
			form->LoadRoom(room);
			if (form->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				if ((form->RoomStatus == L"Ремонт" || form->RoomStatus == L"Зайнятий") && HasActiveBookingForRoom(room->Id, 0)) {
					MessageBox::Show(L"Неможливо встановити цей статус, бо номер має активне бронювання.");
					return;
				}

				room->Number = form->RoomNumber;
				room->Type = form->RoomType;
				room->Capacity = form->Capacity;
				room->PricePerNight = form->PricePerNight;
				room->Status = form->RoomStatus;
				RefreshRoomStatuses();
				SaveData();
				ShowRooms();
			}
		}

		void AddGuest()
		{
			if (!IsAdmin()) return;
			AddGuestForm^ form = gcnew AddGuestForm();
			if (form->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				guests->Add(gcnew Guest(nextGuestId++, form->FullName, form->Phone, form->Document, form->Email));
				SaveData();
				ShowGuests();
			}
		}

		void EditGuest(int id)
		{
			Guest^ guest = FindGuest(id);
			if (guest == nullptr) return;
			AddGuestForm^ form = gcnew AddGuestForm();
			form->LoadGuest(guest);
			if (form->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				guest->FullName = form->FullName;
				guest->Phone = form->Phone;
				guest->Document = form->Document;
				guest->Email = form->Email;
				SaveData();
				ShowGuests();
			}
		}

		void AddBooking()
		{
			List<Room^>^ availableRooms = GetAvailableRooms(0);

			if (guests->Count == 0 || availableRooms->Count == 0) {
				MessageBox::Show(L"Для бронювання потрібен хоча б один гість і один доступний номер.");
				return;
			}

			NewBookingForm^ form = gcnew NewBookingForm();
			form->LoadOptions(guests, availableRooms);
			if (form->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				if (!IsBookingAllowed(form->RoomId, form->BookingStatus, 0)) {
					return;
				}

				Booking^ booking = gcnew Booking(nextBookingId++, form->GuestId, form->RoomId, form->CheckIn, form->CheckOut, form->BookingStatus);
				bookings->Add(booking);
				UpdateRoomStatusAfterBooking(booking);
				SaveData();
				ShowBookings();
			}
		}

		void EditBooking(int id)
		{
			Booking^ booking = FindBooking(id);
			if (booking == nullptr) return;
			List<Room^>^ availableRooms = GetAvailableRooms(booking->Id);

			NewBookingForm^ form = gcnew NewBookingForm();
			form->LoadOptions(guests, availableRooms);
			form->LoadBooking(booking);
			if (form->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				if (!IsBookingAllowed(form->RoomId, form->BookingStatus, booking->Id)) {
					return;
				}

				booking->GuestId = form->GuestId;
				booking->RoomId = form->RoomId;
				booking->CheckIn = form->CheckIn;
				booking->CheckOut = form->CheckOut;
				booking->Status = form->BookingStatus;
				RefreshRoomStatuses();
				SaveData();
				ShowBookings();
			}
		}

		void AddService()
		{
			if (!IsAdmin()) return;
			ServiceForm^ form = gcnew ServiceForm();
			if (form->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				services->Add(gcnew ServiceItem(nextServiceId++, form->ServiceName, form->Price, form->Category));
				SaveData();
				ShowServices();
			}
		}

		void EditService(int id)
		{
			ServiceItem^ service = FindService(id);
			if (service == nullptr) return;
			ServiceForm^ form = gcnew ServiceForm();
			form->LoadService(service);
			if (form->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				service->Name = form->ServiceName;
				service->Price = form->Price;
				service->Category = form->Category;
				SaveData();
				ShowServices();
			}
		}

		void AddMaintenanceTask()
		{
			if (!IsAdmin()) return;
			MaintainanceForm^ form = gcnew MaintainanceForm();
			form->LoadOptions(rooms, employees);
			if (form->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				if (form->WorkStatus == L"В роботі" && HasActiveBookingForRoom(form->RoomId, 0)) {
					MessageBox::Show(L"Неможливо створити ремонтну заявку для активно заброньованого номера.");
					return;
				}

				maintenanceTasks->Add(gcnew MaintenanceTask(nextMaintenanceId++, form->RoomId, form->Executor, form->WorkStatus, form->Details));
				UpdateRoomStatusAfterMaintenance(form->RoomId, form->WorkStatus);
				SaveData();
				ShowMaintenance();
			}
		}

		void EditMaintenanceTask(int id)
		{
			MaintenanceTask^ task = FindMaintenanceTask(id);
			if (task == nullptr) return;
			MaintainanceForm^ form = gcnew MaintainanceForm();
			form->LoadOptions(rooms, employees);
			form->LoadTask(task);
			if (form->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				if (form->WorkStatus == L"В роботі" && HasActiveBookingForRoom(form->RoomId, 0)) {
					MessageBox::Show(L"Неможливо поставити в ремонт активно заброньований номер.");
					return;
				}

				int previousRoomId = task->RoomId;
				task->RoomId = form->RoomId;
				task->Executor = form->Executor;
				task->Status = form->WorkStatus;
				task->Details = form->Details;
				UpdateRoomStatusAfterMaintenance(previousRoomId, L"Виконано");
				UpdateRoomStatusAfterMaintenance(task->RoomId, task->Status);
				RefreshRoomStatuses();
				SaveData();
				ShowMaintenance();
			}
		}

		void DeleteCurrentItem(int id)
		{
			if (!IsAdmin()) {
				MessageBox::Show(L"Видалення доступне тільки адміністратору.");
				return;
			}

			if (MessageBox::Show(L"Видалити запис?", L"Підтвердження", MessageBoxButtons::YesNo) != System::Windows::Forms::DialogResult::Yes) {
				return;
			}

			if (currentSection == L"rooms") {
				if (HasBookingsForRoom(id)) {
					MessageBox::Show(L"Неможливо видалити номер, бо з ним пов'язані бронювання.");
					return;
				}
				rooms->Remove(FindRoom(id));
			}
			else if (currentSection == L"guests") {
				if (HasBookingsForGuest(id)) {
					MessageBox::Show(L"Неможливо видалити гостя, бо з ним пов'язані бронювання.");
					return;
				}
				guests->Remove(FindGuest(id));
			}
			else if (currentSection == L"bookings") {
				bookings->Remove(FindBooking(id));
				RefreshRoomStatuses();
			}
			else if (currentSection == L"services") {
				services->Remove(FindService(id));
			}
			else {
				MaintenanceTask^ task = FindMaintenanceTask(id);
				int roomId = task == nullptr ? 0 : task->RoomId;
				maintenanceTasks->Remove(task);
				UpdateRoomStatusAfterMaintenance(roomId, L"Виконано");
				RefreshRoomStatuses();
			}

			SaveData();
			RefreshCurrentTable();
		}

		void EditCurrentItem(int id)
		{
			if (!IsAdmin()) {
				MessageBox::Show(L"Редагування доступне тільки адміністратору.");
				return;
			}

			if (currentSection == L"rooms") EditRoom(id);
			else if (currentSection == L"guests") EditGuest(id);
			else if (currentSection == L"bookings") EditBooking(id);
			else if (currentSection == L"services") EditService(id);
			else EditMaintenanceTask(id);
		}

		System::Void btnNavRooms_Click(System::Object^ sender, System::EventArgs^ e) { ShowRooms(); }
		System::Void btnNavGuests_Click(System::Object^ sender, System::EventArgs^ e) { ShowGuests(); }
		System::Void btnNavBookings_Click(System::Object^ sender, System::EventArgs^ e) { ShowBookings(); }
		System::Void btnNavServices_Click(System::Object^ sender, System::EventArgs^ e) { ShowServices(); }
		System::Void btnNavMaintenance_Click(System::Object^ sender, System::EventArgs^ e) { ShowMaintenance(); }

		System::Void btnQuickAddRoom_Click(System::Object^ sender, System::EventArgs^ e) { AddRoom(); }
		System::Void btnQuickAddGuest_Click(System::Object^ sender, System::EventArgs^ e) { AddGuest(); }
		System::Void btnQuickNewBooking_Click(System::Object^ sender, System::EventArgs^ e) { AddBooking(); }
		System::Void btnQuickAddService_Click(System::Object^ sender, System::EventArgs^ e) { AddService(); }
		System::Void btnQuickRepairRequest_Click(System::Object^ sender, System::EventArgs^ e) { AddMaintenanceTask(); }

		System::Void cmbUserRole_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
		{
			ApplyRole();
			RefreshCurrentTable();
		}

		System::Void mainDataGridView_CellContentClick(System::Object^ sender, DataGridViewCellEventArgs^ e)
		{
			if (e->RowIndex < 0) return;

			String^ columnName = mainDataGridView->Columns[e->ColumnIndex]->Name;
			if (columnName != L"EditButton" && columnName != L"DeleteButton") return;

			int id = Convert::ToInt32(mainDataGridView->Rows[e->RowIndex]->Cells[L"Id"]->Value);
			if (columnName == L"EditButton") {
				EditCurrentItem(id);
			}
			else {
				DeleteCurrentItem(id);
			}
		}
	};
}
