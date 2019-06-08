#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
 int n;
 cin>>n;
 bool books[n+1];
 memset(books,1,sizeof(books));
 books[0]=books[1]=0;
 for(int i=2;i<=sqrt(n);++i)
    {
        if(books[i])
        { 
            for(int j=i*2;j<=n;j+=i) books[j]=false;
        }
    }
 for(int i=4;i<=n;i+=2)
 {
    for(int j=2;j<=i/2;++j)
    {
        if(books[j]&&books[i-j])
        {
            cout<<i<<"="<<j<<"+"<<i-j<<endl;
            break;
        }
     }  

}
return 0;
}
