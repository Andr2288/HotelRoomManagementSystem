#pragma once
#include "HotelModels.h"

namespace HotelRoomManagementSystem {
	using namespace System;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Globalization;
	using namespace System::IO;
	using namespace System::Web::Script::Serialization;
	using namespace System::Windows::Forms;

	public ref class JsonDataUtility abstract sealed
	{
	public:
		static String^ GetDataFilePath()
		{
			return Path::Combine(Application::StartupPath, L"hotel-data.json");
		}

		static bool LoadData(
			List<Room^>^ rooms,
			List<Guest^>^ guests,
			List<Booking^>^ bookings,
			List<ServiceItem^>^ services,
			List<MaintenanceTask^>^ maintenanceTasks,
			int% nextRoomId,
			int% nextGuestId,
			int% nextBookingId,
			int% nextServiceId,
			int% nextMaintenanceId)
		{
			String^ path = GetDataFilePath();
			if (!File::Exists(path)) {
				return false;
			}

			String^ json = File::ReadAllText(path);
			if (String::IsNullOrWhiteSpace(json)) {
				return false;
			}

			JavaScriptSerializer^ serializer = gcnew JavaScriptSerializer();
			Dictionary<String^, Object^>^ root = safe_cast<Dictionary<String^, Object^>^>(serializer->DeserializeObject(json));

			rooms->Clear();
			guests->Clear();
			bookings->Clear();
			services->Clear();
			maintenanceTasks->Clear();

			LoadRooms(root, rooms);
			LoadGuests(root, guests);
			LoadBookings(root, bookings);
			LoadServices(root, services);
			LoadMaintenance(root, maintenanceTasks);

			nextRoomId = GetNextId(root, L"nextRoomId", GetMaxRoomId(rooms) + 1);
			nextGuestId = GetNextId(root, L"nextGuestId", GetMaxGuestId(guests) + 1);
			nextBookingId = GetNextId(root, L"nextBookingId", GetMaxBookingId(bookings) + 1);
			nextServiceId = GetNextId(root, L"nextServiceId", GetMaxServiceId(services) + 1);
			nextMaintenanceId = GetNextId(root, L"nextMaintenanceId", GetMaxMaintenanceId(maintenanceTasks) + 1);

			return true;
		}

		static void SaveData(
			List<Room^>^ rooms,
			List<Guest^>^ guests,
			List<Booking^>^ bookings,
			List<ServiceItem^>^ services,
			List<MaintenanceTask^>^ maintenanceTasks,
			int nextRoomId,
			int nextGuestId,
			int nextBookingId,
			int nextServiceId,
			int nextMaintenanceId)
		{
			Dictionary<String^, Object^>^ root = gcnew Dictionary<String^, Object^>();
			root->Add(L"nextRoomId", nextRoomId);
			root->Add(L"nextGuestId", nextGuestId);
			root->Add(L"nextBookingId", nextBookingId);
			root->Add(L"nextServiceId", nextServiceId);
			root->Add(L"nextMaintenanceId", nextMaintenanceId);
			root->Add(L"rooms", CreateRoomsArray(rooms));
			root->Add(L"guests", CreateGuestsArray(guests));
			root->Add(L"bookings", CreateBookingsArray(bookings));
			root->Add(L"services", CreateServicesArray(services));
			root->Add(L"maintenanceTasks", CreateMaintenanceArray(maintenanceTasks));

			JavaScriptSerializer^ serializer = gcnew JavaScriptSerializer();
			String^ json = serializer->Serialize(root);
			File::WriteAllText(GetDataFilePath(), json);
		}

	private:
		static array<Object^>^ GetArray(Dictionary<String^, Object^>^ root, String^ key)
		{
			if (!root->ContainsKey(key) || root[key] == nullptr) {
				return gcnew array<Object^>(0);
			}

			array<Object^>^ objectArray = dynamic_cast<array<Object^>^>(root[key]);
			if (objectArray != nullptr) {
				return objectArray;
			}

			ArrayList^ arrayList = dynamic_cast<ArrayList^>(root[key]);
			if (arrayList != nullptr) {
				return arrayList->ToArray();
			}

			return gcnew array<Object^>(0);
		}

		static int GetNextId(Dictionary<String^, Object^>^ root, String^ key, int defaultValue)
		{
			if (!root->ContainsKey(key) || root[key] == nullptr) {
				return defaultValue;
			}

			return Convert::ToInt32(root[key]);
		}

		static void LoadRooms(Dictionary<String^, Object^>^ root, List<Room^>^ rooms)
		{
			for each (Object^ item in GetArray(root, L"rooms")) {
				Dictionary<String^, Object^>^ row = safe_cast<Dictionary<String^, Object^>^>(item);
				rooms->Add(gcnew Room(
					Convert::ToInt32(row[L"id"]),
					Convert::ToString(row[L"number"]),
					Convert::ToString(row[L"type"]),
					Convert::ToInt32(row[L"capacity"]),
					Convert::ToDouble(row[L"pricePerNight"]),
					Convert::ToString(row[L"status"])
				));
			}
		}

		static void LoadGuests(Dictionary<String^, Object^>^ root, List<Guest^>^ guests)
		{
			for each (Object^ item in GetArray(root, L"guests")) {
				Dictionary<String^, Object^>^ row = safe_cast<Dictionary<String^, Object^>^>(item);
				guests->Add(gcnew Guest(
					Convert::ToInt32(row[L"id"]),
					Convert::ToString(row[L"fullName"]),
					Convert::ToString(row[L"phone"]),
					Convert::ToString(row[L"document"]),
					Convert::ToString(row[L"email"])
				));
			}
		}

		static void LoadBookings(Dictionary<String^, Object^>^ root, List<Booking^>^ bookings)
		{
			for each (Object^ item in GetArray(root, L"bookings")) {
				Dictionary<String^, Object^>^ row = safe_cast<Dictionary<String^, Object^>^>(item);
				bookings->Add(gcnew Booking(
					Convert::ToInt32(row[L"id"]),
					Convert::ToInt32(row[L"guestId"]),
					Convert::ToInt32(row[L"roomId"]),
					ParseDate(row[L"checkIn"]),
					ParseDate(row[L"checkOut"]),
					Convert::ToString(row[L"status"])
				));
			}
		}

		static void LoadServices(Dictionary<String^, Object^>^ root, List<ServiceItem^>^ services)
		{
			for each (Object^ item in GetArray(root, L"services")) {
				Dictionary<String^, Object^>^ row = safe_cast<Dictionary<String^, Object^>^>(item);
				services->Add(gcnew ServiceItem(
					Convert::ToInt32(row[L"id"]),
					Convert::ToString(row[L"name"]),
					Convert::ToDouble(row[L"price"]),
					Convert::ToString(row[L"category"])
				));
			}
		}

		static void LoadMaintenance(Dictionary<String^, Object^>^ root, List<MaintenanceTask^>^ maintenanceTasks)
		{
			for each (Object^ item in GetArray(root, L"maintenanceTasks")) {
				Dictionary<String^, Object^>^ row = safe_cast<Dictionary<String^, Object^>^>(item);
				maintenanceTasks->Add(gcnew MaintenanceTask(
					Convert::ToInt32(row[L"id"]),
					Convert::ToInt32(row[L"roomId"]),
					Convert::ToString(row[L"executor"]),
					Convert::ToString(row[L"status"]),
					Convert::ToString(row[L"details"])
				));
			}
		}

		static DateTime ParseDate(Object^ value)
		{
			return DateTime::ParseExact(Convert::ToString(value), L"yyyy-MM-dd", CultureInfo::InvariantCulture);
		}

		static String^ FormatDate(DateTime date)
		{
			return date.ToString(L"yyyy-MM-dd", CultureInfo::InvariantCulture);
		}

		static ArrayList^ CreateRoomsArray(List<Room^>^ rooms)
		{
			ArrayList^ items = gcnew ArrayList();
			for each (Room^ room in rooms) {
				Dictionary<String^, Object^>^ row = gcnew Dictionary<String^, Object^>();
				row->Add(L"id", room->Id);
				row->Add(L"number", room->Number);
				row->Add(L"type", room->Type);
				row->Add(L"capacity", room->Capacity);
				row->Add(L"pricePerNight", room->PricePerNight);
				row->Add(L"status", room->Status);
				items->Add(row);
			}
			return items;
		}

		static ArrayList^ CreateGuestsArray(List<Guest^>^ guests)
		{
			ArrayList^ items = gcnew ArrayList();
			for each (Guest^ guest in guests) {
				Dictionary<String^, Object^>^ row = gcnew Dictionary<String^, Object^>();
				row->Add(L"id", guest->Id);
				row->Add(L"fullName", guest->FullName);
				row->Add(L"phone", guest->Phone);
				row->Add(L"document", guest->Document);
				row->Add(L"email", guest->Email);
				items->Add(row);
			}
			return items;
		}

		static ArrayList^ CreateBookingsArray(List<Booking^>^ bookings)
		{
			ArrayList^ items = gcnew ArrayList();
			for each (Booking^ booking in bookings) {
				Dictionary<String^, Object^>^ row = gcnew Dictionary<String^, Object^>();
				row->Add(L"id", booking->Id);
				row->Add(L"guestId", booking->GuestId);
				row->Add(L"roomId", booking->RoomId);
				row->Add(L"checkIn", FormatDate(booking->CheckIn));
				row->Add(L"checkOut", FormatDate(booking->CheckOut));
				row->Add(L"status", booking->Status);
				items->Add(row);
			}
			return items;
		}

		static ArrayList^ CreateServicesArray(List<ServiceItem^>^ services)
		{
			ArrayList^ items = gcnew ArrayList();
			for each (ServiceItem^ service in services) {
				Dictionary<String^, Object^>^ row = gcnew Dictionary<String^, Object^>();
				row->Add(L"id", service->Id);
				row->Add(L"name", service->Name);
				row->Add(L"price", service->Price);
				row->Add(L"category", service->Category);
				items->Add(row);
			}
			return items;
		}

		static ArrayList^ CreateMaintenanceArray(List<MaintenanceTask^>^ maintenanceTasks)
		{
			ArrayList^ items = gcnew ArrayList();
			for each (MaintenanceTask^ task in maintenanceTasks) {
				Dictionary<String^, Object^>^ row = gcnew Dictionary<String^, Object^>();
				row->Add(L"id", task->Id);
				row->Add(L"roomId", task->RoomId);
				row->Add(L"executor", task->Executor);
				row->Add(L"status", task->Status);
				row->Add(L"details", task->Details);
				items->Add(row);
			}
			return items;
		}

		static int GetMaxRoomId(List<Room^>^ rooms)
		{
			int maxId = 0;
			for each (Room^ room in rooms) if (room->Id > maxId) maxId = room->Id;
			return maxId;
		}

		static int GetMaxGuestId(List<Guest^>^ guests)
		{
			int maxId = 0;
			for each (Guest^ guest in guests) if (guest->Id > maxId) maxId = guest->Id;
			return maxId;
		}

		static int GetMaxBookingId(List<Booking^>^ bookings)
		{
			int maxId = 0;
			for each (Booking^ booking in bookings) if (booking->Id > maxId) maxId = booking->Id;
			return maxId;
		}

		static int GetMaxServiceId(List<ServiceItem^>^ services)
		{
			int maxId = 0;
			for each (ServiceItem^ service in services) if (service->Id > maxId) maxId = service->Id;
			return maxId;
		}

		static int GetMaxMaintenanceId(List<MaintenanceTask^>^ maintenanceTasks)
		{
			int maxId = 0;
			for each (MaintenanceTask^ task in maintenanceTasks) if (task->Id > maxId) maxId = task->Id;
			return maxId;
		}
	};
}
