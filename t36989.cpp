#include<iostream>
using namespace std;
int main()
{
	int i,max,min,n;
	cin>>n;
	max=-20;
	min=40;
	int a[i+1];
	for(i=0;i<n;i++) cin>>a[i];
	for(i=0;i<n;i++){
		if(a[i]>max)	max=a[i];
		if(a[i]<min)	min=a[i];
	}
    cout<<max<<" "<<min<<endl;
	cout<<max-min;
	return 0;
}
