#include<bits/stdc++.h>
using namespace std;
int n,dx[5]={0,0,0,1,-1},dy[5]={0,1,-1,0,0},pic[105][105];

bool check(int x,int y)
{
	return (((x<=n&&(x>=1))&&(y<=n)&&(y>=1))&&(pic[x][y]==0))?true:false;
}

void dfs(int x,int y)
{
	pic[x][y]=3;
	for(int i=1;i<=4;++i)
	{
		if(check((x+dx[i]),(y+dy[i])))
		{
			//cout<<x+dx[i]<<"---"<<y+dy[i]<<endl;
			dfs((x+dx[i]),(y+dy[i]));	
		}
	}
	return ;
}
int mian()
{
	cin>>n;
	for(int i=1;i<=n;++i)
	{
		for(int j=1;j<=n;++j) cin>>pic[i][j];
	}
	
	for(int i=1;i<=n;++i)
	{
		for(int j=1;j<=n;++j)
		{
			if(((i==1)&&(j<=n))||((i==n)&&(j<=n))||((j==1)&&(i<=n))||((j==n)&&(i<=n)))
			{
				
				if(pic[i][j]==0)
				{
					//cout<<i<<' '<<j<<endl;
					dfs(i,j);	
				}
							
			}
		}
	}
	
	for(int i=1;i<=n;++i)
	{
		for(int j=1;j<=n;++j)
		{
			if(pic[i][j]==3) cout<<0<<" ";
			if(pic[i][j]==1) cout<<1<<" ";
			if(pic[i][j]==0) cout<<2<<" ";
		}
		cout<<endl;
	}
	return 0;
  }  
