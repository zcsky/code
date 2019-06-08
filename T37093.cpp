#include<iostream>
#include<math.h>
using namespace std;
bool Iszhi(int n)
{
	int i=2;
	if(n<=1) return 0;
	for(;i<=sqrt(n);++i){
		if(n%i==0) return 0;
	}	
	return 1;
}

int main()
{
	//for(int i=2;i<=100;++i) if(Iszhi(i)) cout<<i<<endl;
	int n,ans,flag=0;
	cin>>n;
	if(Iszhi(n))
	{
	 cout<<n;
	 return 0;
	}
	for(int i=2;i<n;++i)
	{
		ans=0;
		while((n%i==0)&&(Iszhi(i)))
		{
			n=n/i;
			ans++;
			flag++;
		}
		if((flag==ans))
		{                     
		if(ans=1) cout<<i;
		if(ans>1) cout<<"("<<i<<"^"<<ans<<")";	                               //
		}
		else
		{                     
		if(ans==1) cout<<"*"<<i;
		if(ans>1) cout<<"*("<<i<<"^"<<ans<<")";	                               //
		}
		//if((ans>1)&&(flag==ans)) cout<<"("<<i<<'^'<<ans<<")";
		//else if() cout<<"*"<<"("<<i<<'^'<<ans<<")";
		//if(ans==1) cout<<i<<"*";
		
	}
    if(n>1) cout<<"*"<<n;
	return 0;
}
