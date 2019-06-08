#include<bits/stdc++.h>
using namespace std;
map<int, int> num;
int dfs(int t,int k,int z)
{
    //cout <<"deep:"<<k++<<"  "<<t<<"-"<<z<<endl;
    if(num.count(t)) return num[t];
    if (t<5) return 0;
    if (t<10) return 2;
    if (t<17) return max(dfs((t-10),k,7)+7,dfs((t-5),k,2)+2);
    if (t>=17) 
    {
            int ans=max(dfs((t-10),k,7)+7,dfs((t-5),k,2)+2);
            num[t]=max(ans,dfs(t-17,k,17)+12);
    }
    return num[t];
}

int main()
{
	long long n,n1;
	int ans=0;
	cin>>n1;
	for(int i=1;i<=n1;++i)
	{
		cin>>n;
		ans=0;
		if(n>=600)
		{
			while(n>=17)
			{
				n-=17;
				ans+=12;
			}
			if(n>=10)
			{
				n-=10;
				ans+=7;
			}
			if(n>=5)
			{
				n-=5;
				ans+=2;
			}
			cout<<ans<<endl;
			continue;
		}
		else
		{
			cout<<dfs(n,1,0)<<endl;
			continue;
		}
	}
	return 0;
 } 
