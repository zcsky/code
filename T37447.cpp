#include<bits/stdc++.h>
using namespace std;
int main()
{
 long long sum,tmp=1;
 cin>>sum;
 cout<<sum<<endl;
	do
	{
		while(sum>0)
		{
			if(sum%10!=0) tmp*=sum%10;
			sum/=10;
		}
		cout<<tmp<<endl;
		sum=tmp;
		tmp=1;
		//sprintf(s,"%d",sum);
	}while(sum>=10);
	return 0;
}
//3486784401
