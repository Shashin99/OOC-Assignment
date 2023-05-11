// IT21352812 P.M.C. Hiruni Pathiraja
// MLB_07.02_11
// class Payment
#include<iostream>
using namespace std;

class Payment{
	private:
		string paymentID;
		string paymentType;
		string cardholderName;
		string cardNo;
		double paymentAmount;
	
	public:
		Payment() {}     // Default Constructor
		void setPaymentDetails(string pPaymentID, string pPaymentType, string pCardholderName, string pCardNo, double pPaymentAmount);
		void displayPaymentDetails();
		~Payment() {}     // Destructor
};