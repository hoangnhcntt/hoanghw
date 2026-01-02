#include <bits/stdc++.h>
using namespace std;
long long m,n,p,q;
int main()
{
    freopen("APMM.INP","r",stdin);
    freopen("APMM.OUT","w",stdout);
    cin>>m>>n>>p>>q;
    long long rmax,rmin;
    rmax=max(m*n,max(m*p,max(m*q,max(n*p,max(n*q,p*q)))));
    rmin=min(m*n,min(m*p,min(m*q,min(n*p,min(n*q,p*q)))));
    cout<<rmax<<" "<<rmin;
    return 0;
}
