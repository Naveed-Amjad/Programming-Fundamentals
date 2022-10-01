/*
File Name: Labt11Task5.cpp
Written By: Naveed Amjad
Roll No: BITF19M541
Date: April 7, 2020

*/
#include <iostream>
using namespace std;

// variable declaration 
const int rows=4;
const int columns=4;
int matrix[rows][columns];
int transpose[rows][columns];


void getdata(int [][columns], int ); // function prototype
void display(int [][columns], int ); // function prototype
bool isSymmetric(int [][columns], int ); // function prototype

int main ()
{	
	
	getdata(matrix, rows); // function call 
	display(matrix,rows);  // function call
	
	 if (isSymmetric(matrix, 3)) // function call and condition
        cout << "Yes"; 
    else
        cout << "No"; 
}
void getdata(int matrix[][columns], int rows)
{

	
	for(int i=0; i<rows; i++)
	{
		for(int j=0; j<columns; j++)
		{
			cout <<"Enter values for row "<<i+1<<" and column "<<j+1 <<": ";
			cin >> matrix[i][j];
		}
	}
	
	
}
void display(int matrix[][columns], int rows)
{
 
	cout <<" Matrix is "<< endl;
	for(int i=0; i<rows; i++)
	{
		for(int j=0; j<columns; j++)
		{
			cout << matrix[i][j]<<" ";
			
	    }
	    cout << endl;
    }
    	 
	     
    cout <<"Transpose is " << endl;
    for(int i=0; i<rows; i++)
    {
       for(int j=0; j<columns; j++)
	   {
	   	  transpose[i][j]=matrix[j][i];
	   }	
	}
	
	for(int i=0; i<rows; i++)
    {
       for(int j=0; j<columns; j++)
	   {
	   	 cout << transpose[i][j]<<" ";
	   }	
	   cout << endl;
	}
}

bool isSymmetric(int matrix[][columns], int rows)
{
	for(int i=0; i<rows; i++)
	{
		for(int j=0; j<columns; j++)
		{
			if(matrix[i][j] != transpose[i][j])
			return false;
		   	
		}
	}
	
}
