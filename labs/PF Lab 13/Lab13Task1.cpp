/*
File Name: Lab13Task1.cpp
Written By: Naveed Amjad
Roll No: BITF19M541
Date: 23 April 2020
Description: Program to display array without largest number
	  
*/

#include<iostream>
using namespace std;

void showData(int*ptr, int size);  // function prototype
void dropLarge(int *array,int size);

int *makeArray(int length)  // function definition 
{
	int *array;  // array definition 
	
	array = new int[length]; // dynamic memory allocation
	
	 for(int i=0;i<length;i++)  // loop initialization, condition and update
	  {
	  	cout<<"Enter "<<i+1<<" element: "; // message to user
	  	cin >> array[i];  // to store values 
	  }
	return array; // return array 
}
void dropLarge(int *array,int size) // function definition 
{
	int max=-100;  // variable declaration and initialization
	
	 for(int i=0; i < size; i++) // loop initialization, condition and update
	  {
	  	if(max < array[i])  // condition
	  	 {
	  	 	max = array[i]; // to store maximum
		}   
	  }
	    
    	int *array2; // array name 
    	
	   array2 = new int[size];  // dynamic memory allocation
	   
	   for(int i = 0; i< size; i++) // loop initialization, condition and update
	    {
		if(array[i]!=max) // condition
		{
			array2[i] = array[i]; // to store elements in array2	
		}
		else
		 array2[i]=-100;  // condition
	 }
	 
	showData(array2,size);  // function call to showData function 	  
}
void showData(int*ptr, int size)  // function definition 
{
	cout<<"After Droping largest number array is :"; // to display
	
	for(int i=0; i<size;) // loop initialization, condition and update
	{
		if(ptr[i]!=-100)  // condition
		{
		 cout << ptr[i]; // to display
		 
			if(i<(size-1)) // condition
			  cout<<",";
		}
		i++;
	}
 }
int main() // main function 
  {
	int size;  // variable declaration
	
	cout << "Enter the size of array: "; // to display
	cin >> size;
	
	dropLarge(makeArray(size),size); // call to dropLarge and makeArray function
	
  }
  
  
  
