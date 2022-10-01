/*
File Name: HomeWorkTask5.cpp
Written By: Naveed Amjad
Roll No: BITF19M541
Date: 03, April 2020
Description: Take 3 numbers from user and determine the largest one 

*/
#include <iostream>
using namespace std;
int main ()
{
	int number, i=1;
	int greater=0; 
	
	while (i<=3)
	{
		cout<<"Enter number: "<<endl;
		cin>>number;
	    	
	    if ( number > greater)
		{
			greater = number;
		}
		i++;
	}
	
	cout<<"Greatest number is = "<<greater;
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
