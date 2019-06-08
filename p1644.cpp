#include <bits/stdc++.h>
using namespace std;
int bin[1000005];
int a,b,p;
void init()
{
	for(int i=a;i<=b;++i) bin[i]=i;
	return ;
}

bool is_zhi(int n)
{
	if(n<2) return false;
	for(int i=2;i<=sqrt(n);++i)
	{
		if(n%i==0) return false;
	}
	return true;
}
int find(int i)
{
	if(bin[i]==i) return i;
	return bin[i]=find(bin[i]);
}
void unicn(int x,int y)
{
		bin[find(x)]=find(y);
	return ;
}
void check(int s)
{
	//cout<<"--------"<<s<<endl;
	int l=(double)a/s==a/s?a/s:a/s+1,r=b/s,tmp=s*l;
//	cout<<s<<"   "<<l<<"------"<<r<<endl;
	for(int i=l;i<=r;++i)
	{
		unicn(tmp,s*i);
		tmp=s*i;
	}
	return ;
}

int main() {
	//freopen("bin.in","r",stdin);
	//freopen("bin.out","w",stdout);
	cin>>a>>b>>p;
	 init();
	 for(int i=p;i<=b;++i)
	 {
	 	//cout<<1;
	 	if(is_zhi(i))
		 {
		 //cout<<i<<endl;
		 check(i);
		 }

	 }
	 int ans=0;
	 for(int i=a;i<=b;++i)
	 {
	 	if(bin[i]==i) ans++;
	 }
	 cout<<ans;

	return 0;
}
