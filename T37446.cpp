#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n+1];
	for(int i=1;i<=n;++i)
	{
		cin>>a[i];
	}
	sort(a,a+n+1T37446 );
	int n1,tmp;
	cin>>n1;
	for(int i=1;i<=n1;++i)
	{
		cin>>tmp;
		cout<<a[n-tmp+1]<<endl;
	}
	return 0;
}
