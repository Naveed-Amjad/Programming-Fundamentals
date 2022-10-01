/*
File Name: Lab7Task5.cpp
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
	int length, number, i=1;
	int remainder, qoutient, reverse;
	  // message for user
	  cout<<"  Enter length of number: ";
	  cin>>length;
	  // message for user
	  cout<<"  Enter number: ";
	  cin>>number;
	   // conditions
	for( i = 1; i <= length ; i++)
	{
		remainder = number % 10; // to find remainder
	    qoutient = number/10;    // to find qoutient
		cout <<"  " <<remainder; // to display value of remainder 
		                         // first of all it display value of 1st remainder then 2nd and so on 
	    number = qoutient;       // it will store the value of qoutient and then number will repeat the procedure again 
	                             // and store the next qoutient 
		
	}
	
	
	
	
	return 0;
}
