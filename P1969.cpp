#include<bits/stdc++.h>
using namespace std;
int a[10005];
int n;
void djm(int q,int s)
{
// find min
	for(int i=q;i>=s;i--) a[i]--;
// ans+min;
	return ;
 } 
 
 bool jian(int n)
 {
 	for(int i=0;i<=n;++i)
 	{
 		if(a[i]!=0) return true;
 		else return false;
	 }
 }
 
 int main()
 {
 	memset(a,0,sizeof(a));
 	int ans=0;
 	
 	int max[1] [0];
 	max[0] [0]=max[1] [0]=0;
 	cin>>n;
 	for(int i=1;i<=n;++i) cin>>a[i]; 
 	
 	
 	while(jian(n))
 	{
		int i,j=1,sum=0;
 		for(i=1;i<=n;++i)
 		{
 			if(a[j]==0) j=i;
 			if(a[i]!=0) sum++;
 			else if(sum>=(max[0] [0]+max[1] [0]))
 			{
			ans++;
			djm(i,j);
			}
		cout<<j<<"------"<<i<<"-------"<<max[0] [0]<<"------"<<max[1] [0];
		 }
	 }
	 cout<<ans;
 	return 0;
 }
