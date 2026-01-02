#include <bits/stdc++.h>
using namespace std;
int n,a[10000];
int main()
{
    int rmin=1e9,rmin1=1e9;
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    for(int i=1; i<=n; i++)
        rmin=min(rmin,a[i]);
    for(int i=1; i<=n; i++)
        if(a[i]>rmin)
            rmin1=min(rmin1,a[i]);
    for(int i=1; i<=n; i++)
        if(a[i]==rmin1)
            cout<<i<<" ";
    return 0;
}
