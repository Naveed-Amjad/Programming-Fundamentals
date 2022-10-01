/*
File Name: Lab09Task4.cpp
Written By: Naveed Amjad 
Roll No: BITF19M541
Date: April 22, 2020
Description:  program that accepts money as input and convert it into Thousands, Hundreds, Fifties, Tens and Fives

*/
#include <iostream>
using namespace std;

void modules( int money ); // function prototype

int main (  )		// main function
{
	int money;     // variable declaration
	
	cout <<"Enter amount of money: ";    // message to user to enter amount 
	cin >> money;    // to store value 
	
	modules(money);    // call to modules function 
	
}

void modules( int money)   // function definition 
{
	int thousands, hundreds, fifties,tens, fives,ones, remaining_amount;  // variable declaration
	int remaining_amount2, remaining_amount3, remaining_amount4;          // variable declaration
	
	thousands = money/1000;						 // conversion into thousands
	remaining_amount = money % 1000;			 // remaining amount after thousands
	hundreds = remaining_amount / 100;		     // to find hundreds 
    remaining_amount2 = remaining_amount % 100;  // remaining amount after hundreds
    fifties = remaining_amount2 / 50;            // to find fifties
    remaining_amount3 = remaining_amount2 % 50;  // remaining amount after fifties
    tens = remaining_amount3 / 10;               // to find tens
	remaining_amount4 = remaining_amount3 % 10;  // remaining amount after tens
	fives = remaining_amount4 / 5;               // to find fives
	ones = remaining_amount4 % 5;                // to find ones 
	
	// to display number of thousands, hundreds, fifties, tens, fives and ones
	cout <<"The amount " << money <<" contains " << thousands <<" thousands " << hundreds <<" hundreds ";
	cout << fifties <<" fifties " << tens <<" tens " << fives <<" fives " << ones <<" ones " << endl;
	
}

	















