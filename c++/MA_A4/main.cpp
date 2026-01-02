#include <bits/stdc++.h>
using namespace std;
long long n,m;
int main()
{
    freopen("MA_A4.INP","r",stdin);
    freopen("MA_A4.OUT","w",stdout);
    cin>>n>>m;
    long long k;
    long long l=__gcd(n,m);
    k=n*m/l;
    cout<<k;
    return 0;
}
