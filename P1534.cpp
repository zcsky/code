#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("P1534.in","r",stdin);
	freopen("P1534.out","w",stdout);
	long long n,a,b,he=0,sum;
	cin>>n;
	for(int i=1;i<=n;++i)
	{
		cin>>a>>b;
		sum=sum+a+b-8;
		he+=sum;
	}
	cout<<he;
	return 0;
}
//26
