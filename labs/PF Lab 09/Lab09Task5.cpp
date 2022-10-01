/*
File Name: Lab09Task5.cpp
Written By: Naveed Amjad 
Roll No: BITF19M541
Date: April 21, 2020
Description: 

*/
#include <iostream>
#include <iomanip>
using namespace std;

void estimateCost(double price,int years, double inflation); // function prototype

int main ( )		// main function
{
	int cost, years;  // variable declaration 
	double inflation;
	
	cout <<"Enter the price of item: ";  // message to user to enter price of item
	cin >> cost;
	cout <<"Enter number of years: ";	 // message to user to enter years 
	cin >> years;
	cout <<"Enter rate of inflation in % : "; // to enter inflation rate
	cin >> inflation;
	inflation = inflation/100;   // conversion to decimal
	
	estimateCost(cost, years, inflation);  // call to estimateCost function
	
}

void estimateCost(double price, int years, double inflation)  // function definition 
{
	 double increased_price; // variable declaration
	 
	 for(int i=1; i <= years; i++) // loop initialization, condition and update
	 {
	 	increased_price = price + (increased_price*(inflation*years));  // calculation of increase in price 
	 
	 }
	
	cout << endl; 
	
	// to display price of item after number of years and amount of  increased price between these years
	 
	cout <<fixed<<setprecision(2)<<"The price of item after " << years <<" years = " << increased_price<< endl;
	cout <<"Increase in price in "<< years <<" years = " << increased_price - price << endl;
}





