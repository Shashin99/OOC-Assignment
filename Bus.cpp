// IT21355646 Bentotage S. N 
// MLB_07.02_11 
#include<iostream>
#include"Bus.h"
using namespace std;

Bus::Bus()// Default Constructor
{
            
}

void Bus::setBusDetails(char pBusID, char pBusNo, string pBusRoute)
{
    const char busID = pBusID;
    const char busNo = pBusNo;
    busRoute = pBusRoute;
}

void Bus::setDriverDetails(string pdriverName)
{
    driverName = pdriverName;
}

void Bus::displayBusDetails()
{
            
}

Bus::~Bus()//Destructor     
{

}
