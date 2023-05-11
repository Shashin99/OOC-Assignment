// IT21352812 P.M.C. Hiruni Pathiraja
// MLB_07.02_11 
#include<iostream>
#include"Booking.h"
//#include"BusSchedule.h"
using namespace std;
Booking::Booking()
{
  
}
void Booking::getBookingDetails(string pBookingID, int pSeatNo[], string pBookingDate, string pDepartureTime, string pArrivalTime)
{
  int i;
	bookingID = pBookingID;
	seatNo[30] = pSeatNo[i];
	bookingDate = pBookingDate;
	arrivalTime = pArrivalTime;
	departureTime = pDepartureTime;
}
double Booking::calcBookingprice (BusSchedule pRoute)
{
	double price = 0;
	int size = *(&seatNo + 1) - seatNo;//calculating number of seats
	
	//price of one seat in relevent route
	if (pRoute.route == "Matara-Kaduwela"){
		price = 990.0;
	}
	else if (pRoute.route == "Colombo-Matara"){
		price = 1020.0;
	}
	else if (pRoute.route == "Kadawatha-Galle"){
		price = 840.0;
	}
	else if (pRoute.route == "Colombo-Deniyaya"){
		price = 1290.0;
	}
	else if (pRoute.route == "Panadura-Matara"){
		price = 890.0;
	}
	else {
		return 0.0;
	}
	bookingAmount = price*size;
	return bookingAmount;
}
void Booking::displayBooking ()
{

}
Booking::~Booking()//Destructor
{
	
}