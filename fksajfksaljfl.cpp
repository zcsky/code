#include <bits/stdc++.h>
using namespace std;
int a[200001],n,m,i1,p;

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
	return a[i]=find_dg(a[i]);//不断寻找大BOSS，然后对沿路上的小弟进行更值，完成查找与路径压缩
}
int find(int i)
{
	int son,i1=i;
	while(i!=a[i]) i=a[i];
	son=i;
	while(a[i1]!=son)
	{
		i1=a[i1];
		a[i1]=son;
	}
	return son;
}
void unicn(int x,int y)
{
		a[find_dg(x)]=find_dg(y);
	return ;
}
int main() {
	freopen("123.in","r",stdin);
	//freopen("bin.out","w",stdout);
    int x,y;
    initc();
    for(int i=1;i<=m;++i)
    {
		cin>>x>>y;
			unicn(x,y);
	}
	for(int i=1;i<=p;++i)
    {
		cin>>x>>y;
			if(find_dg(x)==find_dg(y))
			{
			cout<<"Yes"<<endl;
			}
			else{
			//cout<<find(x)<<"---"<<find(y)<<endl;
			cout<<"No"<<endl;}
	}
	return 0;
}
