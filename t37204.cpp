#include<iostream>
using namespace std;
int main(){
	int n,k,t,x,m,ans=0;
	freopen("t37204.in","r",stdin); //�����ض����������ݽ���D�̸�Ŀ¼�µ�in.txt�ļ��ж�ȡ 
	freopen("t37204.out","w",stdout);
	
	cin>>n>>k>>t;
	cout<<n;
	for(int i=1;i<=n;++i)
	{
		cin>>x>>m;
		if(x==1) t=(t+m)%k;
		else
		{
			ans++;
			if(t<m)
			{
				cout<<"qwq"<<" "<<ans<<endl;
			}
			else t=t-m;
		}
	}
	cout<<t;
	
	fclose(stdin);//�ر��ض������� 
	fclose(stdout);//�ر��ض������ 

	return 0;
 } 
 /*5 4 3
1 5
1 3
2 1
2 2
1 1


5 4 3
1 5
1 3
2 2
2 2
1 1
*/ 
