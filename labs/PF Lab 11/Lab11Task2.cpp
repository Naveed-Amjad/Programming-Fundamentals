/*
File Name: Lab11Task1.cpp
Written By: Naveed Amjad
Roll No: BITF19M541
Date: May 6, 2020
Description: program to subtract two matrixes

*/
#include <iostream>
using namespace std;


int getdata(int matrix1[3][3])
{
	for(int i=0;i<=2;i++)
	{
		for(int j=0;j<=2;j++)
		{
			cout<<"Enter value for row "<<i+1<<" and column "<<j+1<<": ";
			cin>>matrix1[i][j];
		}
	}
	return matrix1[3][3];
}
int display(int matrix1[3][3])
{

	for(int i=0;i<=2;i++)
	{
		for(int j=0;j<=2;j++)
		{
			cout<<"value["<<i+1<<"]["<<j+1<<"]="<<matrix1[i][j]<<endl;
			
		}
	}
	return matrix1[3][3];
}
int subtract(int matrix1[3][3],int matrix2[3][3],int sub[3][3]) 
{

	for(int i=0;i<=2;i++)
	{
		for(int j=0;j<=2;j++)
		{
			sub[i][j]=matrix2[i][j]-matrix1[i][j];
		}
}
    for(int i=0;i<=2;i++)
	{
		for(int j=0;j<=2;j++)
		{
			cout<<"VALUE AFTER SUBTRACTION["<<i+1<<"]["<<j+1<<"]="<<sub[i][j]<<endl;
		}
}
  return sub[3][3];
}
int getelement(int sub[3][3],int row,int col)
{
	cout<<"Numbers in that desired row and column is="<<sub[row-1][col-1]<<endl;
}
		
int main()	
{
int matrix1[3][3],matrix2[3][3]	, sub[3][3],e[3][3],row,col;
      cout<<"Enter elements for 1st matrix="<<endl;
      
      getdata(matrix1);
      
      cout<<"display"<<endl<<endl;
      display(matrix1);
      cout<<"Enter elements for 2nd matrix="<<endl;
      getdata(matrix2);
      cout<<"Subtraction="<<endl;
      subtract(matrix1,matrix2,sub);
      
      cout<<"Enter desired no. of row and column="<<endl;
      cin>>row>>col;
      getelement(sub,row,col);
}
