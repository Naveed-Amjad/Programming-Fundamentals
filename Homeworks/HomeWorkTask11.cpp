/*
File Name: HomeWorkTask11.cpp
Written By: Naveed Amjad
Roll No: BITF19M541
Date: 04, April 2020
Description:  Input numbers till user inputs a zero, and, at the end, display the largest one 

*/
#include <iostream>
using namespace std;
int main ()
{
	// variable declaration
	int number;
	int Largest_number = 0;
	
	while( number != 0)
	{
		// message for input
		cout<<"Enter number: "<<endl;
		cin >> number;
		
		if(number > Largest_number)		
		{
			Largest_number = number;  // if number is greater than previous one than stor this number in greater value
		 
		}
		else
		{
			Largest_number = Largest_number; // if number is smaller than previous one than ignore this number
		}
		cout<<"Largest number is = "<<Largest_number<<endl;	// display of largest number
		
		
	}
	
	
	
	

	return 0;
}
