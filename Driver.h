// IT21355646 Bentotage S. N.
// MLB 07.02_11
// class Driver
#include<iostream>
#include<cstring>
#include"Bus.h"
#include"BusSchedule.h"
#define SIZE 100

using namespace std;

class Driver
{
  private:
    string driverID;
    string driverUserName;
    //Bus *buses[SIZE];
    //BusSchedule *busschedules[SIZE]; 
        
  public:
    Driver();
    void setDriver(string pDriver, string pDriverUserName);
    void displayDriverDetails();
    void displayBusScheduling();
    void busCheckBusRoutes();
    ~Driver();
    
};


