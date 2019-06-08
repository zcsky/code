#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a,b;
	cin>>a>>b;
	int la,lb,sum[505]={0},i=0;
	la=a.size();
	lb=b.size();
	
	while(la-->0||lb-->0)
	{
	//	--la;--lb;
		int tmp=(la<0?0:a[la]-'0')+(lb<0?0:b[lb]-'0');
		tmp+=sum[i];
		sum[i]=tmp%10;
		sum[++i]=tmp/10;
	} 
	i=(sum[i]==0?i-1:i);
	while(i>=0)
	{
	cout<<sum[i--];
	}
	return 0;
}
