#include <bits/stdc++.h>
using namespace std;
int n,a[10000],rmax=0,f[10000];
int main()
{
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    for(int i=1; i<=n; i++)
    {
        rmax=(a[i],rmax+a[i+1]+a[i-1]);
        f[i]=max(f[i],rmax);
    }
    cout<<f[n];
    return 0;
}
