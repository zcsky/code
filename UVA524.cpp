#include<bits/stdc++.h>
using namespace std;

int n,pd[22],used[22];

bool cheek(int n) {

	for(int i=2; i<=sqrt(n); ++i) {
		if(n%i==0) return false;
	}
	return true;
}

void dfs(int k) {
	if((k>n)&&(used[1]==1)) {
		for(int i=1; i<=n; ++i) {
			cout<<used[i]<<" ";
		}
		cout<<endl;
	}
	for(int i=1; i<=n; ++i) {
		if(!pd[i]) {
			//cout<<"deep---"<<k<<"---i"<<i<<endl;
			if(((k>1)&&(cheek(used[k-1]+i)))||(k==1)) {
				//if(()&&()||())
				pd[i]=1;
				used[k]=i;
				dfs(k+1);
				pd[i]=0;
			}
		}
		//continue;
	}
}

int main() {
	int i=1;
	while(cin>>n)
	{
		memset(pd,0,sizeof(pd));
		memset(used,0,sizeof(used));
		printf("Case %d:\n",i);
		dfs(1);
		cout<<endl<<endl;
		i++;
	}
	return 0;
}
