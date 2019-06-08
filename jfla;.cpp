#include<iostream>
#include<queue>
#include<cstdio>
using namespace std;
struct num
{
    int x,y;
};
int n,m;
int xl[4]={0,0,1,-1},yl[4]={1,-1,0,0};
char maps[105][105];
bool check(int x,int y)
{
    if(((x>=1&&x<=m)&&(y>=1&&y<=n))&&((maps[x][y]>='1')&&(maps[x][y]<='9'))) return true;
    return false;
}

void bfs(int x,int y)
{
  //  printf("x:%d    y:%d\n",x,y);
    num t,t1;
    t.x=x;t.y=y;
    queue<num> q;
    q.push(t);
    while(!q.empty())
    {
        t=q.front();
        q.pop();
        maps[t.x][t.y]='0';
        for(int i=0;i<4;++i)
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

void dfs(int x,int y)
{
	maps[x][y]='0';
	for(int i=0;i<4;++i)
	{
		if(check(x+xl[i],y+yl[i])) dfs(x+xl[i],y+yl[i]);
	}
	return ;
}


int main()
{
    int ans=0;
    cin>>m>>n;
    for(int i=1;i<=m;++i) scanf("%s",maps[i]+1);
    for(int i=1;i<=m;++i)
    {
        for(int j=1;j<=n;++j)
        {
            if((maps[i][j]>='1')&&(maps[i][j]<='9'))
            {
                ans++;
                dfs(i,j);
            }
        }
    }
    cout<<ans;
    return 0;
}
