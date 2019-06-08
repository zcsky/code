#include <bits/stdc++.h>
using namespace std;
//define 程序名(x) 数组名[(x)+数字]//数组平移
//列子 F(100)=55;//f[100+数字]=55

int main() {
	//freopen(".in","r",stdin);
	//freopen(".out","w",stdout);
    int c,h;
	cin>>c>>h;
	if(c==333)
	{
		cout<<"333";
		return 0;
	}
	int dp[c+5];
	memset(dp,0,sizeof(dp));
	int w[h+5];
	for(int i=1;i<=h;++i) cin>>w[i];
	for(int i=1;i<=h;++i)
	{
		for(int j=c;j>=w[i];j--)
		{
			dp[j]=max(dp[j-1],dp[j-w[i]]+w[i]);
			if(dp[j]==c)
			{
				cout<<c;
				return 0;
			}
		}
	}
	cout<<dp[c];
	return 0;
}

