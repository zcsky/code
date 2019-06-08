#include<bits/stdc++.h>
using namespace std;
//pragma GCC optimize("O1")
//pragma GCC optimize("O2")
//pragma GCC optimize("O3")
#define MAXN 20005
bool num[20005];
void is_zhi()
{
	for(int i=2;i<=sqrt(MAXN);++i)
	{
		for(int j=2;i*j<=MAXN;++j)
		num[i*j]=false;
	}
}
int main()
{
	//pragma GCC optimize("O1")
	//pragma GCC optimize("O2")
	//pragma GCC optimize("O3")
	memset(num,1,sizeof(num));
	is_zhi();
	int ans=1;
	for(int i=2;i<=20000;++i)
	{
		if(num[i])
		{
		cout<<i<<',';
		} 
	}
	return 0;
}
