#include<bits/stdc++.h>
using namespace std;
#define MAX 1000000000
int main()
{
	bool books[MAX];
//	freopen("sum.in","r",stdin);
//	freopen("sum.out","w",stdout);
	memset(books,1,sizeof(books));
	books[1]=books[0]=0;
	cout<<MAX;
	for(int i=2;i<=sqrt(MAX);++i)
	{
	    if(books[i]==0) continue;
		for(int j=2;j*i<=MAX;++j)
		{
			books[i*j]=0;
		}
		printf("%d,",i);
	}
return 0;
}
