#include <bits/stdc++.h>
using namespace std;
long long m,n,p,q,rmax,rmin=1e9;
long long daonguoc(int x)
{
    long long songuoc=0;
    while(x>0)
    {
        songuoc*=10;
        songuoc+=x%10;
        x/=10;
    }
    return songuoc;
}
int main()
{
    freopen("APT.INP","r",stdin);
    freopen("APT.OUT","w",stdout);
    cin>>m>>n>>p>>q;
    rmax=max(daonguoc(m),max(daonguoc(n),max(daonguoc(p),daonguoc(q))));
    rmin=min(daonguoc(m),min(daonguoc(n),min(daonguoc(p),daonguoc(q))));
    cout<<daonguoc(rmin);
    cout<<" "<<daonguoc(rmax);
    return 0;
}
