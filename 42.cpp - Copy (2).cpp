#include <iostream>

using namespace std;

int main() {

 int x,y,z,s,p,m,n,d,c;
 
   cin >> x >> y >> z;
    
	s=(x-y);
	p=(x+y);
	m=(s*p);
	n=(x+y+z)*(x+y+z);
	d=n+1;
	c=m/d;
	
	cout << c;
}