// IT21355196 K.L.Shashin Kalpajith
// MLB_07.02_11
// GuestUser class
#include<iostream>
#include<cstring>
using namespace std;
class GuestUser
{
  protected:
    string userID;
    string userFullName;
    string userType;
    string userAddress;
    string userEmail;
    string userContactNo;

  public:
    GuestUser();
    void setUserDetails (string pUserID, string pUserFullName,string puserType, string pUserAddress, string pUserEmail, string pUserContactNo);
    void displayUserDetails();
    void checkBusSchedule();
    ~GuestUser();
};