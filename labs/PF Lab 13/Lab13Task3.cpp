/*
File Name: Lab13Task3.cpp
Written By: Naveed Amjad
Roll No: BITF19M541
Date: 23 April 2020
Description: Program to reverse the array
	  
*/

#include<iostream>
using namespace std;

int *CreateArray(int array[], int size)  // function definition
{
	int *array2; // array name
	
	array2 = new int[size]; // dynamic memory allocation
	
	int j = size; // variable declaration
	
  for(int i=0; i<size; i++)  // loop initialization, condition and update
	 {
	 	j--; // decrement 
	 	
	 	array2[j] = array[i];  // to hold reverse array elements  
	 	
	 }
	 
	return array2; // return array2 
}

void showData(int*ptr, int size) // function definition
{
	for(int i=0; i<size;i++)  // loop initialization, condition and update
	{
		 cout << ptr[i] <<" ";	
	}
}

int main()  // main function
{
	int size;   // variable declaration
	
	cout <<"Enter the size of array: "; // message to user
	cin >> size;   // to store values of array
	
	int array[size];  // array initialization
	
   for(int i=0; i<size; i++)   // loop initialization, condition and update
	 {
	 	cout <<"Enter " <<i+1<< " element: "; // message to user
	 	cin >> array[i]; // to store values 
	 }
	 
      cout << endl;
	  	 
	  cout <<" Original array is ====> ";   // elements of original array
	  showData(array,size);  // call to showData fumction
	  
	  cout << endl; 
	  
	  cout <<" Reverse array is ====> ";  // elements of reverse array
	  
	  showData(CreateArray(array,size), size);  // call to showData and CreateArray function
	  
	  cout << endl; 
}
