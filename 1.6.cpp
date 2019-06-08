//ex1.4
#include <iostream>
using namespace std;
int main() {
	int i,n,min,max,n1;
	cin>>n;
	cin>>n1;
	max=n1;
	min=n1;
	
	for(i=1; i<n; i++) {
		cin>>n1;
		if(n1>max){
		max=n1;}
		if(n1<min){min=n1;
	}
	}
	cout<<max-min<<endl;

	return 0;
}
