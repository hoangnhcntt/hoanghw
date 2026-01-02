#include <bits/stdc++.h>
using namespace std;
int rmin=1e9,rmax=-1e9,n,a[10000],tong=0;
int main()
{
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    for(int i=1; i<=n; i++)
    {
        rmin=min(rmin,a[i]);
        rmax=max(rmax,a[i]);
    }
    for(int i=1; i<=n; i++)
        if(a[i]!=rmin && a[i]!=rmax)
            tong+=a[i];
    cout << tong;
    return 0;
}
