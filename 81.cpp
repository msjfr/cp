#include <iostream>
using namespace std;
int main(){

     int array[ 10 ];
	int i;
	int min;
	int max;
	float  total = 0.0,average;
	
	for ( i = 0 ; i < 10 ; i++){
		
		cout << " Enter the number : " << i + 1 << " : ";
		cin >> array[ i ];
	}
	for ( i = 0 ; i < 10 ; i++){
		total =  total + array[ i ] ;
		}
		average = total / 10 ;
		
	for ( i = 0 ; i < 10 ; i++)
		if ( array[ i ] > max){
		max = array[ i ] ;
		}
	for ( i = 0 ; i < 10 ; i++) 
	     if ( array[ i ] < min ){
         min = array[ i ] ;
		}
		for ( i = 0 ; i < 10 ; i++)
		  average = ((min + max)/2) ;	     
    cout << " \n maximum of entered numbers is : " << max << " \n " ;
	cout << " \n minimum of entered numbers is :  "<< min << " \n " ;
    cout << " \n total of all numbers =  " << total << " \n ";
	cout << " \n average of all input  numbers = " << average << " \n ";
    cout << " average of min and mix numbers  " << ((min + max)/2) << " \n " ;
	}
	