#include <iostream>

using namespace std ;

int main() {

    int n,i,m,temp ;
      cout <<" please enter two integer values  :  "<< "\n";
      cin >> n >> m ;
      
      
    for ( i = 1 ; i <= n && i <= m ; i++){
    	
    	if ( n % i ==0 && m % i == 0)
    	
    	       temp = i ;
	}
	
	cout << " temp of "<< m <<" and "<< n << " is"<< temp ;
}