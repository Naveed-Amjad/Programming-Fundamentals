/*
File Name: HomeWorkTask1.cpp
Written By: Naveed Amjad
Roll No: BITF19M541
Date: 03, April 2020
Description: Sum of 10 numbers taken from user

*/

#include <iostream>
using namespace std;
int main ()
{
	// variable declaration
	double number, sum=0;
	int i=1;
	
	// repetition structure
	 
	while(i<=10)
	{
	  
	  cout<<"Enter number: "<<endl;		// user input 	
	  cin >>number;						// to store number
	  sum = sum + number;				// calculation of sum 
	   
	  i++;  							// increment step

	}
	
	cout<<"Sum = "<<sum<<endl;			// to display value of sum
	cout<<"   Out of loop";				// end of loop
	
	
	return 0;
}














