#include<bits/stdc++.h>
using namespace std;
int x;
int check(int i)
{
	if((i*i)==x) return 1;
	if((i*i)<x)
	{
		int j=i+1;
		if((j*j)>x) return 1;
		if((j*j)==x) return 3;
		return 2;
	}
	return 0;
}

int main()
{
	cin>>x;
	int l=1,r=x,mid;
	while(l<=r)
	{
		mid=l+(r-l+1)/2;
		if(check(mid)==1)
		{
			cout<<mid;
			return 0;
		}
		if(check(mid)==2) l=mid+1;
		if(check(mid)==3)
		{
			cout<<mid+1;
			return 0;
		}
		else
		{
			r=mid-1;
		}
		//cout<<l<<' '<<r<<endl;
	}
	return 0;
 } 
