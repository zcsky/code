#include<iostream>
#include<string>
using namespace std;
int dx[8] = {-2,-1,1,2,2,1,-1,-2},dy[8] = {-1,-2,-2,-1,1,2,2,1};
bool map[401][401];
int talks[401][401],xl,yl,n,m;

void dfs(int x,int y,int s)
{
    
    talks[x][y]=s;
    printf("x=%d  y=%d  tep=%d\n",x,y,s);
    for(int i=0;i<8;++i)
    {
        //x+dx[i]<=n&&x+dx[i]>=1&&y+dy[i]<=m&&y+dy[i]>=1//
        
        // 1\±ß½ç  nx [1,n]  ny [1,m]
		// 2\talks[nx][ny] =-1  ||  talks[nx][ny]>s+1;
		   
		int ny=y+dy[i];
		int nx=x+dx[i];
		if((nx<=n&&nx>=1)&&(ny<=m&&ny>=1)&&(talks[nx][ny]==-1||talks[nx][ny]>s+1)) dfs(nx,ny,sum+1);
    }
}

int main()
{
    cin>>n>>m>>xl>>yl;
    memset(talks,,sizeof(talks));
    dfs(xl,yl,0);
    for(int i=1;i<=n;++i)
    {
        for(int j=1;j<=m;++j)
        {
            printf("%d",talks[i][j]);
        }
        printf("\n");
    }
    return 0;
}
