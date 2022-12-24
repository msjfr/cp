#include <iostream>

using namespace std ;

int power (int x,int y){
    
    if (y==0){
    	return 1 ;
	}
	else {
		return x * power(x,y-1);
	}
}
int main(){
	int n,m;
	cout << " base number :  " ;
	cin >> n ;
	cout << " tavan number : " ;
	cin >> m ;
	cout << " power( n , m ) is :  " << power (n,m);
	
}