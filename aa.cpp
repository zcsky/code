#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n,max,min=0,num=0;
	cin>>n;
	max=n-1;
	int a[n+1];
	for(int i=0;i<n;++i){
	cin>>a[i];
    }
	sort(a,a+n);//r
	//for(int i=0;i<n;i++) cout<<a[i];
	num+=a[max]*a[max];
	while(min<=max){
		//cout<<max<<"-"<<min<<" "<<num<<endl; 
		num+=(a[max]-a[min])*(a[max--]-a[min]);
	    if(min<max){
	    //cout<<min<<"-"<<max<<" "<<num<<endl; 
		num+=(a[max]-a[min])*(a[max]-a[min++]);
	}
		//cout<<a[max]<<" "<<a[min]<<endl;
	}
	cout<<num;
	return 0; 
}
