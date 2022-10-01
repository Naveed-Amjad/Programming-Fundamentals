/*
File Name: Lab10Task4.cpp
Written By: Naveed Amjad
Roll No: BITF19M541
Date: April 30, 2020
Description: Programm to find student's status, he is pass or fail  

*/

#include <iostream>
using namespace std;

int main ( )
{
	int Sample_Answers[10] = {4, 1, 2, 1, 3, 2, 1, 4, 3, 2}; // given array for answers
	int Question[10];  // array initialization for student answers
	int right = 0, wrong = 0;  // variable declaration

	for(int count=0; count < 10; count++)  // loop initialization, condition and updte
	{
		cout <<"Enter Answer for question " << (count+1) <<": "; // message to user
	    cin >> Question[count];   // to store answer for index 0
        
        if(Sample_Answers[count]==Question[count])  // if answer is right
        {
        	right = right + 1;  // increment in right answers
		}
	    else
		{
			wrong = wrong + 1;  // increment in wrong answers
		 } 
	   cout <<endl;
    }
	
	if(right>=6)   // if right answers is 6 or greater
	{
		cout <<" \t Pass" << endl << endl;  // student is pass
	}
	else
	{
		cout <<"\t Fail" << endl << endl;    // student is fail
	}
	
	cout << "Total right answers " << right <<endl;  // to display no of right answes
	cout << "Total wrong answers " << wrong << endl << endl; // to display on of wrong answers
	
	for(int count=0; count < 10; count++)      // loop initialization, condition and updte
    {
    	if(Sample_Answers[count] != Question[count]) // loop for checking which no. of questions are wrong
    	{
    		cout <<"Question No. " << (count+1) <<" is Wrong. " << endl; // to display output
		}
	}

}
