#include<iostream>
using namespace std;
int cf(int a,int b){//³Ë·½~ 
    int sum=1; 
    for(int i=0;i<b;i++){
        sum*=a;
    }
    return sum; 
}

int dg(int n)
{
    int ans;
    if(n==0) return 0;
    for(int i=0;i<=15;++i){
        ans==i;
        if (cf(2,i)>n){
            ans--;
            break;
        }
    }
    if(ans==0) cout<<2<<"(0)";
    if(ans==1) cout<<"2(1)";
    if(ans>1){
        cout<<"2(";
        cout<<dg(ans);
        cout<<")";
    }
    if(n!=cf(2,ans)){
        cout<<"+";
        dg(n-cf(2,ans));
    }
 } 
int main(){
    int n;
    cin>>n;
    dg(n);
    return 0;
}#include<iostream>
using namespace std;
int cf(int a,int b){//³Ë·½~ 
    int sum=1; 
    for(int i=0;i<b;i++){
        sum*=a;
    }
    return sum; 
}

int dg(int n)
{
    int ans;
    if(n==0) return 0;
    for(int i=0;i<=15;++i){
        ans==i;
        if (cf(2,i)>n){
            ans--;
            break;
        }
    }
    if(ans==0) cout<<2<<"(0)";
    if(ans==1) cout<<"2(1)";
    if(ans>1){
        cout<<"2(";
        cout<<dg(ans);
        cout<<")";
    }
    if(n!=cf(2,ans)){
        cout<<"+";
        dg(n-cf(2,ans));
    }
 } 
int main(){
    int n;
    cin>>n;
    dg(n);
    return 0;
}
