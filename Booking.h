// IT21352812 P.M.C. Hiruni Pathiraja
// MLB_07.02_11 
// class Booking
#include<iostream>
#include"BusSchedule.h"
using namespace std;

class Booking {
	private:
		string bookingID;
		int seatNo[30];
		string bookingDate;
		string departureTime;
		string arrivalTime;
		double bookingAmount;
		
	public:
		Booking () {}          // Default Constructor
		void getBookingDetails (string pBookingID, int pSeatNo[], string pBookingDate, string pDepartureTime, string pArrivalTime);
		double calcBookingprice (BusSchedule pRoute);
		void displayBooking ();
		~Booking () {}         // Destructor
};
