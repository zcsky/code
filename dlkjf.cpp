#include<bits/stdc++.h>
using namespace std;
int n,x=0,y=0;
int xl[4]={0,0,1,-1},yl[4]={1,-1,0,0};
map<int,int> se;
int main()
{
	char c;
	se.insert(0,0);
	string s="UDLR";
	cin>>n;
	for(int i=1;i<=n;++i)
	{
		cin>>c;
		for(int i=0;i<4;++i)
		{
			if(c==s[i])
			{
				x+=xl[i];
				y+=yl[i];
				break;
			}
		}
		se.insert(x,y);
	}
	cout<<se.size();
	return 0;
}
