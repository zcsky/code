#include <cstdio>
#include <iostream>
using namespace std;
long long dfs(int x) //����
{
    if(x==1) return 1;
    long long tot=1; //�����������Գ�ʼ���� 1 
    for(int i=1;i<=x/2;i++) //�о� 
        tot+=dfs(i);
    return tot;
}
int main()
{
    cout<<"a[1001]={";  //����ֱ�Ӹ��� 
    for(int i=1;i<=1000;i++) //ö�������� 
    {
        cout<<dfs(i)<<",";
    }
    cout<<"}";
}
