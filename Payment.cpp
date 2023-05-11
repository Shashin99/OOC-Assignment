// IT21352812 P.M.C. Hiruni Pathiraja
// MLB_07.02_11
#include <iostream>
#include "Payment.h"
#include "Booking.h"
using namespace std;

Payment::Payment()//Default Constructor
{
	
}
void Payment::setPaymentDetails(string pPaymentID, string pPaymentType, string pCardholderName, string pCardNo, double pPaymentAmount){
	pPaymentID = paymentID;
	pPaymentType = paymentType;
	pCardholderName = cardholderName;
	pCardNo = cardNo;
	pPaymentAmount = paymentAmount;
	
}
void Payment::displayPaymentDetails(){
	
}
Payment::~Payment()//Destructor
{
	
}