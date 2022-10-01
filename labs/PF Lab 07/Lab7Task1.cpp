/*
File Name: Lab7Task1.cpp
Written By: Naveed Amjad
Roll No: BITF19M541
Date: 7 April, 2020
Description: 

*/
#include <iostream>
using namespace std;
int main ( )
{
	// variable declaration and initialization
	const double Calories = 3.9; 
	 int minutes, number;
	 
	  // message to user
	  cout<<"Enter number of mints: "<<endl;
	  cin>>number;
	 
	  // header headings
	  cout<<endl<<"    Minutes \t\t Calories Burnt "<<endl;
	 
	 // conditions 
	 for( minutes=1; minutes<=number; minutes++)
	{
		// calories burnt calculation and display
		
		cout<<"      "<<minutes<<"\t\t   |    \t"<<minutes*Calories<<endl;
	    
		
		
	}
	
	

	return 0;
}
