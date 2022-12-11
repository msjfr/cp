#include <iostream>

using namespace std;
const int n=10;

 int main(){

     int a[n]={12,32,11,76,48,98,65,42,0};
     int i,j,temp,m;
     	cin >> m;
        cout << " enter "<<n<<" elements :  ";
	for(i=0;i<n;i++)
	{
		for (j=0;j<(n-i);j++)
			if(a[j]<a[j+1]){
				
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				
			}
		
	}
	  	cout << "Array after bubble sort :  ";
	for (i=0;i<n;i++)
	    cout << "     "<<a[i];	    
}