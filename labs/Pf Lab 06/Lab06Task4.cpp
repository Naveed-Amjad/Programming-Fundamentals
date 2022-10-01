/*
file Name: Lab6Task4.cpp
Written By: Naveed Amjad
Roll No: BITF19M541
Date: 31/03/2020
Description: program to covert seconds into minutes,hours and days

*/

#include <iostream>
using namespace std;
int main ()
{
	int seconds, remaining_seconds;								// variable declaration
	int remainingSeconds1, minutes, Seconds, remainingSeconds;   
	int hours,days;												//
	
	cout <<"Enter number of seconds: ";							// message for user to input number of seconds
	cin >> seconds;											    // to store input seconds	
	
	if ( seconds >=60 && seconds < 3600)
	{
		minutes = seconds/60;									// calculation of minutes
		remaining_seconds = seconds%60; 						// calculation of remaining seconds
		
		cout <<seconds <<" seconds = " <<minutes <<" minutes and " <<remaining_seconds <<" seconds";	// output into minutes and seconds
	
	}
	else if( seconds >= 3600 && seconds < 86400)
	{
		hours = seconds/3600;									// calculation of hours
		 
		remaining_seconds = seconds%3600;						// calculation of remaining seconds after hours
		 
		minutes = remaining_seconds/60;							// calculation of minutes from remaining seconds
		
		Seconds = remaining_seconds%60;							// calculation of remaining seconds after minutes
		
		// output of input seconds into hours, minutes and seconds
		cout << seconds << " seconds = " << hours <<" hours " <<minutes<<" minutes and " <<Seconds<<" seconds";
	 
	}
	else if( seconds >= 86400)
	{
		days = seconds/86400;									// calculation of days from input seconds
		
		remaining_seconds = seconds%86400;                      // calculation of remaining seconds after days
		
		hours = remaining_seconds/3600;                         // calculation of hours from remaining seconds 
		
		remainingSeconds1 = remaining_seconds%3600;             // calculation of remaining seconds after hours
		
		minutes = remainingSeconds1/60;                        // calculation of minutes from remaining seconds after hours
		
		remainingSeconds = remainingSeconds1%60;			   // calculation of remaining seconds after minutes
		
		Seconds = remainingSeconds/60;						   // calculation of remaining seconds 
		
		// output of input seconds into days, hours, minutes and seconds
		cout << seconds <<" seconds = "<< days <<" days "<<hours<<" hours "<<minutes<<" minutes "<<remainingSeconds<<" seconds";
		
	}
	else if( seconds >0 && seconds <60)
	{
		cout<<seconds<< " = " <<seconds<<" seconds"; // if user put seconds less than 60 
		
	}
	
	
	
	
	return 0;
}
