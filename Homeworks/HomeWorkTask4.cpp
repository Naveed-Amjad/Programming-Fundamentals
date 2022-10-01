/*
File Name: HomeWorkTask4.cpp
Written By: Naveed Amjad
Roll No: BITF19M541
Date: 03, April 2020
Description: Take two positive integers a and n from the user. Calculate and display an.
             Assume that the power operator is not available. 

*/

#include <iostream>
using namespace std;
int main ()
{
 	int number,exponent;
	int power=1, i=1;
	cout<<"Enter a base number: "<<endl;
	cin >>number;
	cout<<"Enter an exponent: "<<endl;
	cin >>exponent;
	while(i <= exponent)
    {
    	
    	power = power * number;
    	i++; 
	}	
	  cout<<"ANSWER = "<<power;
	
	
	
	
	return 0;
}
