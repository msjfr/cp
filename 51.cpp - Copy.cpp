#include <iostream>

using namespace std;

int main() {

    int s,ax;
      cout <<"please enter salary number :  ";
    cin >> s ;
    
    if ( s<6 ){
    	cout<<"ax==0%"<<"   "<< "the salary is less than 6";
	}
	else if ( s>=6 && s<8){
		cout <<"ax==5%"<<"    "<<"the salary is less than 8 ";
	}
	else if ( s>=8 && s<10){
		cout <<"ax==10%" <<"    "<<"the salary is less than 10 ";
	}
	else if ( s>=10 && s<14){
		cout <<"ax==15%"<<"   "<<"the salary is less than 14 ";
	}
	else if ( s>=14 && s<18 ){
		cout <<"ax==20%"<<"    "<<"the salary is less than 18 ";
	}
	else if ( s>=18 && s<25 ){
		cout <<"ax==25%"<<"    "<<"the salary is less than 25 ";
	}
	if ( s >25 ){
		cout <<"ax==35%"<<"    "<<"the salary is more than 25 ";
	}
}