#include<bits/stdc++.h>
using namespace std;
int sum1,a[5]; 

int sum (int *a,int n){
	--n;
	if(n<0) return 0;
	else return a[n]+sum(a,n);//why?n--���� 
	
}

int main()
{
	for(int i=0;i<5;++i) cin>>a[i];
	
	cout<<sum(a,5)<<endl;
	return 0;
}
