/*
File Name: Lab10Task1.cpp
Written By: Naveed Amjad
Roll No: BITF19M541
Date: April 28, 2020
Description: Programm to calculate and display sum of 10 quizes of student usin array

*/

#include <iostream>
using namespace std;

int main ( )
{
	const int Quizes = 10;  // size of array
	int marks[Quizes];      // array initialization
	int total=0;            // variable initialization to contain total of marks
	
	for(int count=0; count < Quizes; count++) // loop initialization, condition and update
	{
	   cout <<"Enter marks of Quiz " << (count + 1) <<": " ; // message to user to enter marks of quiz number
	   cin >> marks[count];  // to store values of quizes
	   
	   total += marks[count];	// contains total 
	}
	
	cout <<"Total marks of student in 10 Quizes = " << total << endl; // to display totla marks of all quizes
		
}

