#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
   char c,fh;
   int f1=1,f2=1,cl=0,x=0,tmp=0;
   // f1 表示读入数的符号，f2 表示 =号左边为政，右边为负， c 常数，x 系数
   while(scanf("%c",&c)==1)
    {
        if (isdigit(c))
        {
            tmp*=10;
            tmp+=c-'0';
        }
        else // 
        {
            if (c>='a'&&c<='z') 
                {
                    x+=(tmp==0)?f2*f1:tmp*f2*f1;
                    //cout<<"x="<<x<<endl;
                    fh=c;
                }
            else {
                cl+=tmp*(-f2)*f1;
                //cout<<"cl="<<cl<<endl;
            }
            tmp=0;
        }
        if(c=='+') {f1=1;continue;}
        if(c=='-') {f1=-1;continue;}
        if(c=='=') {f2=-1;f1=1;continue;} 
        
    }
   // printf("%d%c=%d\n",x,fh,cl);
    printf("%c=%0.3f",fh,(float)cl/x);

    return 0;
}
