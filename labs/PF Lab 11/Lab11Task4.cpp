/*


*/
#include <iostream>
using namespace std;

// variable declaration
const int rows = 4; 
const int columns = 3;

void Getdata(int data[][columns], int rows)
{
	for(int i=0; i<rows; i++)
	{
	  for(int j=0; j<columns; j++)
	  {
	  	cout <<"Enter value for row "<<(i+1)<<" and column "<<(j+1)<<": ";
	  	cin >>data[i][j];
	  }
	
	}
}
void Display(int data[][columns], int rows)
{ 
   cout <<"Matrix is: " << endl;
	for(int i=0; i<rows; i++)
	{
		for(int j=0; j<columns; j++)
		{
			cout <<" " << data[i][j] <<" ";
		}
		cout << endl;
	}
}
int getLargest(int data[][columns], int rows, int number)
{
	int largest=0;
	int i=0;
	while(i<=number)
	{
		for(int j=0; j<columns; j++)
		{
			if(data[i][j] > largest)
			{ 
			 largest= data[i][j];
			}
		}
		i++;
	}
	return largest;
}
int main ()
{
	int data[rows][columns];
	int result;
	int number;
	
	Getdata(data, rows);
	Display(data, rows);
	xyz:
	cout <<"Enter row number in which you want to get largest number: ";
	cin >> number;
	if(number>=0 && number<=3)
	{
	   getLargest(data,rows,number);
	   result = getLargest(data, rows, number);
	   cout<<"Largest number in this row is " << result << endl;
		
	}	
	else
	{
		cout <<"Please enter number in range of 1 to 3 " << endl;
	}
}









