#include <cstdio>
#include <iostream>
using namespace std;
long long dfs(int x) //深搜
{
    if(x==1) return 1;
    long long tot=1; //加上自身，所以初始化是 1 
    for(int i=1;i<=x/2;i++) //列举 
        tot+=dfs(i);
    return tot;
}
int main()
{
    cout<<"a[1001]={";  //便于直接复制 
    for(int i=1;i<=1000;i++) //枚举所有数 
    {
        cout<<dfs(i)<<",";
    }
    cout<<"}";
}
