#include<iostream>
#include<string>
using namespace std;

int main()
{
//	freopen("T37573.in","r",stdin);
	string s;
	long long t=1,sum=0,n,m=19260817;
	cin>>s;
	n=s.length();
	//cout<<MODE<<endl;
	for(int i=n-2;i>=0;--i)
	{
		if(s[i]=='+') t=1;
		else 
		{
			sum=sum+((s[i]-'0')*(t%m))%m;
		//	cout<<s[i]<<"*"<<t%m<<"=="<<sum<<endl; 
			t=(t*10)%m;
			sum=sum%m;
		}
	}
	cout<<sum;
	return 0;
}
//5635975
