#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("p1042.in","r",stdin);
	freopen("p1042.out","w",stdout);
    int sumw1,sumw2,suml1,suml2,n=0;
    sumw1=suml2=sumw2=suml1=0;
    char c[65000];
    while((scanf("%c",&c[n])==1)&&(c[n]!='E'))//为什么输出为空格
    {
    	//getcher();
       // cout<<c[n]<<endl;
        if(c[n]=='W') sumw1++;                  
        if(c[n]=='L')
        {
           // cout<<n<<endl;
            suml1++;
        }

        if(((sumw1-suml1>=2)&&(sumw1>=11))||((suml1-sumw1>=2)&&(suml1>=11)))
            {
                printf("%d:%d\n",sumw1,suml1);
                //cout<<n<<endl;
                sumw1=suml1=0;
                //i=i-11;

            }
            n++;
            //i++;
            //cout<<c[n]<<endl;
    }
    if((n==0) && (c[n]=='E'))
    {
    	printf("0:0\n\n0:0");
    	return 0;
	}
    printf("%d:%d\n",sumw1,suml1);
    //cout<<n<<endl;
    //n=1;
    cout<<endl;
    //i=1;
    for(int j=0;j<n;++j)
    {
        //cout<<i<<endl;

        if(c[j]=='W') sumw2++;                  
        if(c[j]=='L') suml2++;

    	if(((sumw2-suml2>=2)&&(sumw2>=21))||((suml2-sumw2>=2)&&(suml2>=21)))
            {
                printf("%d:%d\n",sumw2,suml2);
                //cout<<n<<endl;
                sumw2=suml2=0;
                //i=i-11;

            }
          //  i++;
    }
    printf("%d:%d\n",sumw2,suml2);
    return 0;
}
