#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ans=0;
    cin>>n;
    int num[n+1];
    int p=0;
//	cout<<n<<endl;
    for(int i=1;i<=n;++i)
    {
        cin>>num[i];
        p+=num[i];
        //cout<<p<<" ";
    }
	p/=n;
//	cout<<p<<endl;
    for(int i=1;i<=n;++i)
    {
        num[i]=num[i]-p;
    }

    for(int i=1;i<n;++i)
    {
    	cout<<num[i]<<endl;
        if((num[i]==0&&num[i+1]==0)||(num[i]==0&&num[i-1]==0)) continue;
        else
        {
            num[i+1]=num[i+1]+num[i];
            num[i]=0;
            ans++;
          // printf("%d~~%d\n",i,i+1);
        }
    }
    cout<<ans;
    return 0;
}
