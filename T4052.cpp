#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n+1];
	for(int i=0;i<n;++i)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	if(n%2==0) cout<<a[n/2];
	else cout<<a[n/2];
	return 0;
}
