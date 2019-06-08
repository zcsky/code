#include <bits/stdc++.h>
using namespace std;
const int maxn=5005;
string s,t;
int f[maxn][maxn];
int main() {
	//freopen(".in","r",stdin);
	//freopen(".out","w",stdout);
	cin>>s;
	string tmp=s;
	reverse(s.begin(),s.end());
	t=s;
	s=tmp;
	int ls=s.length(),lt=t.length();
	for(int i=1;i<=ls;++i)
	{
		for(int j=1;j<=lt;++j)
		{
			if(s[i-1]==t[j-1])
			{
				f[i][j]=f[i-1][j-1]+1;
			}
			else
			{
				f[i][j]=max(f[i-1][j],f[i][j-1]);
			}
		}
	}
	cout<<ls-f[ls][lt]<<endl;
	return 0;
}
//ABACDB
//BADBCB
