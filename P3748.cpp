#include<stdio.h>
#include<iostream>
#include<cstring>
using namespace std;

bool pd[25];
int used[25],n,r;

void dfs(int k,int l)
{
    if(k>r)
    {
        for(int i=1;i<=r;++i) printf("%3d",used[i]);
        cout<<endl;
        return ;
    }
    

    for(int i=used[k-1];i<=n;++i)
    {
        if((!pd[i])&&(i>=l))
        {
            //cout<<"deep--"<<k<<"  i="<<i<<endl;
            pd[i]=1;
            used[k]=i;
            dfs(k+1,l=i+1);
            pd[i]=0;
        }
    }
}

int main()
{
    memset(pd,0,sizeof(pd));
    memset(used,0,sizeof(used));
    cin>>n>>r;
    dfs(1,1);
    return 0;
}
