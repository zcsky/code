#include<bits/stdc++.h>
using namespace std;
int f[1001];
int main(){
	int f[1001];
	memset(f,0,sizeof(f));
	//f[1]=1;
	//f[2]=2;
	int n;
	cin>>n;
	f[n]++;
	for(int i=1;i<=n/2;++i)
	{
		f[i]++;
		for(int j=1;j<=i/2;++j)
		{
			f[i]+=f[j];
		}
		f[n]+=f[i];
	}
	cout<<f[n];
    return 0;
}
