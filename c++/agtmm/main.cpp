#include <bits/stdc++.h>
using namespace std;
long long a,b,c,d;
int main()
{
    freopen("AGTMM.INP","r",stdin);
    freopen("AGTMM.OUT","w",stdout);
    long long rmin=1e9;
    long long rmax=-1e9;
    cin>>a>>b>>c>>d;
    rmin=min(a,min(b,min(c,d)));
    rmax=max(a,max(b,max(c,d)));
    cout <<rmax<<" "<<rmin;
    return 0;
}
