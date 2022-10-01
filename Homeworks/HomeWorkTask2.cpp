/*
File Name: HomeWorkTask2.cpp
Written By: Naveed Amjad
Roll No: BITF19M541
Date: 03, April 2020
Description: Sum of n numbers taken from user  

*/

#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
	// variable declaration and initialization
	double number,sum=0;
	
	
	while(true)							// condition will always be true, infinite loop
	{
		cout<<"Enter number: "<< endl; 	// message for input
		
		cin>> number;					// to store value of number
		
		sum = sum + number;				// calculation of sum
		 
		cout<<fixed<<setprecision(2)<<"Sum = " <<sum<< endl;    // display of sum value and control of digits after decimal point
		
	}

	    
	
    return 0;	
 }
