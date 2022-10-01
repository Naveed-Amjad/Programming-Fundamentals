/*
File Name: Lab12Task2.cpp
Written By: Naveed Amjad
Roll No: BITF19M541
Date: May 15, 2020
Description: Program to subtract values  

*/

#include <iostream>
using namespace std;

// function definition 
void SubtractionByPointer(double *number1, double *number2, double *result)
{
	// calculation of subtraction
	*result = *number1 - *number2;
	
	// to display value of subtraction
	cout <<"The result of subtraction is " << *result << endl;
}

int main ( )  // main function
{
	double number1, number2, result;  // variable declaration
	
	cout <<"Enter 1st number: ";	  // message to user
	cin >> number1;					  // to store value of number1
	cout <<"Enter 2nd number: ";	  // message to user
	cin >> number2;					  // to store value of number2
	
	// call to SubtractionByPointer function
	SubtractionByPointer(&number1, &number2, &result);

}
