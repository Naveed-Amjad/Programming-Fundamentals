/*
File Name: Lab09Task2.cpp
Written By: Naveed Amjad
Roll No: BITF19M541
Date: April 22, 2020
Description: program to draw pyramid of given height

*/

#include<iostream>
using namespace std;
void print_pyramid(int height);   // function prototype

int main()    // main function
{
	int height;    // variable declaration
	cout<<"Enter height: ";   // message to user to enter height
	cin>>height;   // to store value of height
	
	while(height>30 || height<1)   // if user enter height greater than 30 or less than 1
	{
		cout<<"Please Enter height in range of 1 to 30: ";   // message to enter height again
		cin>>height;   // to store height value
	}
	print_pyramid(height);   // call to pyramid_function
	return 0;
} 
void print_pyramid(int height)   // function definition
{
	
	int const border=10;         // constant value
	cout<<"\n";
	for(int i=1;i<=height;i++)   // loop initialization, condition and update
	{
		
		int spaces=border+height-i;  // to draw spaces in each line 
		
		for(int j=1; j<=spaces; j++) // loop initialization, condition and update
		  cout<< ' ';                // space
		  
		for(int j=1; j<=i*2; j++)    // loop initialization, condition and update
		  cout<<'*' ;                // to print *
	
	      cout<<'\n' ;               // new linw 
	}
	cout<<"\n";                      // new linw 
}
