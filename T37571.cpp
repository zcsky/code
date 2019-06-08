#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int m,n,sum;
	cin>>m>>n;
	if(m<=1) m=2;  
	for(;m<=n;++m)
	{
		int temp=sqrt(m);
		sum=1;
		for(int i=2;i<=temp;++i)
		{
			if(m%i==0) sum+=i+m/i;
			if(sum>m) break;
			
		}
	   if(sum==m) cout<<m<<endl;
		
	}
	return 0;
	
}

//  64  
