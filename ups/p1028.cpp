#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,k,num[10005];
	memset(num,0,sizeof(num));
    cin>>n>>k;
    for(int i=0;i<n;i++)
    cin>>num[i];
    sort(num,num+n);
    int ans=unique(num,num+n)-num;
    if(k<ans) cout<<num[k-1]; 
    else cout<<"NO RESULT";
    return 0;
}
