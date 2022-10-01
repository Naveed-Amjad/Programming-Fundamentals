/*
File Name: Lab11Task1.cpp
Written By: Naveed Amjad
Roll No: BITF19M541
Date: May 6, 2020
Description: Program to calculate average of elements of a 3 by 3 matrix

*/
#include <iostream>
using namespace std;

int main()
{
	
	int matrix[3][3];   // declaration of size of matrix
	int sum=0;          // declaration of variable to store sum  
	
	for(int row=0; row < 3; row++)    // loop for rows
	{
		for(int col=0; col < 3; col++) // loop for columns
		{
			cout <<"Enter value for row "<<row+1<<" and column "<<col+1 <<": "; // to display address of element 
			cin >> matrix[row][col];  // to store elements of matrix
			
			sum += matrix[row][col]; // calculation of sum
		}
	}
	
	cout << endl <<"Matrix is:  " << endl; // to display 
	
	
	for(int row=0; row<3; row++)  // loop for rows
	{
		for(int col=0; col<3; col++) // loop for columns
		{
			cout <<"\t" << matrix[row][col] <<"  "; // to display elements of matrix 
		}
		cout << endl; // to print blank line
	}
	
	 cout << endl <<"Average = " << sum/9.0 << endl; // to display average

}













