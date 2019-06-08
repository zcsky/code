#include <bits/stdc++.h>
using namespace std;
int tree[500005],n,m;
int lowbit(int i)
{
	return i & -i;
}
void add(int p,int k)
{
	while(p<=n)
	{
		tree[p]+=k;
		p+=lowbit(p);
	}
	return ;
}
int ask(int p)
{
	int sum=0;
	while(p>0)
	{
		sum+=tree[p];
		p-=lowbit(p);
	}
	return sum;
}
int change(int l,int r)
{
	return ask(r)-ask(l-1);
}
int main() {
	//freopen("p3368.in","r",stdin);
	//freopen(".out","w",stdout);
	int t=0,a;
	cin>>n>>m;
	for(int i=1;i<=n;++i)
	{
		cin>>a;
		add(i,a-t);
		t=a;
	}
	int it;
	for(int i=1;i<=m;++i)
	{
		cin>>it;
		if(it==1)
		{
			int x,y,k;
			cin>>x>>y>>k;
			add(x,k);
			add(y+1,k);
		}
		if(it==2)
		{
			int x;
			cin>>x;
			cout<<change(1,x)<<endl;
		}
	}
	return 0;
}

