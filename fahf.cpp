#include<bits/stdc++.h>
using namespace std;
int n,m;

char maps [105][105];
struct num
{
	int x,y;
};

int xl[8]={0,1,0,-1,1,-1,1,-1};   
int yl[8]={1,0,-1,0,1,-1,-1,1};
bool check(int x,int y)//是不是在边界内，是不是@ 
{
	if(((x<=n&&x>=1)&&(y<=m&&y>=1))&&(maps[x][y]=='@')) return true;
	return false; 
}

void bfs(int x,int y)
{
    num t,t1;
    t.x=x;t.y=y;
	queue<num> q;
    q.push(t);
    while(!q.empty())
    {
        t=q.front();
        q.pop();
        maps[t.x][t.y]='*';
        for(int i=0;i<8;++i)
        {
            if(check(t.x+xl[i],t.y+yl[i]))
            {
                t1.x=t.x+xl[i];t1.y=t.y+yl[i];
                q.push(t1);
            }
            
        }
    }
    return ;
}

int main()
{
//	freopen("572.in","r",stdin);
//	freopen("572.out","w",stdout);
	int ans=0;	
	while(scanf("%d%d",&n,&m)==2)
	{
		if(n==0&&m==0)return 0;
		
		for(int i=1;i<=n;++i) scanf("%s",maps[i]+1);
		
		
		for(int i=1;i<=n;++i)
		{
			for(int j=1;j<=m;++j)
			{
			//	cout<<maps[il][j];
				if(maps[i][j]=='@') {
					ans++;
					bfs(i,j);
				}
			}
			cout<<endl;
		}
		cout<<ans<<endl;
		ans=0;
	}
	return 0;
 } 
