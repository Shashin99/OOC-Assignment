// IT21355196 K.L.Shashin Kalpajith
// MLB_07.02_11
// RegistetredUser class
#include<iostream>
#include<cstring>
#include"GuestUser.h"
#include"Ticket.h"
#include"Payment.h"
#include"Booking.h"
#include"Feedback.h"
#define SIZE 30
using namespace std;

class RegisteredUser : public GuestUser //Inheritance Relationship
{
  protected:
    string userName;
    string userPassword;
    Ticket *tickets[SIZE]; //Composition Relationship 
    Payment *payments[SIZE]; //Composition Relationship
    Booking *bookings[SIZE]; //Composition Relationship
    Feedback *feedbacks[SIZE]; //Aggregation Relationship
  
  public:
    RegisteredUser();
    void login();
    void setDetails(string pUserName, string pUserPassword);
    void displayDetails();
    void addBooking();
    void makePayment();
    void addFeedback(Feedback *pFeedback);
    void logout();
    ~RegisteredUser();
}; 