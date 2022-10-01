/*
FileName: Lab5Task2.cpp
written By: Naveed Amjad
Roll No: BITF19M541
Date: 24/03/2020
Description: To calculate average tempreture of three months
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
	// variable declaration
	string monthName1, monthName2, monthName3;
    double month1, 
	       month2,
	       month3;


	// Ask user to enter name of month	
	cout <<"Enter name of 1st month: "<<endl; 
	
	// store name of 1st month
	cin >> monthName1;
	
	// Ask user to enter temperature of 1st month
	cout <<"Enter temperature of 1st month: " <<endl;
	
	// `to store name of 1st month
	cin >> month1;
	
	// Ask user to enter name of 2nd month
	cout <<"Enter name of 2nd month: "<<endl;
	
		// to store name of 2nd month
		cin >> monthName2;
		
	// Ask user to enter temperature of 2nd month		
	cout <<"Enter temperature of 2nd month: " <<endl;
		
		// to store temperature of 2nd month
		cin >> month2;
	
	// Ask user to enter name of 3rd month
	cout <<"Enter name of 3rd month: "<<endl;
	
	// to store name of 3rd month
	cin >> monthName3;
	
	// Ask user to enter temperature of 3rd month
	cout <<"Enter temperature of 3rd month: " <<endl;
		
		// to store temperature of 3rd month
		cin >> month3;
		
	cout << setprecision (2) << fixed;
	
	// variable declaration
	double avg;
	
		// to calculate average
	      avg = (month1+month2+month3)/3.0;
	
	cout <<endl;
	
	cout <<"The average tempreture for " <<monthName1<<","<< " " << monthName2<<" and " << monthName3 <<" is " <<avg <<" Celsius." <<endl;
	
	
	
	

	return 0;
	
}
