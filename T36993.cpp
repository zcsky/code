#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,temp,i1;
	cin>>n;
	for(int i=2;i<=n;++i)
	{
		temp=i*i;
		i1=i;
		while (i1>0&& (i1%10==temp%10))
		{
			i1/=10;temp/=10;
		}		
		if (!i1) cout<<i<<" ";
	}
	return 0;
}
