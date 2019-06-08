#include<iostream>
#include<cstring>
#include <stdio.h>
using namespace std;
int len(char ch1[]){

	int i;

	for(i=0;ch1[i]!='\0';i++);

	return i;

}

int main(){
	char ch1[225],sum,slen;
	int sLen = len(ch1);
	gets(ch1);
	for(int i=0;i<slen;i++){
	for(int j=0;0<9;j++) if(ch1[i]==j) sum++;
    }
    cout<<sum;
   return 0;
}
