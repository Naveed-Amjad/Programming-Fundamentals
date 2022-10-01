/*
File Name: Lab12Task3.cpp
Written By: Naveed Amjad
Roll No: BITF19M541
Date: May 16, 2020
Description: Program to get data, display data, subtract data and print rsul of subtraction using arrayrs and pointers

*/

#include <iostream>
using namespace std;

void getData (int *array, int size)  // function definition
{
	for(int count=0; count<size; count++)  // loop initialization, condition and update
	{
		cout <<"Enter value for " << (count+1) <<" element: ";  // to get elements of array
		cin >> *(array+count);  // to store values of elements
		
	}
}
void displayData(int *array, int size) // function definition
{
    for(int count=0; count<size; count++)  // loop initialization, condition and update
    {
    	cout <<"You enter " << *(array+count) <<" for element " << (count+1) << endl; // to display elements of arrays
	}
}
 void addArray(int *array1, int *array2, int *array3, int size) // function definition
 {
 	for(int count=0; count<size; count++)  // loop initialization, condition and update
 	{
 		array3[count] = array1[count] - array2[count]; // to subtract elements of array1 and array2
 		                                               // and store them into array3
	 }
 }
void displayResult(int *array, int size) // function definition
{
	for(int count=0; count<size; count++)  // loop initialization, condition and update
	{
		cout <<"Subtraction of " <<count+1<<" elements " << *(array+count) <<endl; // to display subtarction values
	}
	
} 	
     	
int main ( ) // main function
{
	const int size=10; // declaration of size of arrays
	
	int array1[size]; // declaration of array1;
	
	int array2[size]; // declaration of array2;
	
	int array3[size]; // declaration of array3;
	
	cout <<"Enter elements for first array " << endl << endl;  // message to user
	getData(array1, size);  // call to getaData function
	
	cout << endl;
	cout <<"Enter elements for second array " << endl << endl; // message to user
	getData(array2, size); // call to getaData function
	
	cout <<"Data of first array " << endl << endl; // display of first array elements
	displayData(array1, size); // call to displayData function
	
	cout << endl;
	cout <<"Data of second array " << endl << endl; // display of second array elements
	displayData(array2, size); // call to displayData function
	
	cout <<endl<<endl;  // to print blank lines
	
	addArray(array1, array2, array3, size); // call to addArray function
	
	cout <<endl<<endl; // to print blank lines
	
	displayResult(array3, size);  // call to displayResult function
	
}
