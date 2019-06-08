#include<iostream>
#include<string>
#include<vector>
#include<cstdio>
#include <fstream>
#include<stdio.h>
#include <algorithm>
//#define ONLINE_JUDGE
using namespace std;

 void sort_ins(long long  nums[],int p,int r){
    long long  tmp,j,i;
 	for (i=p+1;i<=r;i++)
 	{
 		tmp=nums[i];

 		for (j = i-1; j>=0; --j)
 		{
 			if(tmp<nums[j]) nums[j+1]=nums[j];
 			else break;
 		}
        nums[j+1]=tmp;
 	}


 }

// 快排排序 从左边开始判断
 int  partition(long long nums[],int p,int r){
	 long long poit=nums[r];  //取最后一个为key 进行判断
	 int i=p,j=p;
	 //int tmp=0;
	 for(;j<r;j++)    
	 	if(nums[j]<poit){
           swap(nums[i],nums[j]);
	 		i++;
	 	}
      swap(nums[i],nums[j]);
      //for(int k=0;k<=r;k++)  cout<<nums[k]<<" ";
        //cout<<" -----"<<nums[i]<<endl;
        return i;

}
// 从左右两边开始
int  partition_m(long long nums[],int p,int r){
	 long long pivot=nums[p];// 最第一个为 pivot

	 while (p<r){
	 	
	 	while (p<r && nums[r]>=pivot) r--;  //从右边起，找到小于pivot 的值
	 	    	if (p<r) nums[p++]=nums[r];

	 	while (p<r && nums[p]<pivot) p++;
	 	    	if (p<r) nums[r--]=nums[p];
	 	
	 }
	 nums[p]=pivot;

	  //for(int k=0;k<=r;k++)  cout<<nums[k]<<" ";
      // cout<<" -----"<<nums[p]<<endl;
        return p;

}

 void sort_quick(long long nums[],int p,int r){
 	long long q;
 	if (p>=r)  return;

 	if(p-r<=20)  return sort_ins(nums,p,r); // 小于20时，用插入法，更快。
    else {
 		q=partition_m(nums,p,r);

 		if(q==r)  return sort_ins(nums,p,r); // 如果数组是一个已排好的升序，转换成插入法
 		else {
 		sort_quick(nums,p,q-1);
    	sort_quick(nums,q+1,r);
        }
    }
 }

int main(){

#ifndef ONLINE_JUDGE 
    freopen("data.in","r",stdin); 
   //freopen("data.out","w",stdout); 
#endif 

    int n=0;
    scanf("%d",&n);
    cout<<n;
      long long nums[n+1];
    for (int i=0;i<n;++i) scanf("%lld",nums+i);
    //while(scanf("%d",&nums[n]) n++;
    //for(int i=0;i<n;i++) cin>>nums;
   // sort_ins(nums,0,n-1);
   sort_quick(nums,0,n-1);
    for(int i=0;i<n;i++) printf("%lld ",nums[i]);
   

#ifndef ONLINE_JUDGE 
    fclose(stdin); 
    fclose(stdout); 
#endif 

    return 0;
}
