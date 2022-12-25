#include <iostream>
using namespace std;

double amount = 0;

	double depositAmount(double am){
		amount = amount + am;
	}
	
	double showAmount(){
		cout <<"Your total amount is: "<< amount<<endl;
	}
	double withdrawAmount(double withdraw){
		if(amount > withdraw){
			amount = amount - withdraw;
			cout<<"You withdraw your amount successfully."<<endl;
		}
		else{
			cout<<"Your account balance is less than the amount you want to withdraw."<<endl;
		}
	}

int main(){
	
	
	cout <<endl<<"					Welcome to Online Banking Application					" <<endl<<endl<<endl;
	
	string choice;
	do{
		int option;
		cout<<"Enter 1 to deposit amount"<<endl;
		cout<<"Enter 2 to show amount"<<endl;
		cout<<"Enter 3 to withdraw amount"<<endl;
		cin>>option;
		
		if(option == 1)
		{
			double deposit;
			cout<<"Enter amount you want to deposit: ";
			cin >> deposit;
			depositAmount(deposit);
		}
		else if(option == 2)
		{
			showAmount();
		}
		else if(option == 3)
		{
			double withdraw;
			cout<<"Enter amount you want to withdraw: ";
			cin >>withdraw;
			withdrawAmount(withdraw);
		}
		else {
			cout<<"Invalid option is selected."<<endl;
		}
		
		cout<<"Do want to continue? write yes or no: ";
		cin >>choice;
		cout<<endl;
	}while(choice == "yes");
	
	
}
