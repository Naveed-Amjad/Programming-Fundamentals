/*
File Name: HomeWorkTask9.cpp
Written By: Naveed Amjad
Roll No: BITF19M541
Date: 04, April 2020
Description: Input a digit upto 4 digits and number display its reverse  

*/
#include <iostream>
using namespace std;
int main ()
{
	// variabble declaration 
	int number, reverseNumber=0;
	int remainder;    
	
	// message for input
	cout<<"Enter a digit (upto 4-digits) number: "<<endl;
	cin >> number;
	
	while (number != 0)
	{
		// to find remainder
		remainder = number % 10;
		// to find reverse number 
		reverseNumber = reverseNumber * 10 +remainder;
		// step to divide number by 10
		number /= 10;
		
	}
	
	 cout<<"Reverse is = "<<reverseNumber<<endl;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
