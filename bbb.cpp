#include <iostream>
#include <cstring>
using namespace std;
int main(){
    int l,r,temp,sum=0;
    cin>>l>>r;
    for(;l<=r;l++){
    	temp=l;
    	while (temp){
            if(temp%10==2)sum++;
            temp/=10;
		}
	}
	cout<<sum;
	return 0;
} 
