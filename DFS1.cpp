#include<bits/stdc++.h>
using namespace std;
int n,i,used[13];

bool check(int i,int a)
{
	int sum;
	for(int j=1;j<+n;++j) sum+=used[j];
	return sum+a<=n?true:false;
}
void dfs(int k)
{
	cout<<k<<endl;
	if(k<=n/2)
	{
		cout<<used[1];
		for(int j=2;j<=i;++j)
		{
			cout<<"+"<<used[i];
		}
	} 
	
	for(i=k;i<=n-1;++i)
	{
		if(check(i,i))
		{
			
			used[k]=i;
			dfs(k+1);
			used[i]=0;
		}
	}
}

int main()
{
	int n;
	cin>>n;
	dfs(1);
	return 0;
}
