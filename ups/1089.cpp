// luogu-judger-enable-o2
#include<algorithm>
#include<bitset>
#include<cassert>
#include<cctype>
#include<cerrno>
#include<cfloat>
#include<ciso646>
#include<climits>
#include<clocale>
#include<cmath>
#include<ctime>
#include<complex>
#include<csetjmp>
#include<csignal>
#include<cstdarg>
#include<cstddef>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cwchar>
#include<cwctype>
#include<deque>
#include<exception>
#include<fstream>
#include<functional>
#include<iomanip>
#include<ios>
#include<iosfwd>
#include<iostream>
#include<istream>
#include<iterator>
#include<limits>
#include<list>
#include<locale>
#include<map>
#include<memory>
#include<new>
#include<numeric>
#include<ostream>
#include<queue>
#include<set>
#include<sstream>
#include<stack>
#include<stdexcept>
#include<streambuf>
#include<string>
#include<typeinfo>
#include<utility>
#include<valarray>
#include<vector>
using namespace std;
map<int, int> num;
int dfs(int t,int k,int z)
{
    //cout <<"deep:"<<k++<<"  "<<t<<"-"<<z<<endl;
    if(num.count(t)) return num[t];
    if (t<5) return 0;
    if (t<10) return 2;
    if (t<17) return max(dfs((t-10),k,7)+7,dfs((t-5),k,2)+2);
    if (t>=17) 
    {
            int ans=max(dfs((t-10),k,7)+7,dfs((t-5),k,2)+2);
            num[t]=max(ans,dfs(t-17,k,17)+12);
    }
    return num[t];
}

int main(int argc, char const *argv[])
{
    int n,tmp;
    cin>>n;
    while(n--)
    {
        cin>>tmp;
        cout<<dfs(tmp,1,0)<<endl;
    }
    
    return 0;
}
