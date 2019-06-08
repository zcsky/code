#include<bits/stdc++.h>
using namespace std;

int a[1010],b[1010],ans=0;

void merge_sort(int l,int r)
{
	if(l>=r) return;
	int mid=l+(r-l)/2;
//	printf("l:%d-----m:%d-----r:%d\n",l,mid,r);
	
	merge_sort(l,mid);
	merge_sort(mid+1,r);
		//printf("l:%d-----m:%d-----r:%d\n",l,mid,r);
	int i=l,j=mid+1,k=l;
	while(i<=mid&&j<=r)
	{
		if(a[i]<=a[j])
		{
			b[k++]=a[i++];
		}
		else{
			b[k++]=a[j++];
			ans+=mid-i+1;
		}
	}
	while(i<=mid) b[k++]=a[i++];
	while(j<=r) b[k++]=a[j++];
	for(int i=l;i<=r;++i)
	{
		a[i]=b[i];
		//printf("[%d,%d]=[%d]\n",l,r,a[i]);
	}
}
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;++i)
	{
		scanf("%d",&a[i]);
	}
	merge_sort(0,n-1);
	//for(int i=0;i<n;++i) cout<<a[i]<<" ";
	cout<<ans;
 } 
