#include<iostream>
using namespace std;
int main(){
	int a,b,n,t;
	cin>>a>>b>>n;
	for(int i=0;i<n;++i){
		a=a*10; 
		t=(a/b)%10;
		a=a%b;
	}
	cout<<t;
	return 0;
}
