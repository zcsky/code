#include<iostream>
using namespace std;
int min(int a,int b){
	return a>b?b:a;
}
int main(){
	int f[105],i,n,cost;
	f[0]=0;
	cin>>n;
	for(i=1;i<=n;++i){
		cost=9999;
		if(i-1>=0) cost=min(cost,f[i-1]+1);
		if(i-5>=0) cost=min(cost,f[i-5]+1);
		if(i-11>=0) cost=min(cost,f[i-11]+1);
		f[i]=cost;
		cout<<f[i]<<endl;
	}
	return 0;
}
