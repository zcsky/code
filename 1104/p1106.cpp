#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin>>s;
	int m;
	cin>>m;
	int n=s.size();
	int a[n+1];
	m=n-m;
	for(int i=0;i<n;++i)
	{
		a[i]=s[i]-'0';
	 } 
	 sort(a,a+n);
	 bool flag=true;
	 for(int i=0;i<m;++i)
	 {
	 	if(a[i]==0&&flag)
	 	{
	 		falg=false;
		 }
	 	cout<<a[i];	
	 }
	return 0;
}

