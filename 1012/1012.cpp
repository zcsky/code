#include<iostream>
#include<iomanip>
#include<cstdio>
#include<string>
#include<algorithm>
using namespace std;
bool cmp(const string&a,const string&b){
	return a>b;
}
int main(){
	freopen("1012.in","r",stdin);
    int n;
    cin>>n;
    string l1[n+1];
    for(int i=0;i<n;i++) cin>>l1[i];
	sort(l1,l1+n,cmp);
	for(int i=0;i<n;i++) cout<<l1[i];
	return 0;	
}
 


