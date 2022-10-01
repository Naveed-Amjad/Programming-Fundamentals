/*
File Name: Lab10Task3.cpp
Written By: Naveed Amjad
Roll No: BITF19M541
Date: April 28, 2020
Description: Programm to enter 10 values in an array and add pairs of elements together in separate array  

*/

#include <iostream>
using namespace std;

int main ()
{
	const int number = 10; // size of array
	int element[number];   // array initialization
	
	for(int count=0; count < number; count++)  // loop initialization, condition and update
	{
		cout <<"Enter an integer value for element " << (count+1) << ": "; // message to user
		cin >> element[count];  // to store values  
		
	}
	
	const int size=5;    // array size 
	// array for addition of pairs
	int AddPairs[size] = { element[0]+element[1],
	                  element[2]+element[3],
					  element[4]+element[5],
	                  element[6]+element[7],
				 	  element[8]+element[9] };
	 
	 for(int count=0; count < size; count++) // loop initialization, condition and update
	 {
	     cout <<"\t" << AddPairs[count] <<"\t"; // to display addition of pairs	
	 }           
	
	
	
}
