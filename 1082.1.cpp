#include<bits/stdc++.h>
using namespace std;

long long sum=1,num[1005];

long long f(int n)
{
	if(num[n]!=0) return num[n];
	
	num[n]++;
	for(int i=1;i<=n/2;++i)
	{
		num[n]+=f(i);
		//cout<<i<<"----"<<num[i]<<endl;
	//	sum+=num[i];
	}
//	cout<<n<<"----"<<num[n]<<endl;
	return num[n] ;
}

int main(){
	int n;
	cin>>n;
	memset(num,0,sizeof(num));
	cout<<f(n);
	return 0;
}
