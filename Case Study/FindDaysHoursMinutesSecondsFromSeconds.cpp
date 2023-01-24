#include <iostream>
using namespace std;



int main(){
	
	int days = 0,hrs = 0,mint = 0, sec = 0;
	
	cout <<"Enter number of seconds: ";
	cin >> sec;
	
	if(sec < 60 && sec >= 0){
		cout << "Days "<<days<<" Hours "<<hrs<<" Minutes "<<mint<<" Seconds "<<sec;
	}
	else if(sec >= 60 && sec < 3600){
		mint = sec / 60;
		sec = sec % 60;
		
		cout << "Days "<<days<<" Hours "<<hrs<<" Minutes "<<mint<<" Seconds "<<sec;
	}
	else if(sec >= 3600 && sec < 86400){
		hrs = sec / 3600;
	//	int reminingSeconds = sec % 3600;
		sec = sec % 3600;
		//mint =  reminingSeconds / 60;
		mint = sec / 60;
		sec = sec % 60;
		//sec = reminingSeconds % 60;
		
		cout << "Days "<<days<<" Hours "<<hrs<<" Minutes "<<mint<<" Seconds "<<sec;
	}
	else if(sec >= 86400){
		days = sec / 86400;
		//int reminingSeconds = sec % 86400;
		sec = sec % 86400;
		hrs = sec / 3600;
		sec = sec % 3600;
		mint = sec / 60;
		sec = sec % 60;
//		hrs = reminingSeconds / 3600;
//		int reminingSeconds2 = reminingSeconds % 3600;
//		mint = reminingSeconds2 / 60;
//		sec = reminingSeconds2 % 60;
		 
		 cout << "Days "<<days<<" Hours "<<hrs<<" Minutes "<<mint<<" Seconds "<<sec;
	}
	else {
		cout <<"Enter valid input: "<<endl;
	}
	
	return 0;
}
