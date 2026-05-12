#pragma once

namespace HotelRoomManagementSystem {
	using namespace System;

	public ref class Room
	{
	public:
		int Id;
		String^ Number;
		String^ Type;
		int Capacity;
		double PricePerNight;
		String^ Status;

		Room(int id, String^ number, String^ type, int capacity, double pricePerNight, String^ status)
		{
			Id = id;
			Number = number;
			Type = type;
			Capacity = capacity;
			PricePerNight = pricePerNight;
			Status = status;
		}

		virtual String^ ToString() override
		{
			return Number + L" - " + Type;
		}
	};

	public ref class Guest
	{
	public:
		int Id;
		String^ FullName;
		String^ Phone;
		String^ Document;
		String^ Email;

		Guest(int id, String^ fullName, String^ phone, String^ document, String^ email)
		{
			Id = id;
			FullName = fullName;
			Phone = phone;
			Document = document;
			Email = email;
		}

		virtual String^ ToString() override
		{
			return FullName;
		}
	};

	public ref class Booking
	{
	public:
		int Id;
		int GuestId;
		int RoomId;
		DateTime CheckIn;
		DateTime CheckOut;
		String^ Status;

		Booking(int id, int guestId, int roomId, DateTime checkIn, DateTime checkOut, String^ status)
		{
			Id = id;
			GuestId = guestId;
			RoomId = roomId;
			CheckIn = checkIn;
			CheckOut = checkOut;
			Status = status;
		}
	};

	public ref class ServiceItem
	{
	public:
		int Id;
		String^ Name;
		double Price;
		String^ Category;

		ServiceItem(int id, String^ name, double price, String^ category)
		{
			Id = id;
			Name = name;
			Price = price;
			Category = category;
		}
	};

	public ref class MaintenanceTask
	{
	public:
		int Id;
		int RoomId;
		String^ Executor;
		String^ Status;
		String^ Details;

		MaintenanceTask(int id, int roomId, String^ executor, String^ status, String^ details)
		{
			Id = id;
			RoomId = roomId;
			Executor = executor;
			Status = status;
			Details = details;
		}
	};
}
