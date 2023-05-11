// IT21350214 F. A. M. Nusik 
// MLB_07.02_11
// class Report
//#include"Ticket.h"
//#define SIZE 20
using namespace std;

class Report 
{
  private:
    string reportID;
    string issueDate;
  //  Ticket *ticket[SIZE]; // bi-directional relationship

  public:
    Report() {}
// Default Constructor
    void bookingDetailsReport();
    void ticketDetailsReport();
    void paymentDetailsReport();
    ~Report() {}
// Destructor
};