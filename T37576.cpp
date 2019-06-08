#include<iostream>
using namespace std;

int gcd(int a,int b)
{
	return (b==0)?a:gcd(b,a%b);
}

int main()
{
	long long n,lcm=0;
	cin>>n;
    for(int i=1;i<=n;++i)
	{
		lcm+=i*(n/gcd(i,n));
	//	cout<<gcd(i,n)<<"+"<<" ";	
	}
	cout<<lcm;
	return 0;
}
