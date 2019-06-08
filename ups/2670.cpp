#include<bits/stdc++.h>
using namespace std;
char  maps[105][105];
int   walk[105][105];
int xl[8]={0,1,0,-1,1,-1,1,-1};  //12,3,6,9£¬ 
int yl[8]={1,0,-1,0,1,-1,-1,1};


 
void with(int x,int y)
{
    for(int i=0;i<8;++i)
    {
        walk[x+xl[i]][y+yl[i]]+=(maps[x+xl[i]][y+yl[i]]!='*'?1:0);
    }
    return ;
}

int main()
{
    int n,m;
    cin>>n>>m;
    char tmp;
    for(int i=1;i<=n;++i)
      scanf("%s",maps[i]+1);
	  
       
    

    for(int i=1;i<=n;++i)
    {
        for(int j=1;j<=m;++j)
        {
            if(maps[i][j]=='*'){
			walk[i][j]=-1;
			with(i,j);
        }
    }

    for(int i=1;i<=n;++i)
    {
        for(int j=1;j<=m;++j)
        {
            if(walk[i][j]==-1) cout<<"*";
            else cout<<walk[i][j]; 
        }
        cout<<endl;
    }
    return 0;
 } 
