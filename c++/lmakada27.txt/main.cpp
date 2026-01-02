#include <bits/stdc++.h>
using namespace std;
int n,a[100000];
int g[100000];
int rmax=-1e9;
int rmin=1e9;
int main()
{
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    sort(a+1,a+1+n);
    for(int i=1; i<=n; i++)
        g[i]=1;
    for(int i=1; i<=n; i++)
        if(a[i]==a[i-1])
            g[i]=g[i-1]+1;
    for(int i=1; i<=n; i++)
        rmax=max(rmax,g[i]);
    for(int i=1; i<=n; i++)
        if(g[i]==rmax)
            rmin=min(rmin,a[i]);
    cout<<rmin;
    return 0;
}
