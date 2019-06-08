#include<bits/stdc++.h>
using namespace std;
int main()
{
	string name,name1;
	char b1,b2;
	int n,cj1,cj2,nu=0,sum=0,sum1=0,sum2=0,tmp=0,maxs=0;
	cin>>n;
	for(int i=1;i<=n;++i)
	{
			cin>>name>>cj1>>cj2>>b1>>b2>>nu;
			if((cj1>80)&&(nu>=1)) tmp+=8000;
			if((cj1>85)&&(cj2>80)) tmp+=4000;
			if(cj1>90) tmp+=2000;
			if((cj1>85)&&(b2=='Y')) tmp+=1000;
			if((cj2>80)&&(b1=='Y')) tmp+=850;
			if(tmp>maxs)
			{
				maxs=tmp;
				name1=name;
				sum1=tmp;
			}
			sum2+=tmp;
			
	}
	cout<<name1<<endl<<sum1<<endl<<sum2;
	return 0;
 } 
