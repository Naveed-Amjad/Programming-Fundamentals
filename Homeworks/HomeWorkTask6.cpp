/*
File Name: HomeWorkTask6.cpp
Written By: Naveed Amjad
Roll No: BITF19M541
Date: 04, April 2020
Description:  Display an error message if user inputs negative number or 0

*/
#include <iostream>
using namespace std;
int main ()
{
	// variable declaration
	int number;
	
	// user input
	cout<<"Enter number: "<<endl;
	cin>> number;
	
	while(number<=0)	// condition
	{
		// message to display
		cout<<"Error! Please input again"<<endl;
		
		cin >> number;
    }
	     cout<<"End of loop"<<endl;	// loop ended
	
	
	

	return 0;
}	
