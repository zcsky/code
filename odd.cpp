#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,ans;
	cin>>n;
	string s;
	for(int i=0;i<n;++i)
	{
		cin>>s;
		ans=s.size();
		//cout<<ans<<"-----"<<s[ans-1]<<endl;
		if((s[ans-1]-'0')%2) cout<<"odd"<<endl;
		else cout<<"even"<<endl;
	}
	return 0;
 } 
