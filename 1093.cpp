#include<bits/stdc++.h>
using namespace std;	
struct studt{
	int yw;
	int sx;
	int yy;
	int zf;
	int pm;	
	}; 
bool comp(const studt &a,const studt &b)
{
    return a.zf>b.zf;
}
int main(){
	int n,i=1;
	cin>>n;
	studt a[n+1];
	while(i<=n){
	cin>>a[i].yw>>a[i].sx>>a[i].yy;
	a[i].zf=a[i].yw+a[i].sx+a[i].yy;
	a[i].pm=i;
	i++;
	}
	sort(a+1,(a+1)+n,comp);
	for(int j=1;j<=n;j++) cout<<a[i].pm<<" "<<a[i].zf<<endl;
	return 0;
}
