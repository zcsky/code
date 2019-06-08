// luogu-judger-enable-o2
// luogu-judger-enable-o2
#include <iostream>
using namespace std;

int main() {
	unsigned long int n,k;
	cin>>n>>k;
	if (n*(n-3)/2==k)  
	cout<<"Yes";
	else if (n*(n-3)/2!=k){
	   cout<<"No"<<endl;
	   cout<<n*(n-3)/2;
	}
	return 0;
}
