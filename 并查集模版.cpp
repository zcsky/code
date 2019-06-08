#include <bits/stdc++.h>
using namespace std;
int a[200001],n,m,i1;

void initc()
{
	cin>>n>>m;
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
	//freopen("bin.in","r",stdin);
	//freopen("bin.out","w",stdout);
    int z,x,y;
    initc();
    for(int i=1;i<=m;++i)
    {
		cin>>z>>x>>y;
		if(z==1)
		{
			unicn(x,y);
			//a[x]=find(y);
			//cout<<a[x]<<" "<<a[y]<<endl;
		}
		if(z==2)
		{
			if(find_dg(x)==find_dg(y))
			{
			cout<<"Y"<<endl;
			}
			else{
			//cout<<find(x)<<"---"<<find(y)<<endl;
			cout<<"N"<<endl;}
		}
	}
	return 0;
}
