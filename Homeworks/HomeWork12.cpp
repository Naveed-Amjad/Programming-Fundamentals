/*
File Name: HomeWorkTask12.cpp
Written By: Naveed Amjad
Roll No: BITF19M541
Date: 04, April 2020
Description:  Input numbers till user inputs a zero, and display the smallest number ? Check if it works for all +ve inputs ? 
                

*/
#include <iostream>
using namespace std;
int main ()
{
	int number;
	int smallest_number;
	
		cout<<"Enter number: "<<endl;
		cin >>number;
	
	while (number != 0)
	{
	
		if(number < smallest_number)
		{
			smallest_number = number;
		 
		}
	        cout<<"Enter number: "<<endl;
		    cin >>number;
		
	   	
	}
		cout<<"Smallest number = "<<smallest_number<<endl; 
		
	    
	
	return 0;
}
