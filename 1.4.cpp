//ex1.4
#include <iostream>
using namespace std;
int main()
{  int a,b,c,d,e,f;
   cin>>a>>b>>c>>d;
   a=a*60+b;
   c=c*60+d;
   if(c>=a){cout<<(c-a)/60<<' '<<(c-a)%60;
   }
   else{cout<<(24*60-(a-c))/60<<' '<<(24*60-(a-c))%60;
   }
	return 0;
}
