#include <iostream>

using namespace std;
const int m=10;

int main() {
	
	
	int a[m]={10,14,15,13,12,2,5,17,18,20};
	int i,min;
	
	for( i=0;i<10;i++){
		cin>> a[i];
	}
	
	min=a[1];
	for ( i=0;i<10;i++){
		if ( a[i]<min){
			min=a[i+1];
		}
	}
	cout <<" Minimum of enterd number is :  " << min;
	
}
