#include <iostream>

 using namespace std ;
 
 int bmm (int a , int b ){
 	if (b==0){
 		return a ;
	 }
	 else {
	 	return (b, a%b);
	 }
 }

int main() {
	int num1,num2;
	cout << " enter num1 : ";
	cin >> num1;
	cout <<" enter num2 :  ";
	cin >> num2;
	
	cout << " bmm a , b is :   " << bmm(num1,num2);
}