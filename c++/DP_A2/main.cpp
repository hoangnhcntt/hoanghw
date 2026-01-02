#include <bits/stdc++.h>
using namespace std;
int n,a[10000],rmax;
int main()
{
    freopen("DP_A2.INP","r",stdin);
    freopen("DP_A2.OUT","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    int rmin=a[1];
    rmax=-1e9;
    for(int i=1; i<=n; i++)
    {
        rmax=max(rmax,a[i]-rmin);
        rmin=min(rmin,a[i]);
    }
    cout<<rmax;
    return 0;
}
