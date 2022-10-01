/*
file Name: Lab6Task3.cpp
Written By: Naveed Amjad
Roll No: BITF19M541
Date: 31/03/2020
Description: to compute and compare area of two rectangles

*/

#include <iostream>
using namespace std;
int main ()
{
	int L1, L2;											// variable declaration for length of two rectangles
	int W1, W2;										    // variable declaration for width of two rectangles
	int A1, A2;											// variable declaration for area of two rectangles
	
		
	
	          cout <<"Enter lenth of 1st rectangle: "; 	// message to user for input of length of 1st rectangle
			  cin >> L1;								// to store 1st length 
			  cout <<"Enter width of 1st rectangle: ";  //  message to user for input of width of 1st rectangle
	          cin >> W1; 								// to store 1st wigth
	          
			  A1 = L1 * W1;  							// calculation of area of 1st rectangle
	          
			  cout <<"Enter lenth of 2nd rectangle: ";  //  message to user for input of length of 2nd rectangle
			  cin >> L2;								// to store 2nd length 
			  cout <<"Enter width of 2nd rectangle: ";  //  message to user for input of width of 2nd rectangle
	          cin >> W2;							    // to store 2nd width 
	          
	          A2 = L2 * W2;								//  calculation of area of 2nd rectangle
	          
	 if ( A1 > A2)
	 {
	 	
	 	cout <<"1st Rectangle has greater area which is " << A1;	// output if rectangle one has greater area
	 
	 }         
	else if( A2 > A1)
	 {
	     
	    cout <<"2nd rectangle has greater area which is " << A2;	// uotput if rectangle two has greater area
	
	 }
	else if( A1 == A2)
	{
		
		cout <<"1st and 2nd rectangle has same area";				// output if both rectangles have same area
	}
	
	
	
	
	
	return 0;
}
