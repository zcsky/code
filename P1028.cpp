#include<iostream>
#include<string.h>
using namespace std;
int sum=0;
int books[1001];

int jw(int n)
{
    while(n>=10){
        n/=10;
    }
    return n;
}

int f(int n){
	
    sum++;
    int ans=n;
    if(ans==1) return sum;
    else{
        for(int i=1;i<=ans/2;++i){
            if(i>=2){
			if(books[i]) sum+=books[i];
			else books[i]=f(i);
		    }
            else sum++;
        }
    }
    return sum;
}


int main(){
	books[1]=1;
	books[2]=2;
	memset(books,0,sizeof(books));
    int n;
    cin>>n;
    cout<<f(n);
    return 0;
}
