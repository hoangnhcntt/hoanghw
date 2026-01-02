#include <bits/stdc++.h>
using namespace std;
int n,a[10000],rmax,rmin,r;
int f[10000],s[10000];
int main()
{
    freopen("DP_A3.INP","r",stdin);
    freopen("DP_A3.OUT","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    rmax=-1e9;
    f[1]=a[1];
    s[1]=a[1];
    for(int i=2; i<=n; i++)
    {
        f[i]=max(a[i],f[i-1]);
    }
    for(int i=2; i<=n; i++)
        s[i]=min(a[i],s[i-1]);
    for(int i=2; i<=n; i++)
    {
        rmax=max(rmax,f[i]+a[i]-s[i]);
    }
    cout<<rmax;
}
