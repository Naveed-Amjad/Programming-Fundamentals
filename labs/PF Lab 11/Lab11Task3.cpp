/*
File Name: Lab11Task3.cpp
Witten By: Naveed Amjad
Roll No: BITF19M541
Date: April 6, 2020;
Description: to compute sum of elements in required column 

*/
#include<iostream>
#include<iomanip>

using namespace std;
const int rows=3;
const int cols=4;

void getdata(int data[][cols], int rows)
{
	for (int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		{
			cout <<"Enter value for row "<<i+1<<" and column "<< j+1<<": ";
			cin>>data[i][j];
		}
	}
}
void display(int data[][cols], int rows)
{
	cout <<"Matrix is.." << endl;
	for (int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		{
			cout << data[i][j] <<" ";
		}
		cout << endl;
	}
}
int getcolumntotal(int data[][cols], int rows,int y)
{
    int sum;
    
	sum=data[0][y-1]+data[1][y-1]+data[2][y-1];
	return sum;
}
int main()
{
	int data[3][4];
	int y;
	int result;
	getdata(data, rows);
	display(data, rows);
	cout<<"The column you want to sum=";
	cin>>y;
	if(y>=0 && y<=3)
{
		getcolumntotal(data, rows,y);
		result=getcolumntotal(data, rows,y);
		cout<<"sum of values in this column is"<<result<<endl;
	}
	else 
	cout<<"Enter value in range of 0 to 3";
	return 0;
	
}
