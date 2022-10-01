/*
File Name: Lab13Task2.cpp
Written By: Naveed Amjad
Roll No: BITF19M541
Date: April 23, 2020
Description: Program to double the size of array
	  
*/

#include<iostream>
using namespace std;

void showData(int*ptr, int size);  
int *createArray(int array[],int length) // function definition
{
	int size=length*2;  // variable 
	
	int array2[size];  // array initialization
	
	 for(int i=0;i<size;i++) // loop initialization, condition and update
	 {
	 	array2[i]=array[i];  // to store elemnts in array2
	 }
	 for(int i=length; i<size; i++) // loop initialization, condition and update
	 {
	 	array2[i]=0;  // store zero uptill length
	 	
	 }
	 
	 showData(array2,size); // call to showdata function
}
void showData(int*ptr, int size) function definition
{
	
    cout<<"After doubling the size of array: "; // to display

	for(int i=0; i<size;i++) // loop initialization, condition and update
	{
		 cout <<ptr[i]<<" "; // to display	
	
	}
}
int main() // main function
 {
	int size; // variable
	
	cout <<"Enter the size of array: "; // message to user
	cin >> size; // to store values
	
	int array[size]; // array initialization
	
	 for(int i=0;i<size;i++) // loop initialization, condition and update
	 {
	 	cout <<"Enter "<<i+1<<" element: "; // message to user
	 	cin >>array[i]; // to store values
	 	
	 }
	  createArray(array,size);  // call to createArray function
	
}




