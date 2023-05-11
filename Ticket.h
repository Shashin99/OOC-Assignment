// IT21350214 F.A. M. Nuski  
// MLB_07.02_11
// Ticket Class  
#include<iostream>
#include<cstring>
#include"Payment.h"
#include"Booking.h"
#define SIZE 20
using namespace std;
class Ticket{
  private:
  
    string ticketID;
    int routeNo;
    string route;
    double ticketPrice;
    Payment *payments[SIZE]; // composition relationship
    Booking *bookings[SIZE]; // composition relationship
    
  public:
    Ticket();
    void setTicketDetails(string pTicketID, int pRouteNo, string pRoute, double pTicketPrice);
    void displayTicketDetails();
    
    ~Ticket();
};