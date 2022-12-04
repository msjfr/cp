#include <iostream>

using namespace std ;

int main() {
	
    int a[5]={11,14,15,17,20};
    int b[5]={12,13,16,18,19};
    int i,j,temp;
	
	   for ( j=0 ; j<(5) ; j++){
	   	    
	   	    temp=a[j];
	   	    a[j]=b[j];
	   	    b[j]=temp;
	   }	
	   
	   for ( i=0 ; i<5 ; i++)
	   	
	   	    cout << "  " << a[i]<< "   ";
	   	    cout << "next"<< "\n"<<endl;
	   for ( i=0 ; i<5 ; i++)
	   
	        cout << "   " << b[i];
	}