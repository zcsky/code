#include<bits/stdc++.h>
using namespace std;
int n,a,b,jing,sum;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a>>b;
        jing=jing+a+b-8;
        sum+=jing;
    }
    cout<<sum;
    return 0;
}
