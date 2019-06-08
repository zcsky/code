#include<iostream>
using namespace std;
int main(){
	long long n,i;
	int a[101];
	i=1;
	cin>>a[0];
	while(a[i]>0){
		cin>>a[i];
		i++;
	}
	for(int j=i-1;j>=0;j--) cout<<a[j];
	return 0;
}
