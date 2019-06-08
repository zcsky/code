#include<iostream>
#include<cstdio>
#include<string.h>
using namespace std;
int main(){
	int n;
	double sum; 
    sum=0;
    double b[11]={28.9,32.7,45.6,78,35,86.2,27.8,43,56,65};
    for(int i=0;i<10;i++){
    	cin>>n;
    	sum+=n*b[i];
	} 
	printf("%.1lf",sum);
	return 0;
}
