#include<bits/stdc++.h>
using namespace std;
int num[21],ans=0,n;
bool iszhi(int n)
{
    for(int i=2;i*i<=n;++i)
    {
    	if(n%i==0) return false;
	}
    return true;
}

void dfs(int k,int sum,int l)
{
	if(k==0)
	{
		if(iszhi(sum))
		{
		ans++;
		//cout<<sum<<" ";
		}
		//sum=0;
		return ; 
	}
	for(int i=l;i<=n;++i) dfs(k-1,sum+num[i],i+1);
	return ;
}
int main()
{
	freopen("p1036.in","r",stdin);
	//freopen("p1036.out","w",stdout);
	int k;
	cin>>n>>k;
	for(int i=1;i<=n;++i) cin>>num[i];
	dfs(k,0,1);
	cout<<ans;
	return 0;
 } 
