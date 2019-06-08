#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int sumw1,sumw2,suml1,suml2,n=0,i=1;
    sumw1=suml2=sumw2=suml1=0;
    char c[65000];
    while((scanf("%c",&c[n])==1)&&(c[n]!='E'))//为什么输出为空格
    {
        //cout<<i<<endl;
        if(c[n]=='W') sumw1++;                  
        else if(c[n]=='L')
        {
            cout<<n<<endl;
            suml1++;
        }

        if((sumw1-suml1)>=2&&i==11)
            {
                printf("%d:%d\n",sumw1,suml1);
                cout<<n<<endl;
                sumw1=suml1=0;
                i=i-11;

            }
            n++;
            i++;
            cout<<c[n]<<endl;
    }
    return 0
}
