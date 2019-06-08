#include<bits/stdc++.h>
using namespace std;
int xl[8]={0,1,0,-1,1,-1,1,-1};  //12,3,6,9， 
int yl[8]={1,0,-1,0,1,-1,-1,1};
int n;
string s="yizhong";
int walk[105][105];
char maps[105][105];
bool check(int x,int y,int k)
{
	if(((x<=n&&x>=1)&&(y<=n&&y>=1))&&(maps[x][y]==s[k])) return true;
	return false;
}

bool dfs(int x,int y,int d,int k)
{
	if(d==6)
	{
		if(maps[x][y]=='g')
		{
			walk[x][y]=1;
			return true;
		}
		return false;
	}
	//printf("deep:%d   [%d,%d]=%c   \n",d,x,y,maps[x][y]);
	if(check(x,y,d))
	{
	
		//cout<<x<<' '<<y<<endl;
	if(dfs(x+xl[k],y+yl[k],d+1,k))
	{
		
		walk[x][y]=1;
		return true;
	}
	}
	return false;
}
int main()
{
	//freopen("fja.in","r",stdin);
	//freopen("fja.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;++i) scanf("%s",maps[i]+1);//从第一行一列开始，一次性读一行，所以要用%s; 
	
	for(int i=1;i<=n;++i) 
	{
		for(int j=1;j<=n;++j)
		{
			if(maps[i][j]=='y')
			{
				for(int k=0;k<8;++k)
				{
				//	cout<<i<<" "<<j<<"  "<<k<<endl;
					if(dfs(i+xl[k],j+yl[k],1,k)) walk[i][j]=1;
				}
							
			}
			
			
		}
	}
	char cc='*';
	for(int i=1;i<=n;++i)
	{
		for(int j=1;j<=n;++j)
		{
			printf("%c",walk[i][j]?maps[i][j]:cc);
		}
		cout<<endl;
	 } 
	return 0;
}
