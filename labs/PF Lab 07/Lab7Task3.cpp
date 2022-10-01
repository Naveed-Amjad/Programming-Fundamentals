/*
File Name: Lab7Task3.cpp
Written By: Naveed Amjad
Roll No: BITF19M541
Date: 7 April, 2020
Description: 

*/
#include <iostream>
#include <iomanip>
using namespace std;
int main ( )
{
	// variable initialization and declaration
	int slimit;
	int elimit;
	double count_numbers, sum;
	double average;
    count_numbers=0, sum=0;
	
	// message to user 
	cout<<"Enter starting limit: ";
	cin>>slimit;
	
	// message to user
	cout<<"Enter ending limit: ";
	cin>>elimit;
	
	// loop conditions
	for(slimit; slimit <=elimit; slimit++)
	{
		// if slimit is divisible at 2 or 3 or 5
		if( slimit%2==0 || slimit%3==0 || slimit%5==0)
		{
			count_numbers += 1; // number of divisible numbers 
			sum += slimit; // increment of divide numbers in sum
		}
		
	}
	// calculation of average
	average = sum / count_numbers;
	// display value of average
	cout<<fixed<<setprecision(2)<<"The average = "<<average<<endl;
	
	
	return 0;
}
