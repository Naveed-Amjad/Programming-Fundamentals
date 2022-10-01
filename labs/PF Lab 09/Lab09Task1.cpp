/*
File Name: Lab09Task1.cpp
Written By: Naveed Amjad 
Roll No: BITF19M541
Date: April 21, 2020
Description: to print numbers from 60 to back till 48

*/

#include <iostream>
using namespace std;

void printNumbers( ); // function prototype

int main ( )		  // main function 
{
	cout <<" Starting " << endl;;	// to display starting messade
	
	printNumbers();	// call to printNumbers function 
	
	cout <<" Done" << endl;			// to display Done message 
	
}

void printNumbers( ) // function definition
{
	 for(int i = 60; i >= 48; i--)  // loop initialization, condition and update
	 {
	 	
	 	cout <<" "<< i <<" ";       // to display values of i
	 	
	 	
	 }
	
	cout <<endl;   // end of line 
	
}












