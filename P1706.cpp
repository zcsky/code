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
			pd[tmp[i]]=1;//��֦�� 
			used[k]=tmp[i];
			dfs(k+1);
			pd[tmp[i]]=0;//���²�ѭ����Ҫ�ͷ������ 
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
