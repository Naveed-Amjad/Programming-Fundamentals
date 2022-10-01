/*
File Name: HomeWorkTask13.cpp
Written By: Naveed Amjad
Roll No: BITF19M541
Date: 04, April 2020
Description:   Input 10 numbers, and display smallest number  

*/
#include <iostream>
using namespace std;
int main ()
{
	int number, i=1;
	int smallernumber;
	
	while(i<=10)
	{
		cout<<"Enter number: "<<endl;
		cin>>number;
		if(number < smallernumber)
		{
			smallernumber = number;
		}
		else
		{
			smallernumber = smallernumber;
		}
		
	    cout<<"Smaller number is = "<<smallernumber<<endl;	
		 
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
