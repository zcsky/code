#include<bits/stdc++.h>
#include<string>
using namespace std;
typedef long long ll;
ll chenji(int a,int b)
{
	if(b==0) return 1;
	if(b==1) return a;
	ll tmp=a;
	for(int i=2;i<=b;++i) a=a*tmp;
		return a;
}

ll zhuan(int jz,int num)
{
	ll i=0,sum=0;
	while(num)
	{
		sum+=(num%10)*chenji(jz,i++);
		num=num/10;
	}
	return sum;
}

bool ishu(ll n)
{
	string s=to_string(n);
	cout<<s;
	int l=s.size(),r=0;
	while(l<r)
	{
		if(s[l++]!=s[r++]) return false;
	}
	return true;
}
int main()
{
	int n;
	cin>>n;
	if(ishu(n)) cout<<"yes";
	else cout<<"no";
	return 0;
}
