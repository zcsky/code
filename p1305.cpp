#include <bits/stdc++.h>
using namespace std;
 char b[100][3];
 char c1,c2,c3;
 bool e[1000],h[1000];
 int n;
 void find(char c)
 {
 	if(c=='*') return ;
	 cout<<c;
 	for(int i=1;i<= n;++i)
 	{
 		
 		if(b[i][0]==c)
 		{
 		find(b[i][1]);
 		find(b[i][2]);
 	}
	}
	return ;
 }
int main() {
	cin>>n;
	for(int i=1;i<= n;++i)
	{
		cin>>c1>>c2>>c3;
		b[i][0]=c1;b[i][1]=c2;b[i][2]=c3;
	}
	find(b[1][0]);
	return 0;
}

