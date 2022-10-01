/*
File Name: Lab10Task2.cpp
Written By: Naveed Amjad
Roll No: BITF19M541
Date: April 28, 2020
Description: Programm to find month in year having highest rainfall

*/

#include <iostream>
using namespace std;

int main ( )
{
	const int month = 12; // array size
	double rain[month];   // array initialization
	int month_No;
	cout <<"Enter rainfall for month 1: ";  // message to user
	cin >> rain[0];  // to store rail fall for index 0
	
	double highest = rain[0]; // variable declaration for containing highest value
	
	for(int count=1; count < month; count++) // loop initialization, condition and update
	{
		cout <<"Enter rainfall for month " << (count + 1) <<": "; // message to user to enter rainfall for month no.
		cin >> rain[count]; // to store rainfall values
		
		if(rain[count] > highest)  // condition
		{
			highest = rain[count];   // highest vale
		    month_No = (count + 1); // increment in month no.
		}
	}
	
	cout << endl;
	cout <<"Month No. " << month_No << " has highest rainfall of value " << highest << " in year." << endl;

}

