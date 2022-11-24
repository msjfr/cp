#include <iostream>

using namespace std;

int main() {
	
	int i,n,m,pow = 1;
	  cout << " enter n : " ;
	cin >> n ;
	   cout << " enter m : " ;
	cin >> m ;
	
	for ( i = 1 ; i <= n ; i++){
		
		pow *= m ;
	}
	
	cout << " pow is : "<< pow ;
}

