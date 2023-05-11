// IT21355196 K.L.Shashin Kalpajith
// MLB_07.02_11
#include<iostream>
#include"GuestUser.h"
using namespace std; 

GuestUser::GuestUser()//Default Constructor
{
  
}

void GuestUser::setUserDetails(string pUserID, string pUserFullName, string pUserAddress,string pUserType, string pUserEmail, string pUserContactNo)
{
    userID = pUserID;
    userFullName = pUserFullName;
    userType = pUserType;
    userAddress = pUserAddress;
    userEmail = pUserEmail;
    userContactNo = pUserContactNo;
}

void GuestUser::displayUserDetails()
{

}

void GuestUser::checkBusSchedule()
{
    
}

GuestUser::~GuestUser()//Destructor
{

}
