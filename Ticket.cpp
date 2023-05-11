// IT21350214 F.A. M. Nuski  
// MLB_07.02_11
 
#include<iostream>
#include<cstring>
#include"Ticket.h"
using namespace std;

 Ticket::Ticket() //Default Constructor
 {
     
 }
 
 void Ticket::setTicketDetails(string pTicketID, int pRouteNo, string pRoute, double pTicketPrice)
 {
     ticketID = pTicketID;
     routeNo = pRouteNo;
     route = pRoute;
     ticketPrice = pTicketPrice;
 }
 
 void Ticket::displayTicketDetails()
 {
     
 }
 
 Ticket::~Ticket()  //Destructor
 {
     
 }