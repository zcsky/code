#include<bits/stdc++.h>
using namespace std;
int ans=0,k,n;

void dfs(int sum,int deep,int x) //ǰ����ĺͣ�Ŀǰ�Ĳ������ϻ��ù����� 
{
	//printf("deep:%d-----x:%d-----sum:%d-----ans:%d\n",deep,x,sum,ans);
	if(deep==k)
	{
		if(sum==n) ans++;
		return ;
	}
	for(int i=x;i<=n-sum;++i)
	{
		if(sum+i<=n) dfs(sum+i,deep+1,i);
	}
}

int main()
{
	cin>>n>>k;
	dfs(0,0,1);
	cout<<ans;
	return 0;
 } 
