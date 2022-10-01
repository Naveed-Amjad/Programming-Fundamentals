/*
File Name: HomeWorkTask3.cpp
Written By: Naveed Amjad
Roll No: BITF19M541
Date: 03, April 2020
Description: calculate factorial of positive integer enter by user

*/

#include <iostream>
using namespace std;
int main ()
{
	// variable declaration & initialization 
	int number;
	int factorial=1, i=1;
	
	// user input 
	cout<<"Enter number: "<<endl;
	cin >> number;
	
   while(i <=number)	// condition
    {
					
		factorial *= i;	// calculation of factorial
		i++;			// step size 
		
	}
	
	cout<<"Factorial of " <<number<<" = "<<factorial;
	
	return 0;   
	
 }
	
	
	
	
