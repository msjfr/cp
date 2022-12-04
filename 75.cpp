#include <iostream>
#include<math.h>
using namespace std ;

int main() {
	
	int n,i,flag,j,s;
	
       cout << " please enter an integer value greater than 2 : " ;
       cin >> n ;
       
    s=0;
    
      for ( i=2 ; i<n ; i++){
      	     flag = 1 ;
      	for ( j = 2 ; j<i ; j++){
      		
      		if ( i % j == 0){
      			flag = 0 ;
      			break;
			  }
		  }
		  
		    if ( flag == 1){
		    	flag = 1 ;
		    	s = i+s ;
			}
	  }
	   cout << s;
}