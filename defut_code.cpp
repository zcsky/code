//ex1.4
#include <iostream>
using namespace std;
int main() {
	long n,a,b,c;
	cin>>n;
	a=b=0;
	for(int i,sum=0;i<n;++i)
	 if(i%3==0)
	    a+=i;
    	for(int i,sum=0;i<n;++i)
	 if(i%5==0)
	    b+=i;
	    if(n%15==0)
	    cout<<a+b+n;
	    if(n%15!=0)
	    cout<<a+b;
	return 0;
}
