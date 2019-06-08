#include<set>
#include<iostream>
using namespace std;
int main()
{
	std::ios::sync_with_stdio(false);
	int tmp,n;
	cin>>n;
	//int a[n+1];
	set<int> num;
	set<int> cha;
	set<int>::iterator it,i,j;
	for(int i=1;i<=n;++i)
	{
		cin>>tmp;
		cha.insert(tmp);
	}
	
	for(i=cha.begin();i!=cha.end();++i)
	{
		j=i;
		for(++j;j!=cha.end();++j)
		{
			it=cha.find(*i+*j);
			if(it!=cha.end()) num.insert(*i+*j);
		}
	}
	cout<<num.size();
	return 0;
}
