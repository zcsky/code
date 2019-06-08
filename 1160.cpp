#include <bits/stdc++.h>
#define maxn 2000005
using namespace std;

int main()
{
	long long a[maxn][5],n,m,x,y;
    cin>>n;
    a[1][1]=1;
    long long h=1;
    for(int i=2;i<=n;i++)
    {
        cin>>x>>y;
        if(y==0)
        {
            a[i][1]=i;
            a[a[x][0]][2]=i;
            a[i][2]=x;
            a[i][0]=a[x][0];
            a[x][0]=i;
            if(x==h)h=i;
        }
        else
        {
            a[i][1]=i;
            a[i][2]=a[x][2];
            a[a[x][2]][0]=i;
            a[x][2]=i;
            a[i][0]=x;
        }
    }
    cin>>m;
 
    while(m--)
    {
        cin>>x;
        if(a[x][1]!=0)
        {
            a[x][1]=0;
            a[a[x][0]][2]=a[x][2];
            a[a[x][2]][0]=a[x][0];
            n--;
            if(a[x][1]==h)h=a[x][0];
        }
    }
    long long i=0;
    while(i < n)
    {
        i++;
        if(a[h][1])
            cout<<a[h][1]<<" ";
        h=a[h][2];
    }
    cout<<endl;
    return 0;
}
