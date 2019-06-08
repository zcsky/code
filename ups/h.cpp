#include<bits/stdc++.h>
using namespace std;
int n,sum,tot=0,ans[10001][11],tmp[11];

void dfs(int k,int sum)
{
	if(k>10)
	{
		if(sum==n)
		{
		tot++;
		for(int i=1;i<=10;++i) ans[tot][i]=tmp[i];
		}
		return ;
	}
	
	for(int j=1;j<=3;++j)
	{
		if((sum+j)>n) break;
		tmp[k]=j;
		dfs(k+1,sum+j);
		tmp[k]=0;
	}
}
int main()
{
	cin>>n;
	dfs(1,0);
	cout<<tot<<endl;
	for(int i=1;i<=tot;++i)
	{
		for(int j=1;j<=10;++j)
		{
			printf("%d ",ans[i][j]);
		}
		cout<<endl;
	}
	return 0;
 } 
