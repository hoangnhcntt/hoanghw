#include <bits/stdc++.h>
using namespace std;
int n,a[100000],g[100000];
int rmax=-1e9;
int main()
{
    freopen("DAYTANG.INP","r",stdin);
    freopen("DAYTANG.OUT","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    for(int i=1; i<=n; i++)
        g[i]=1;
    for(int i=1; i<=n; i++)
        for(int j=0; j<=i; j++)
            if(a[j]<a[i])
                g[i]=max(g[j]+1,g[i]);
    for(int i=1; i<=n; i++)
        rmax=max(rmax,g[i]);
    cout<<rmax;
    return 0;
}
