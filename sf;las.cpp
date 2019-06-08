#include<bits/stdc++.h>
using namespace std;
int main()
{
	unsigned long long n,f1,f2,f3;
	f1=f2=1;
	cin>>n;
	for(int i=2;i<=n;++i)
	{
		f3=f1+f2;
		f1=f2;
		f2=f3;
	}
	cout<<f3;
	return 0;
}
