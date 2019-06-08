#include<iostream>
#include<math.h>
using namespace std;

bool Iszhi(unsigned long int n)
{
	if(n<2) return false;
	for(int i=2;i<=sqrt(n);++i)
	{
		if(n%i==0) return false;
	}
	return true;
}
int main()
{
	unsigned long  sum,l,r,tmp,n,i=1;
	cin>>n>>l>>r;
	for(;i<=n;++i)
	{
		cin>>tmp;
		if((i>=l)&&(i<=r)) sum+=tmp;
	}
	if(Iszhi(sum)) cout<<"No"<<endl<<sum;
	else cout<<"Yes"<<endl<<sum;
	return 0; 
 } 
