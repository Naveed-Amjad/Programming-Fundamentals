#include <iostream>
#include <iomanip>  //include iomanip library for precision commands
#include <cmath>    //include cmath library for the power function
using namespace std;

int main()
{
    double loan;            //declare the variables needed
    double interestRate;
    int numberOfPayments;

    //prompt the user to enter the loan amount then read it from keyboard
    cout << "Enter the loan amount: " << endl;
    cin >> loan;

    //prompt the user to enter the interest rate then read it from keyboard
    cout << "Enter the interest rate in %: " << endl;
    cin >> interestRate;
    interestRate = interestRate / 100;

    //prompt the user to enter the number of payments then read it from keyboard
    cout << "Enter the number of payments: " << endl;
    cin >> numberOfPayments;

    double monthlyPayment;  //declare variables for
    double amountPaid;      //what we are going to
    double interestPaid;    //calculate

    //calculate monthly payment according to book formula
    monthlyPayment = ((interestRate*(pow(interestRate+1, numberOfPayments)))/((pow(interestRate+1, numberOfPayments))-1))*loan;

    //calculate total amount paid back
    amountPaid = monthlyPayment * numberOfPayments;

    //calculate amount of interest paid
    interestPaid = amountPaid - loan;

    //setprecision(2), fixed and setw() used for formatting purposes
    //to display exactly 2 digits after the decimal point
    cout << "Loan amount:            $" << setprecision(2) << fixed << setw(10) << loan << endl;

    //setprecision(0) because no need to print decimal places
    //setw(9) because we need to print % sign after
    cout << "Monthly Interest Rate:   " << setprecision(0) << setw(9) << interestRate*100 << "%" << endl;
    cout << "Number of Payments:      " << setw(10) << numberOfPayments << endl;
    cout << "Monthly Payment:        $" << setprecision(2) << fixed << setw(10) << monthlyPayment << endl;
    cout << "Amount Paid Back:       $" << setprecision(2) << fixed << setw(10) << amountPaid << endl;
    cout << "Interest Paid:          $" << setprecision(2) << fixed << setw(10) << interestPaid << endl;

    
	
	return 0;
    	
	}
