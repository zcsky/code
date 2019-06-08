#include<bits/stdc++.h>
using namespace std;
int n,m,dx[5]={0,0,0,1,-1},dy[5]={0,1,-1,0,0};
bool walk[1005][1005];
char pic[1005][1005];
struct num
{
    int x;
    int y;
};

queue<num> q;
bool check(int x,int y,char tmp)
{
    return ((x<=n)&&(x>=1)&&(y<=n)&&(y>=1)&&(walk[x][y]==0)&&(pic[x][y]!=tmp))?true:false;//1.x边界y边界2.走没走过（pic）3. 
}

int  bfs(int x,int y)
{
	int ans=0;
	memset(walk,0,sizeof(walk));
    num t,t1;
    t.x=x;t.y=y;
    q.push(t);
	walk[x][y]=1; 
    while(!q.empty())
    {
    	
        t=q.front();
        q.pop();
		ans++;
		//cout<<sum<<" "<<t.x<<" "<<t.y<<endl;
      	cout<<t.x<<"---"<<t.y<<endl;
        for(int i=1;i<=4;++i)
        {
			t1.x=t.x+dx[i];t1.y=t.y+dy[i];
            if(check(t1.x,t1.y,pic[t.x][t.y])) 
            {	
           // cout<<t1.x<<" "<<t1.x<<endl;
			q.push(t1);
			walk[t1.x][t1.y]=1;
			}	
        }
    }
    return ans;
}
int main()
{
	cin>>n>>m;
	
	for(int i=1;i<=n;++i)
	{
		
		scanf("%s",pic[i]+1);//pic[i]=pic[i][0]  i行首地址，+1=pic[i][1]的地址 
	}
	int x,y;
	for(int i=1;i<=m;++i)
	{
		cin>>x>>y;
		cout<<bfs(x,y)<<endl;
		
	}
	return 0;
 } 
