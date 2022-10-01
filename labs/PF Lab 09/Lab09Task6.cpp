/*
File Name: Lab09Task6.cpp
Written By: Naveed Amjad 
Roll No: BITF19M541
Date: April 21, 2020
Description: 
*/
#include <iostream>
using namespace std ;
void factorial();
int main ()
{
               
	//Function Call
	factorial();
	int choice ;
    cout <<endl << " Continue ? " <<endl <<endl << "To Continue : Press '1'" "\n" "To Exit : Press '-1'" << endl;
    cin >> choice;
                     //Loop
      	while (choice ==1 )
   		{
	        factorial();
			cout <<endl << " Continue ? " <<endl <<endl << "To Continue : Press '1'" "\n" "To Exit : Press '-1'" << endl;
            cin >> choice;    
        }
         	

	return 0;


}
//Function 
void factorial()
  {
    long long int i = 1 , factorial = 1 , num ;
    cout << "Enter the Number: " ;
    cin >> num;
    if (num >=1)
    {
	  for (i = 1 ; i<=num ;i++)
	   {
	   	factorial = i * factorial;
	   }
   	  cout << "The Factorial is : " << factorial << endl;
    }
    else
	{ 
    cout << "Please Enter a Positive Number ." ;
    }


}



