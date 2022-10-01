/*
file Name: Lab6Task1.cpp
Written By: Naveed Amjad
Roll No: BITF19M541
Date: 31/03/2020
Description: program to compare two numbers

*/

#include <iostream>
using namespace std;
int main ()
{
	// variable declaration
	int num1, num2;
	int greater, smaller;
	
	cout <<"Enter 1st number: ";  // message for input 1st number
	cin >> num1;                  // to store 1st number
	
	cout<<"Enter 2nd number: ";   // message for input 2nd number
	cin >> num2;
		
     greater = (num1 > num2) ? num1 : num2;   // if num1 is greater than print num1 else num2
     smaller = (num1 < num2) ? num1 : num2;   // if num1 is smaller than print num1 else num2
     
     // display of smaller and greater number in assending order 
     cout<<"Smaller number = " <<smaller << endl <<"Greater number = "<< greater;
    
	
	
	
	
	return 0;
}





















