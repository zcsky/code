#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	long long a,b;
	cin>>a>>b;
	if(b==0){
		cout<<"001";
		return 0;
	}
	int temp=a;
	for(int i=1;i<b;++i)
	{
	temp=(temp*a)%1000;
	}
    printf("%03d",temp);
    /*
	if(temp<=99)
	{
		if(temp<=9) cout<<"00"<<temp;
			else cout<<"0"<<temp;
	}
	else cout<<temp;
	
	*/
	return 0;
} 
