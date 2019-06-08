#include<bits/stdc++.h>
using namespace std;
int main()
{
	int m,n,k;
	cin>>n>>m;
	char maps[n+1][m+1];
	memset(maps,0,sizeof(maps));
	for(int x=0;x<n;++x)
	{
		for(int y=0;y<m;++y)
		{
			cin>>maps[x][y]; 
		//	cout<<maps[x][y]<<x<<"----"<<y<<endl;	
		}
	}
	cin>>k;
	int xl,yl;
	for(int i=1;i<=k;++i)
	{
		cin>>xl>>yl;
		if(maps[xl-1][yl-1]=='1')
		{
			cout<<i;
			//cout<<xl<<"---"<<yl<<endl;
			return 0;
		}
	}
	cout<<"Good Game.";
	return 0;
}
