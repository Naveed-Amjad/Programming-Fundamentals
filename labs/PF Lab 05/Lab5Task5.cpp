/*

File Name: Lab5Task5.cpp
Written By: Naveed Amjad
Roll No: BITF19M541
Date: 24 March, 2020.
Description: To calculate the number of widgets stacked on pallet  

*/

#include <iostream> 
using namespace std;
int main ()
{
	// variable declaration 
	double weigh_per_widget = 9.2;
	double pallet_weigh_itSelf;
	double pallet_weigh_with_widgets;
	double number_of_widgets_stacked;
	double wieght_of_widgets;
	
	// Ask user for input 
	cout <<"Enter weight of pallet in pounds: " <<endl;
	
	// to store value of pallet weight
	cin >> pallet_weigh_itSelf;
	
	// Ask user to put weight of pallet stacked with widgets
	cout <<"Enter weight of pallet with widgets in pounds: " <<endl;
	
	
	// to store value of loaded pallet
		cin >> pallet_weigh_with_widgets;
	
	 
	 // calculation of weight of widgets
	wieght_of_widgets = pallet_weigh_with_widgets - pallet_weigh_itSelf ;
	
	// to calculate number of widgets
	 number_of_widgets_stacked = wieght_of_widgets/9.2;
	

	// display number of widgets stacked
	cout <<"Number of widgets stacked on the pallet are " << number_of_widgets_stacked;
	
	
	
	


	return 0;
}




