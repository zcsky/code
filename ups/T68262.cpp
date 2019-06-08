#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,t;
	cin>>n;
	int sum[n+1];
	memset(sum,0,sizeof(sum));
	for(int i=1;i<=n;++i)
	{
		cin>>t;
		while(t>=5)
		{
			if(t-5>=0)
			{
				if(t-10>=0)
				{
					if(t-17>=0)
					{
						t=t-17;
						sum[i]+=12;
						continue;
					}
					else{
						t=t-10;
						sum[i]+=7;
						continue;
					}
				}
				else{
					t=t-5;
					sum[i]+=2;
					continue;
				}
			}
		}
	} 
	for(int i=1;i<=n;++i)
	{
		cout<<sum[i]<<endl;
	}
	return 0;
	
}
