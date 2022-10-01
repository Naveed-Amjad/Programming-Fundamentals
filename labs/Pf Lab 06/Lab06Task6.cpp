/*
file Name: Lab6Task6.cpp
Written By: Naveed Amjad
Roll No: BITF19M541
Date: 01/04/2020
Description: program to calculate amount of time taken by sound wave to tavel through a specific medium

*/ 

#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
	// variable declaration
	int choice;
	double distance, time;
	 
	
	        
	        cout<<"Please enter your choice: "<<endl;  // Request to user    
	        cout<<"Enter 1 for air" <<endl;            // user's choice
	        cout<<"Enter 2 for water" <<endl;		   // users choice
	        cout<<"Enter 3 for steel" <<endl;          // user choice
	        cin>>choice;							   // to store choice of user
	
	
	  if( choice == 1 )
	  {
	  	cout<<"Enter distance in feet travelled by sound wave: ";	// message to user for input
	  	
	  	cin>> distance;                                // to store value of distance
	  	
	  	time = distance / 1100;                        // calculation of time 
	  	
	  	cout<<endl;  // for next line
	  	
	  	cout<< fixed <<setprecision(4)<<"Time taken by wave is " <<time<<" seconds " ; // setprecision of 4 and display of time
	  	
	  }
		else if( choice== 2)	
	  {
	  	cout<<"Enter distance in feet  travelled by sound wave: "; // message to user for input
	  	
	  	cin>> distance;								   // to store value of distance
	  	
	  	
	  	time = distance / 4900;                        // calculation of time 
	  	
	  	cout<<endl;
	  	
	  	cout<<fixed<<setprecision(4)<<"Time taken by wave is " <<time<<" seconds " ;  // setprecision of 4 and display of time 
	  	
	  }	
	else if( choice == 3)
	{
		cout<<"Enter distance in feet  travelled by sound wave: ";   // message to user for input
		
	  	cin>> distance;								  // to store value of distance
	  	
	  	
	  	time = distance / 16400;				      // calculation of time 
		   
	  	cout<<endl;
	  	
	  	cout<<fixed<<setprecision(4)<<"Time taken by wave is " <<time<<" seconds " ;   // setprecision of 4 and display of time 
		
	}
	else 
	    
	    cout<<"Wrong choice";    // warning message 
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
