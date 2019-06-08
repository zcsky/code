#include <bits/stdc++.h>
using namespace std;
int n,m,p;
int a[5005];
void initc()
{
	cin>>n>>m>>p;
	for(int i=1;i<=n;++i)
	{
		   a[i]=i;
	}
	return ;
}
int find_dg(int i)
{
	if(a[i]==i) return i;
	return a[i]=find_dg(a[i]);
}
void unicn(int x,int y)
{
	if(find_dg(x)==find_dg(y)) return ;
		a[find_dg(x)]=find_dg(y);
	return ;
}

int main() {
	freopen("123.in","r",stdin);
	//freopen(".out","w",stdout);
	initc();
	for(int i=1;i<=m;++i)
	{
		int x,y;
		cin>>x>>y;
		unicn(x,y);
	}
	for(int i=1;i<=p;++i)
	{
		int x,y;
		cin>>x>>y;
		if(find_dg(x)==find_dg(y)) cout<<"Yes"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}
