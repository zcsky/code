#include<iostream>
#include<cstdio>
using namespace std;
bool maps[40010][40010];


int main()
{
    maps[20005][20005]=1;
    int n,ans=1,x=20005,y=20005;
    cin>>n;
    char c;
    for(int i=1;i<=n;++i)
    {
        //cout<<ans<<endl;
		scanf(" %c",&c); 
		//cout<<c<<": "<<i<<endl;
        if(c=='U'&&(maps[x][++y]==0))
        {
          //  cout<<ans<<endl;
            //cout<<x<<"    "<<y<<endl;
            ans++;
            maps[x][y]=1;
        }
        
        if(c=='D'&&(maps[x][y-=1]==0))
        {
            //cout<<ans<<endl;
            //cout<<x<<"    "<<y<<endl;
            ans++;
            maps[x][y]=1;
        }
        
         if(c=='L'&&(maps[x-=1][y]==0))
        {
            //cout<<ans<<endl;
            //cout<<x<<"    "<<y<<endl;
            ans++;
            maps[x][y]=1;
        }
        
        if(c=='R'&&(maps[x+=1][y]==0))
        {
            //cout<<ans<<endl;
            //cout<<x<<"    "<<y<<endl;
            ans++;
            maps[x][y]=1;
        }
     
    }
   
    cout<<ans;
    return 0;
}
