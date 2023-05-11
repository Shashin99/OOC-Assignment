// IT21355646 - Bentotage S.N.
// class Bus
#include<iostream>
#include<cstring>

using namespace std;

class Bus
{
    private:
        char busID();
        char busNo();
        string driverName;
        string busRoute;
    public:
        Bus();
        void setBusDetails(char pBusID, char pBusNo, string pBusRoute);
        void setDriverDetails(string pdriverName);
        void displayBusDetails();
        ~Bus();
};    
