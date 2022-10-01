/*
File Name: HomeWorkTask8.cpp
Written By: Naveed Amjad
Roll No: BITF19M541
Date: 04, April 2020
Description: Input a 2-digit number and find absolute difference between its digits 

*/
#include <iostream>
using namespace std;
int main ()
{
	int number, difference;
	int First_digit, Second_digit;
	
	cout<<"Enter two digit number: "<<endl;
	cin >> number;
	First_digit = number/10;
	Second_digit = number%10;
	difference = Second_digit - First_digit;
	
	if(difference < 0)
	{
		difference = difference* -1;
	}
	cout<<"Difference between two digits = "<<difference<<endl;
		
	
	
	
	return 0;
}
