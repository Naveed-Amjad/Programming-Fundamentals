/*
File Name: Lab09Task7.cpp
Written By: Naveed Amjad 
Roll No: BITF19M541
Date: April 21, 2020
Description: program to display fibinacci series 

*/
#include <iostream>
using namespace std;

void fibonacci_series(int number); // function prototype

int main( )  // main function
{
	int number; // variable declaration
	
	cout <<"Enter number: ";  // message to user
	cin >> number;   // to store value of number
	
	fibonacci_series(number);  // call to fibonacci_series function
}

void fibonacci_series(int number) // function definition
{
	int first_term = 0, second_term = 1, next_term; // variable declaration and initialization 
    
    if(number < 0) // condition if number is negative the execution will terminate 
    return;
    
    cout <<"\t"<< first_term <<"\t"<< second_term; // to display first and second term 
    
    
    for(int i=3 ; i <= number ; i++)  // loop initialization, condition and update 
    {
    	
    	next_term = first_term + second_term; // next term will comes after adition of last two terms
    	
    	cout <<"\t"<< next_term;              // to display next term, after first and second term 
    	
    	first_term = second_term;             // second term will overlap first term
    	
    	second_term = next_term;              // next term will overlap second term 
    	
	}
    
    
    
    
}










