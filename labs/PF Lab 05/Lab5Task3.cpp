/*
File Name: Lab5Task3.cpp
Written By: Naveed Amjad
Roll No: BITF19M541
Date: 24 March, 2020
Description: To calculate number of calories consumed
*/

#include <iostream>
using namespace std;
int main ()
{
	// variable declaration and initialization 
	int bagCookies = 40, totalServings=10;
	int cookiesPerServing= 40/10;
	int caloriesPerServing=300;
	
	int totalCalories= cookiesPerServing * caloriesPerServing;		// calculation of calories
	int numberOfCookies;
	
	// To Ask user how many cokies he or she ate  
	cout <<"Enter number of cookies you ate: " <<endl;
	
	// To store number of eaten cookies  
	cin >>numberOfCookies;
	
	// To display total calories consumed
	cout <<"Total calories consumed = " <<numberOfCookies * cookiesPerServing * caloriesPerServing <<endl;
	
	
	
	
	
	
	

	return 0;
}
