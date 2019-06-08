#include<bits/stdc++.h>
using namespace std;
long long books[53];

int f(int n)
{
	if(!n) return 0;
	if(books[n]) return books[n];
	else {
		books[n]=f(n-1)+f(n-2);
	}
	return books[n];
}
int main()
{
	memset(books,0,sizeof(books));
	books[1]=books[2]=1;
	int n;
	cin>>n;
	cout<<f(n)<<".00";
	return 0;
}
