/*
File Name: Lab09Task3.cpp
Written By: Naveed Amjad 
Roll No: BITF19M541
Date: April 21, 2020
Description: program to check the number is even orr odd

*/

#include <iostream>
using namespace std;

bool even_odd (int number);  // function prototype

int main ( )  // main function
{
	int num;  // local variable declaration
	
	cout <<"Please Enter a number: ";  // message to user
	cin >> num;   // to store value of num
	
	even_odd(num);  // call to even_odd function

}

bool even_odd(int number)  // function definition
{

	if(number % 2 == 0 )   // condition for even number
	{
		cout <<"The number " << number <<" is even" << endl;  // to display output for even number
	}
	else
	{
		cout <<"The number " << number <<" is odd" <<endl;    // to display output for odd number
	}
	
}





