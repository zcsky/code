#include<bits/stdc++.h>
using namespace std;

int main()
{
	int books[19];
	long long n,sum=0;
	cin>>n;
	
	for(int i=1;i<=18;i++)
	{
	books[i]=i*i*i*i;
	cout<<books[i]<<endl;
	} 
	
	
	
	while(n>0)
	{
		int i=18;
		while(books[i]>n) {i--;}
		printf("%d-%d=%d--%d\n",n,books[i],n-books[i],sum);
		n-=books[i];
		sum++;
    }
    //cout<<sum;
}
