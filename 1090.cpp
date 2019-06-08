#include<bits/stdc++.h>
using namespace std;
const int maxn=2147483647;
int min0=21474;
int min1=21474;

int main() {
	int n,i,tep,post0,post1;
	cin>>n;
	int a[2*n];
	tep=0;
	for(int d=1; d<=n; d++) cin>>a[d];

	for(int j=1; j<=n-1; j++)  //±È½Ïn-1´Î 
	{
		for(i=1; i<n+j; i++) {
			if(a[i]<=min0) {
				min1=min0;
				min0=a[i];
				post1=post0;
				post0=i;
			} else if(a[i]<min1) {
				min1=a[i];
				post1=i;
			}
		}
		tep=min0+min1+tep;
		a[n+j]=min0+min1;
		min0=min1=a[post0]=a[post1]=maxn;
		//cout<<tep;
		//for(int g=1; g<=n+j; g++) cout<<a[g]<<" ";
		//cout<<endl;
	}
	cout<<tep;
	return 0;
}
