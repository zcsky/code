#include<bits/stdc++.h>
using namespace std;

int main()
{
	int num[3]={1,3,2};
	sort (num,num+3);
	do
	{
		for (int i=0;i<3;++i)  cout<<num[i]<<" ";
		cout<<'\n';
	}while (next_permutation(num,num+2));
	
	return 0;
	
	
}
