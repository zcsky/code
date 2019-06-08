#include<iostream>
using namespace std;

int icm(int a,int b)
{
    int tmp,i=1;
    a>b?tmp=a:tmp=b;
    while(1)
    {
        if((tmp*i)%b==0) return tmp*i;
        i++;
    }
}
int main()
{
    long long n,tmpx,tmpy,tmp1x,tmp1y;
    cin>>n;
    for(int i=1;i<=n;++i)
    {
        cin>>tmpx>>tmpy>>tmp1x>>tmp1y;
        if((((tmpx*tmp1x)%icm(tmpx,tmp1x))!=0)&&(((tmpy*tmp1y)%icm(tmpy,tmp1y))!=0)) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
    return 0;
}
