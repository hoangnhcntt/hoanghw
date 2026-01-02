#include <bits/stdc++.h>
using namespace std;
long long n,m,a,b,sl=0;
int main()
{
    freopen("MA_A6.INP","r",stdin);
    freopen("MA_A6.OUT","w",stdout);
    cin>>n>>m>>a>>b;
    long long k;
    long long l=__gcd(a,b);
    k=a*b/l;
    vector<int> c;
    for(int i=1; i<=m; i++)
        c.push_back(k*i);
    for(auto x:c)
    {
        if(x>=n)
            if(x<=m)
                sl++;
    }
    cout<<sl;
    return 0;
}
