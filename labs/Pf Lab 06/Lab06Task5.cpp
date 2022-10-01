/*
file Name: Lab6Task5.cpp
Written By: Naveed Amjad
Roll No: BITF19M541
Date: 31/03/2020
Description: program to compute total cost of purchase after discount

*/

#include <iostream>
using namespace std;
int main ()
{
	// variable declaration
	int units;
	double discount;
	double cost;
	double totalCost;
	
	cout<<"Enter number of units sold: ";		// message for user what to do
	cin >>units;							    // to store value of units
	
	if ( units >=1 && units < 10)
	{
		cost = units * 99;                      // calculation of cost
		
		cout<<"Total cost of the purchase is " <<cost;	//display of total cost
		 
	}
	else if( units >=10 && units <20)
	{
		cost = units * 99;					   // calculation of cost	
		discount = cost * 0.2;                 // calculation of discount
		totalCost = cost - discount;           // calculation of total cost after discount
		
		cout<<"20% discount is given to you" <<endl;	// display of discount offered
		
		cout<<"The cost of the purchase is " <<cost <<endl;	// display of cost of purchase
		
		cout<<"The total cost of the purchase after discount is " <<totalCost;	//display of total cost after discount
		
	}
	else if( units >=20 && units <50 )
	{
		
		cost = units * 99;					  // calculation of cost
		
		discount = cost * 0.3;                // calculatiom of discount
		
		totalCost = cost - discount;          // calculation of total cost after discount
		
		cout<<"30% discount is given to you" <<endl;	// to display discount offered
		 
		cout<<"The cost of the purchase is "<<cost<<endl;	// cost of purchase
		
		cout<<"The total cost of the purchase after discount is "<<totalCost;	// to display total cost after discount
		
	}
	else if( units >= 50 && units < 99)
	{
		
		cost = units * 99;					 // calculation of cost
		
		discount = cost * 0.4;				 // calculation of discount 
		
		totalCost = cost - discount;		 // calculation of total cost after discount
		
		
		cout<<"40% discount is given to you" <<endl;	// to display discount offered
		
		cout<<"The cost of the purchase is "<<cost<<endl;  // cost of purchase
			
		cout<<"The total cost of the purchase after discount is "<<totalCost;  // to display total cost after discount	
		
	}
	else if( units >= 100)
	{
		
		cost = units * 99;					  // calculation of cost
		
		discount = cost * 0.5;                 // calculation of discount 
		
		totalCost = cost - discount;		    // calculation of total cost after discount
		
		cout<<"50% discount is given to you" <<endl;  // to display discount offered
			
		cout<<"The cost of the purchase is "<<cost<<endl;  // cost of purchase
			
		cout<<"The total cost of the purchase after discount "<<totalCost;  // to display total cost after discount
		
		
	}
	
	
	
	
	
	
	
	
	return 0;
}
