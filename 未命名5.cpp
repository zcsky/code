#include <bits/stdc++.h>
using namespace std;

int main() {
	int s[1005];
	long long n;
	cin>>n;
	long long sum=0;
	for(int i=1;i<=n;++i)
	{
		cin>>s[i];
		sum+=s[i]-min(s[i],s[i-1]);
	}
	cout<<sum;
	return 0;
}

