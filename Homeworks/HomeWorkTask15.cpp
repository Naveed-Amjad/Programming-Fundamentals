/*
File Name: HomeWorkTask15.cpp
Written By: Naveed Amjad
Roll No: BITF19M541
Date: 5 April,2020
Description:  Input SLimit and ELimit from user, and display Even numbers between range, with both limits included  

*/
#include <iostream>
using namespace std;
int main ()
{
	// variable declaration
	int SL, EL,i;
	int Even=0 , Odd=0;
	
	// message for input 
	cout<<"Enter starting limit: "<<endl;
	cin>>SL;
	cout<<"Enter ending limit: "<<endl;
	cin>>EL;
      
    cout<<endl;
	  
        // if starting limit is even
		if( SL % 2== 0 )
		{
			
		  cout<<"Even: "<<SL<<endl;
		  
		  while(SL <=(EL-2)) // to execute loop until last even number
		  {
		  	SL = SL + 2; // jump to next even number
		  	
		  	cout<<"Even: "<<SL<<endl; // to display even numbers
		  	
		  }
		}
		else     // if starting limit is odd
		{
			SL = SL + 1;  // jump to next even number
			
			cout<<SL<<endl;  
			
			while(SL <= (EL-2))   // to execute loop until last even number
			{
				SL = SL + 2;   // jump to next even number
				cout<<SL<<endl; // display even numbers
				
			}
	    }
		 
		
	
	
	
	
	return 0;
}
