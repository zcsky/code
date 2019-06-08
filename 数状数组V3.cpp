#include <bits/stdc++.h>
using namespace std;
#define maxn 500005
#define ll long long
ll b[maxn],m,n;
ll c[maxn];
/*
1�����ú�����������ķ�ʽ  add( int * arry) ,���ٴ�������
2��init ��main ��һ���֣����Է���main �ڣ�
3��update ��������������main ��
4�� ע��long long  ll
5��ע��cin ��Ӱ���ٶ�

*/

int lowbit(int i)
{
	return i &(-i);
}

void add(ll *arry,int p,int k)
{
	while(p<=n)
	{
		arry[p]+=k ;
	//	c[p]+=(p-1)*b[p];
		p+=lowbit(p);
	}
	return ;
}
void init()
{
	int a,t=0;
	cin>>n>>m;
	for(int i=1;i<=n;++i)
	{
			cin>>a;
			add(b,i,a-t);
			add(c,i,(i-1)*(a-t));   //��������  (i-1)*b[i]  ��Ϊʲô��
			t=a;
	}
//	for(int i=1;i<=n;++i) cout<<b[i]<<" "<<c[i]<<endl;
	return ;
}
int askb(int p)
{
	int sum=0;
	while(p>0)
	{
		sum+=b[p];
		p-=lowbit(p);
	}
	return sum;
}
ll askc(int p)
{
	ll sum=0;
	while(p>0)
	{
		sum+=c[p];
		p-=lowbit(p);
}
return sum;
}
void update(int l,int r,int k)
{
	add(b,l,k);add(b,r+1,-k);
	add(c,l,(l-1)*k);add(c,r+1,-(r)*k);    // C����������޸� (i-1)*k
	return ;
}
int sum(int i)
{
	return (i*askb(i))-askc(i);
	
}
int main() {
	//freopen("1243.in","r",stdin);
	//freopen(".out","w",stdout);
	init();
	//for(int i=1;i<=n;++i) cout<<b[i]<<" "<<c[i]<<endl;
	//cout<<"---------init-------------"<<endl;
	
	for(int i=1;i<=m;++i)
	{
		ll it,x,y,k;
		cin>>it;
		if(it==1)
		{
			scanf("%l_64dl_64%d%d",&x,&y,&k);
			update(x,y,k);
		}
		else
		{
			scanf("%d%d",&x,&y);
			cout<<sum(y)-sum(x-1)<<endl;
		}
		
	}
	return 0;
}

