#include <iostream>
using namespace std;

int main() {
	int n,i,x,j,temp;
	cin>>n;
	int a[n+1];
	for(i=0; i<n; i++) cin>>a[i]; //读取各数 
	for (i=1; i<n; i++) {
		x=a[i];            //提取待插入的量 
		for(j=i-1; j>=0&&a[j]>x; j--) //从已排序中例次进行比较 
			a[j+1]=a[j];  为X腾出一个位置 
		a[j+1]=x; // j+1 为插入点 
	}
	for (i=0; i<n; i++) cout<<a[i]<<" ";
	return 0;
}

