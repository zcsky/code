#include<iostream>
using namespace std;
int main(){
	int n,sum;
	cin>>n;
	sum=n;
	if(n==1){
	cout<<"End";
	return 0;
}
	while(sum>1){
		if(n%2){
			sum=n*3+1;
			cout<<n<<"*3+1="<<sum<<endl;
			n=sum;
		}
		else{
			sum=n/2;
			cout<<n<<"/2="<<sum<<endl;
			n=sum;
		}
	}
	cout<<"End";
	return 0;
}
