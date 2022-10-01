/*
File Name: HomeWorkTask7.cpp
Written By: Naveed Amjad
Roll No: BITF19M541
Date: 04, April 2020
Description: sum of variables untill user input sentinel value -999  

*/
#include <iostream>
using namespace std;
int main ()
{
	// variable declaration
	int number, sum = 0;
	// message for input
	cout<<"Enter number: "<<endl;
	cin >> number;
	
	while(number != -999)			// condition
	{
		sum = sum + number;			// calculation of sum

		cout<<"Enter number: "<<endl;
		cin>> number;
		
	}
	 cout<<"Sum "<<" = "<<sum<<endl;	// display value of sum
	 
	 cout<<"Out of loop"<<endl;	// loop ended message
	
	

	return 0;
}
