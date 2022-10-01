/*
File Name: CaseStudy(Calculator).cpp
Written By: Naveed Amjad
Roll No: BITF19M541
Date: April 25, 2020
Description: Programm to make a calculator which performs addition, subtraction, multiplication, division,
			 mode, power, factorial and square root.

*/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double Addition(double, double);		   // function prototype for addition
double Subtraction(double, double); 	   // function prototype for subtraction 
double Multiplication(double,double);   // function prototype for multiplication	
double Division(double,double);		   // function prototype for division
double Remainder(int,int);        // function prototype for remainder 
double Power(double,double);            // function prototype for power 
int Factorial(int);           // function prototype for factorial
double Square_root(double);      // function prototype for square root    
          	

int main ( )
{
	char operation;		   // variable declaration
	
	//  menu display 
	cout <<"Please select: " << endl;
	cout <<" + \t For Addition \n - \t For Subtraction \n * \t For Multiplication \n ";
	cout <<"/ \t For Division \n % \t For Renainder \n ^ \t For Power \n ! \t For Factorial \n ";
	cout <<"# \t For Square Root \n q \t For Ending of program " << endl << endl;
	
	// message to user to enter any operation
	cout <<" Pleae enter operation which you want to perform: ";
	cin >> operation;
    
    // execution will terminate when user enters q 
	while(operation !='q')
	{
			
	  switch (operation)      // switch statement declaration
	  {
	      case '+':           
				double number1, number2, sum;  // variable declaration
	            cout <<"Enter 1st number: ";  // message to user
	            cin >> number1;               // to store value of number1
	            cout <<"Enter 2nd number: ";  // message to user
	            cin >> number2;				  // to store value of number2
	            sum =  Addition(number1,number2); // call to Addition function and return value to sum  
	       	   cout <<" Sum = " << fixed << setprecision(2) << sum;  // to display value of sum
	       	   break;
	    case '-':
	    	 double answer; // variable declaration
	    	 cout <<"Enter 1st number: ";  // message to user
	            cin >> number1;               // to store value of number1
	            cout <<"Enter 2nd number: ";  // message to user
	            cin >> number2;				  // to store value of number2
	            answer =  Subtraction(number1,number2); // call to Subtraction function and return value to answer
	          cout <<" Answer = " << fixed << setprecision(2) << answer; // to display answer
	          break;
	    case '*':      
	    	    cout <<"Enter 1st number: ";  // message to user
	            cin >> number1;               // to store value of number1
	            cout <<"Enter 2nd number: ";  // message to user
	            cin >> number2;				  // to store value of number2
	            answer = Multiplication(number1,number2); // call to Multiplication function and return value to answer
	            cout <<" Answer = " << fixed << setprecision(2) << answer;        	
	            break;
	    case '/':           
	            cout <<"Enter 1st number: ";  // message to user
	            cin >> number1;               // to store value of number1
	            cout <<"Enter 2nd number: ";  // message to user
	            cin >> number2;				  // to store value of number2
	            answer = Division(number1,number2); // call to Division function and return value to answer
		        cout <<" Quotient = " << fixed << setprecision(2) << answer; 
			    break;
		case '%':
		        cout <<"Enter 1st number: ";  // message to user
	            cin >> number1;               // to store value of number1
	            cout <<"Enter 2nd number: ";  // message to user
	            cin >> number2;				  // to store value of number2
	            answer = Remainder(number1,number2); // call to Remainder function and return value to answer	    
		       cout <<" Remainder = " << fixed << setprecision(2) << answer;
	           break;
	    case '^':		   	 
		       	cout <<"Enter base number: ";  // message to user
	            cin >> number1;               // to store value of number1
	            cout <<"Enter Exponent number: ";  // message to user
	            cin >> number2;				  // to store value of number2
	            answer = Power(number1,number2); // call to Power function and return value to answer
				cout <<" Answer = " << fixed << setprecision(2) << answer;
				break;
		case '!':            
		        cout <<"Enter 1st number: ";  // message to user
	            cin >> number1;               // to store value of number1
	            answer = Factorial(number1); // call to factorial function and return value to answer
		        cout <<" Factorial = " << answer ;
				break;
		case '#':             
		        cout <<"Enter 1st number: ";  // message to user
	            cin >> number1;               // to store value of number1
	            answer = Square_root(number1); // call to Square_root function and return value to answer
		        cout <<" Square root = " << answer; // to display value of answer which is square root of number1
				break;			
		default:             // default statement 
		        cout <<" Invalid Selection. \n Please Enter a valid operation! " << endl;				
								          
      }
      // message to enter operation again 
	  cout << endl << " \n Pleae enter operation which you want to perform: ";
	  cin >> operation;  // to store operation 
	  cout << endl;
   }
	          
}

double Addition(double number1, double number2)      // function definition for addition 
{
 
		double result = number1 + number2;  // addition calculation
		return result;   // return result 
}

double Subtraction(double number1,double number2)   // function definition for subtraction
{
	
	     double result = number1 - number2;
		 return result;

}

double Multiplication(double number1,double number2)   // function definition for multiplication
{
		 double result = number1 * number2;
		 return result;
}

double Division(double number1,double number2)   // function definition for division
{

		 if(number2 ==0)  // if number2 = 0
		 {
		 	while(number2==0) // if user enter 0 again and again show error until he enters number2 non zero
		 	{
		 	   cout <<" Error: Division by zero not possible. \n Please Enter non-zero number: ";
		 	   cin >> number2;  // to store value of number2 	
			}
		 	
		 }   
		 double result = number1 / number2; // calculation
		 return result; // return statement
	
	
}

double Remainder(int number1,int number2)   // function definition for remainder
{		 
		 if(number2==0) // if condition
		 {
		 	while(number2==0) // if user enter 0 again and again show error until he enters number2 non zero
		 	{
		 	   cout <<" Error: Division by zero not possible. \n Please Enter non-zero number: ";
		 	   cin >> number2;  // to store value of number2	
			}
		 	
		 }
		  
		 int result = number1 % number2;  // calculation
		 return result;   // return statement
}

double Power(double number1,double number2)    // function definition for power
{	
	    double result = pow(number1,number2);   // calculation, call to buit in function
	    return result;   // return statement
}

int Factorial(int number1)    // function definition for factorial
{
	int i=1, factorial=1;  // variable declaration and initialization
	
	if(number1 < 0)  // condition 
	{
		while(number1 < 0) // until he enters number greater than 0
		{
		  cout <<" Error: \n Please enter positive number: ";  // message to user
		  cin >> number1;    // to store value of number
		}
		
	}
    
	
	for(i=1; i<=number1; i++)   // loop initialization, condition and update
	{
		factorial = factorial * i;  // calculation of factorial
	}
	
	int result = factorial;   // result
	return result;   // return statement
	
}

double Square_root(double number1)   // function definition for square root
{
	if(number1 < 0)   // condition
	{
		while(number1 < 0)  // loop condition
		{
		   cout <<" Error: \n Please enter a positive number: "; // message to user
		   cin >> number1; // to store value of number
			
		}
		
	}
	
	double result = sqrt(number1);  // calculation of square root, built in function call
	return result;   // return statement
	
}

