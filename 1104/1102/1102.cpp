#include<iostream>
using namespace std;
int main(){
	int n,temp,ans=0;
	cin>>n;
	int a[n+1];
	for(int i=0;i<n;++i) cin>>a[i];
	cin>>temp;
	for(int j=0;j<n;++j){
		if(a[j]==temp) ans++;
	}
	cout<<ans;
	return 0;
}
