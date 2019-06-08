#include<bits/stdc++.h>
using namespace std;

int main()
{
	char s,fh;
	int f1=1,f2=1,cl=0,x=0,tmp=0;;
	double tot;
	while(scanf("%c",&s)==1)
	{
		if (isdigit(s))
        {
            tmp*=10;
            tmp+=s-'0';
        }
        else
        {
            if (s>='a'&&s<='z') 
                {
                    x+=(tmp==0)?f2*f1:tmp*f2*f1;
                    //cout<<"x="<<x<<endl;
                    fh=s;
                }
            else {
                cl+=tmp*(-f2)*f1;
                //cout<<"cl="<<cl<<endl;
            }
            tmp=0;
        }
        if(s=='+') {f1=1;continue;}
        if(s=='-') {f1=-1;continue;}
        if(s=='=') {f2=-1;f1=1;continue;}
	}
	if(!cl/x) tot=0;
	else{
		tot=cl/x;
	}
	printf("%c=%.3lf",fh,tot);
	return 0;
}
