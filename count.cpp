#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,b[200005],t[200005],a[101],sum=0;
	memset(b,0,sizeof(b));
	memset(t,0,sizeof(t));
	cin>>n;
	for(int i=1;i<=n;++i)
	{
		cin>>a[i];
		b[a[i]]=1;
	}
	
	for(int i=1;i<=n;++i)
	{
		for(int j=i+1;j<=n;++j) t[a[i]+a[j]]++;
	}
	
	for(int i=1;i<=200005;++i)
	{
		if((b[i])&&(t[i]))
		{
		sum++;
		//cout<<i<<"-----"<<sum<<endl;
	}
	}
	cout<<sum;
	return 0;
}
