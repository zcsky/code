#include <bits/stdc++.h>
using namespace std;
int maps[1000][100],mx=0,x,y;
int ax[5]={0,0,0,1,-1};
int ay[5]={0,1,-1,0,0};
void dfs(int n,int ans)
{
	int c;
	bool flag=false;
	for(int i=1;i<=n;++i)
	{
		if(maps[x+ax[i]][y+ay[i]]>n&&maps[x+ax[i]][y+ay[i]]-n<c)
		{
			c=maps[x+ax[i]][y+ay[i]]-n;
			x+=ax[i];y+=ay[i];
			n=maps[x+ax[i]][y+ay[i]];
			flag=true;
		}
	}
	if(n==mx||!flag)
	{
		cout<<ans;
		return ;
	}
	dfs(n,ans+1);
}
int main() {
	int r,c;
	cin>>r>>c;
	int maps[r+1][c+1];
	for(int i=1;i<=r;++i)
	{
		for(int j=1;j<=c;++j)
		{
			cin>>maps[i][j];
			if(maps[i][j]==1) x=i,y=j;
			if(maps[i][j]>mx) mx=maps[i][j];
		}
	 }
	dfs(1,0);  
		return 0;
}

