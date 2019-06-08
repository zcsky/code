#include<bits/stdc++.h>
using namespace std;
#define MAX 1000000000
bool books[MAX];

void iszhi()
{
	books[1]=books[0]=0;
	for(int i=2;i<=sqrt(MAX);++i)
	{
	    if(books[i]==0) continue;
		for(int j=2;j*i<=MAX;++j)
		{
			books[i*j]=0;
		}
	}
	return ;
}
int main()
{
	memset(books,1,sizeof(books));
	iszhi();
	int n;
	scanf("%d",&n);
	int tmp1[2];
	for(int i=1;i<=n;++i)
	{
		scanf("%d%d",tmp1[0],tmp1[1]);
		for(int j=tmp1[0];j<=tmp1[1];++j)
		{
			if(books[j]) printf("%d\n",&j);
		}
		cout<<endl;
	}

	return 0;
}
