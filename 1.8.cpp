// luogu-judger-enable-o2
#include <iostream>

using namespace std;

int main()
{
    int n,i=2,cnt=0;
    cin >> n;
    while (n>1)
    {
        if (n%i==0)
        {
            n/=i;
            cnt++;
        }
        else
        {
            if (cnt!=0)
            {
                if (cnt>1)
                    cout << "(" << i << "^" << cnt << ")*";
                else
                    cout << i << "*";
                cnt=0;
            }
            i++;
        }
    }
    if (cnt!=0)
    {
        if (cnt>1)
            cout << "(" << i << "^" << cnt << ")";
        else
            cout << i ;
    }
    return 0;
}
