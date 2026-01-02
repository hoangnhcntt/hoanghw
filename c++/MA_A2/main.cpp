#include <bits/stdc++.h>
using namespace std;
int n;
long long du(int x)
{
    long long sl=0;
    for(int i=1; i<=sqrt(x); i++)
        if(x%i==0)
        {
            sl+=i;
            if(i!=x/i)
                sl+=x/i;
        }
    return sl;
}
int main()
{
    freopen("MA_A2.INP","r",stdin);
    freopen("MA_A2.OUT","w",stdout);
    cin>>n;
    cout<<du(n);
    return 0;
}
