#include <bits/stdc++.h>
using namespace std;
int n,a[10000],g[10000],k,rmax;
int main()
{
    cin>>n>>k;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n;i++)
        g[i]=0;
    for(int i=1;i<=n;i++)
        if(a[i]%k==0)
         g[i]=g[i-1]+1;
    for(int i=1;i<=n;i++)
        rmax=max(rmax,g[i]);
    cout <<rmax;
    return 0;
}
