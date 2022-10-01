/*
Written By: Naveed Amjad
File Name: Lab06Task2.cpp
Roll No: BITF19M541
Description: program to convert integer number into roman

*/

#include <iostream>
using namespace std;
int main ()
{
   int number;	// variable declaration	
	 
	cout <<"Enter number:";		// for user input 
	cin >> number;				// to save input number
	
 switch(number)	
      {
	  
	  case 1:					// reprentation of if number is equal 1 
	     
		    cout <<"i";			// roman representation of 1
	        break;				// to end case 1
      case 2:					// reprentation of if number is equal 2
		
           cout <<"ii";		    // roman representation of 2
           break;
           
	 case 3:					// reprentation of if number is equal 3
	 	   
	 	   cout <<"iii";        // roman representation of 3
	 	   break;
	 case 4:					// reprentation of if number is equal 4
	 	
	 	   cout <<"iv";		    // roman representation of 4
	 	   break;
	 case 5:					// reprentation of if number is equal 5
	 
	  	   cout <<"v";          // roman representation of 5
	  	   break;
	 case 6:					// reprentation of if number is equal 6
	 	 
	 	   cout <<"vi";         // roman representation of 6
	 	   break;
     case 7:					// reprentation of if number is equal 7
	 
	       cout <<"vii";        // roman representation of 7
		   break;	
     case 8:					// reprentation of if number is equal 8
	 
	       cout <<"viii";       // roman representation of 8
		   break;	
     case 9:					// reprentation of if number is equal 9
	 
	       cout <<"ix";         // roman representation of 9
		   break;
     case 10:					// reprentation of if number is equal 10
	 
	       cout <<"x";          // roman representation of 10
		   break;		   	
	 default:                   // representation of else, mean other than these inputs 
	 	   
	 	   cout <<"invalid number. Please enter number in the range of 1 to 10";  // message for invalid input
	
	
	
	}
	
	
	
	
	
	
	
	return 0;
}
