/*
File Name: HomeWorkTask10.cpp
Written By: Naveed Amjad
Roll No: BITF19M541
Date: 04, April 2020
Description:  Input numbers till user inputs a zero, and, at the end, display last non-zero number 

*/
#include <iostream>
using namespace std;
int main ( )
{
	// variable declaration
	int number;
	int Last_number = 0;
	// message for input
	cout<<"Enter number: "<<endl; 
	cin >> number;
	
	while (number !=0)
    {

		Last_number = number; // to store last number
		// message for input 
		cout<<"Enter number: "<<endl;
		cin >>number;
		
	}
	 cout<<"Last non-zero number is = "<<Last_number<<endl;
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
