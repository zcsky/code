#include <bits/stdc++.h>
using namespace std;
int map[1005][1005];
int sum[1005][1005];
int main() {
	//freopen(".in","r",stdin);
	//freopen(".out","w",stdout);
    int r;
    cin>>r;
    int map[r+5][r+5];
	int sum[r+5][r+5];
    for(int i=1;i<=r;++i)
    {
    	for(int j=1;j<=i;++j)
    	{
    		cin>>map[i][j];
			sum[i][j]=map[i][j];
		}
	}
	for(int i=r-1;i>=1;i--)
	{
		for(int j=1;j<=i;++j)
		{
			sum[i][j]+=max(sum[i+1][j],sum[i+1][j+1]);
		//	printf("sum[%d][%d]=%d\n",i,j,sum[i][j]);
		}
	}
	cout<<sum[1][1];
	return 0;
}

