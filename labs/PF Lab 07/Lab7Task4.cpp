/*
File Name: Lab7Task4.cpp
Written By: Naveed Amjad
Roll No: BITF19M541
Date: 7 April, 2020
Description: 

*/
#include <iostream>
using namespace std;
int main ( )
{
	// variable declaration
	int number, divisor, remainder;
	
	// message to user
	cout<<"Enter number: ";
	cin>>number;
	// message to user
	cout<<"Enter divisor: ";
	cin>>divisor;
	
	// conditions, loop will execute until number becomes less than divisor
	for( number; number >=divisor; number = number - divisor)
	{
		// remainder
		remainder = number;
		
	}
	// remainder display
	cout<<"Remainder = " << number;
	
	
	
}
