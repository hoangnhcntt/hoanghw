#include <bits/stdc++.h>
using namespace std;
long long n,m,a,b,sl=0;
int main()
{
    freopen("MA_A8.INP","r",stdin);
    freopen("MA_A8.OUT","w",stdout);
    cin>>n>>m>>a;
    b=max(n%m,max(n%a,m%a));
    cout<<b;
    return 0;
}
