/*
File Name: Lab5Task4.cpp
written By: Naveed Amjad
Roll No: BITF19M541
Date: 24 March,2020
Description: to conver fahrenheit temprerature into celsius temperature
*/

#include <iostream>
using namespace std;
int main ()
{
	// variable decaration 
	double fah_temperature;
    double conversion;
    // Ask user to enter value
	cout <<"Enter temperature in fahrenheit: " <<endl;
	
	// store value
	cin >> fah_temperature;
	
	
	// calculation
	conversion = 5.0/9 * (fah_temperature-32); 
	
	 
	// final output display
	cout <<"Temperature in Celsius = " << conversion;
	
	 
	
	return 0;
}
