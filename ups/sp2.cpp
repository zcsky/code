#include<bits/stdc++.h>
using namespace std;
bool zhi(int n)
{
    for(int i=2;i*i<=n;i++) if(n%i==0) return false;
    return true;
}
int main() 
{
	int n,x,y,i,j;
    cin>>n;
    for(i=1;i<=n;i++)
    {
	scanf("%d%d",&x,&y);
    for(j=x;j<=y;j++) if(zhi(j)&&j!=1)
    printf("%d\n",j);
    //printf("\n");
	}
    return 0;
}
