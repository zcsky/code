#include<bits/stdc++.h>
#include<iostream>
using namespace std;
struct hm{
	int time;
	int biho;
};
bool cmp(const hm &a,const hm &b)
{
    return a.time<b.time; //����
}
int main(){
	//freopen("1223.in","r",stdin);
	//freopen("1223.out","w",stdout);
	int n;
	double ans=0;
	cin>>n;
	hm a[n+10];
	for(int i=1;i<=n;++i){
	cin>>a[i].time;
	a[i].biho=i;
	//cout<<a[i].biho<<" ";
    }  
	sort(a+1,a+n+1,cmp);//����ָ��a��ʾa[0] a+1��ʾ[1] 
	for(int i=1;i<=n;++i){
	cout<<a[i].biho<<" ";
		ans+=(n-i)*a[i].time;
	} 
	//ans=ans/n;
	cout<<endl;
	printf("%.2lf",ans/n);
    return 0;
	 }	 
