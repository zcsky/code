#include <iostream>
using namespace std;

int main() {
	int n,i,x,j,temp;
	cin>>n;
	int a[n+1];
	for(i=0; i<n; i++) cin>>a[i]; //��ȡ���� 
	for (i=1; i<n; i++) {
		x=a[i];            //��ȡ��������� 
		for(j=i-1; j>=0&&a[j]>x; j--) //�������������ν��бȽ� 
			a[j+1]=a[j];  ΪX�ڳ�һ��λ�� 
		a[j+1]=x; // j+1 Ϊ����� 
	}
	for (i=0; i<n; i++) cout<<a[i]<<" ";
	return 0;
}

