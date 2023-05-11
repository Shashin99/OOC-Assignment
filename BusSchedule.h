//IT21359460 W.A. Ishini Kaweesha Gunarathna
//class BusSchedule
#include<iostream>
#include"Bus.h"
//#include"Booking.h"
#include<cstring>

using namespace std;

class BusSchedule {
	private:
		string scheduleID;
		//string route;
		string date;
		double fare;
    Bus* bBus;
		
	public:
		BusSchedule();// Default Constructor
		void setBusSchedule ( string pScheduleID, string pRoute, string pDate, double pFare, Bus* bBus );
		void displayBusSchedule();
		string route;
	~BusSchedule();
		
};
