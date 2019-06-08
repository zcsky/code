#include <bits/stdc++.h>
using namespace std;
struct bin{
	int x,y,t;
};
bin a[100005];
int par[1005];
int n,m;

void init()
{
	cin>>n>>m;
	//cout<<n<<m;
	for(int i=1;i<=n;++i) par[i]=i;
	return ;
}
int find(int i)
{
	if(par[i]==i) return i;
	return par[i]=find(par[i]);
}
void unicn(int x,int y)
{
	par[find(x)]=find(y);
	return ;
}
bool cmp(bin a,bin b)
{
	return a.t<b.t;
}
int main() {
	//freopen("p111.in","r",stdin);
	//freopen(".out","w",stdout);
	 init();
	 for(int i=1;i<=m;++i)
	 {
	 	int x1,y1,t1;
	 	scanf("%d%d%d",&x1,&y1,&t1);
	 	//cout<<x1<<" "<<y1<<"  "<<t1<<endl;
	 	a[i].x=x1;a[i].y=y1;a[i].t=t1;
	 }
	 sort(a+1,a+m+1,cmp);
	 //for(int i=1;i<=m;++i) cout<<a[i].t<<endl;
	 for(int i=1;i<=m;++i)
	    {
	 	if(find(a[i].x)!=find(a[i].y))
		 {
		n--;
	 	unicn(a[i].x,a[i].y);
	    }
	 	if(n==1)
		 {
		 cout<<a[i].t;
		 return 0;
		 }
	 }
	 cout<<"-1";
	return 0;
}

