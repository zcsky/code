#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,n1,sum=0;
	char tmp[105];
	cin>>n;
	map <string,int> dict;
	string s[n+1];
	for(int i=1;i<=n;++i)
	{
		//tmp.resize(105)
		scanf("%s",tmp);
		dict[(string)tmp]++;
		//s[i]=(string)tmp;	
	}
	
	cin>>n1;	
	for(int i=1;i<=n1;++i)
	{
		scanf("%s",tmp);
		sum+=dict.count((string)tmp);
	}	
	cout<<sum;
	return 0;
}
