#include<bits/stdc++.h>
using namespace std;
int n,x,cnt,t;
int main(){
    int n,x,t,cnt;
    cin>>n;
    while(n--){
    	cin>>x;
    	if(x==t) cnt++;
    	else if(cnt) cnt--;
    	else t=x;
	}
	cout<<t<<endl;
    return 0;
}
