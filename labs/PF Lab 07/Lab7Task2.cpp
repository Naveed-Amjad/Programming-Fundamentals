/*
File Name: Lab7Task2.cpp
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
	int value, smallest;
	int number;
	
        // message to user 	
	    cout<<"Enter a value:  ";
	    cin>>number;
	     
	     // to store value of input number
	     smallest = number;
	     
	for( ; number != -99; ) // loop will terminate when user will inter -99
	{
		if( number < smallest) // if entered number is less than previously stored number
	     {
	         smallest= number; // new number will be stored and previous one will be removed
         }
		cout<<"Enter a value:  "; // message to intput again and again
	    cin>>number;
	   
		
		 
	}
	    //  to display smallest number
	    cout<<endl<<"Smallest number is: "<<smallest<<endl;
	
	
	
	
	return 0;
}
