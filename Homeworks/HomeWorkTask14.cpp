/*
File Name: HomeWorkTask14.cpp
Written By: Naveed Amjad
Roll No: BITF19M541
Date: 04, April 2020
Description:  Input 10 numbers, and display count of Even and Odd numbers, separately, at the end.   

*/
#include <iostream>
using namespace std;
int main ()
{
	int number, i=1; 
	int even=0, odd=0;
	while(i<=10)
	{
		cout<<"Enter number: "<<endl;
		cin>>number;
		if(number%2==0)
		{
			even +=1;
		}
		else if(number%2==1)
		{
			odd +=1;
		}
		cout<<"Count of Even = "<<even<<endl;
		cout<<"Count of Odd = "<<odd<<endl<<endl;
		i++;
	}
	cout<<"Loop Ended";
	
	
	
	
	
	return 0;
}
