#include<bits/stdc++.h>
using namespace std;

int n,pd[1001],used[10],tmp[10];

void dfs(int k)
{
	if(k==n+1)
	{
		for(int i=1;i<=n;++i){
		printf("%5d",used[i]); 
	}
	cout<<endl;
	return ;
	}
	
	for(int i=1;i<=n;++i)
	{
		if(!pd[tmp[i]])
		{
			pd[tmp[i]]=1;//剪枝， 
			used[k]=tmp[i];
			dfs(k+1);
			pd[tmp[i]]=0;//做下层循环需要释放这个数 
		}
	}
	
}
 
 int main()
 {
 	cin>>n;
 	for(int i=1;i<=n;++i) cin>>tmp[i];
 	dfs(1);
 	return 0;
 }
