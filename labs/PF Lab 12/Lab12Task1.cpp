/*
File Name: Lab12Task1.cpp
Written By: Naveed Amjad
Roll No: BITF19M541
Date: May 15, 2020
Description: Program to display values using pointers

*/

#include <iostream>
using namespace std;

int main ( )
{
	float f = 2.5;  // variable declaration and initialization
	float t = 8.9;  // variable declaration and initializing
	
   float *ptrF;  // pointer variable declaration
   ptrF = &f;    // variable initializing
   float *ptrT;  // pointer variable declaration
   ptrT = &t;    // variable initializing
	
	cout <<"The address of f is " << ptrF << endl; // to displa address of f
	cout <<"The value of f is " << *ptrF << endl;  // to disply value of f
	cout << endl; 
    cout <<"The address of ptrF " << &ptrF << endl; // to display address of ptrF 	
	cout <<"The value of ptrF " << *ptrF << endl;    // to display value of ptrF 	
	cout <<"The value of memory location of ptrF is " << *ptrF << endl; // memory location value
	cout << endl;
	
	cout <<"The address of t is " << ptrT << endl; // to displa address of t
	cout <<"The value of t is " << *ptrT << endl;   // to disply value of t
	cout << endl;
	
	cout <<"The address of ptrT " << &ptrT << endl; // to display address of ptrT  	
	cout <<"The value of ptrT " << *ptrT << endl;    // to display value of ptrT
	cout <<"The value of memory location of ptrT is " << *ptrT << endl; // memory location value
	
	
}








