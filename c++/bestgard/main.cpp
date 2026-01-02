#include <bits/stdc++.h>
using namespace std;
int n,a[10000],rmax1,rmax;
long long tong=0;
int main()
{
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        rmax=max(rmax,a[i]);
    }
    for(int i=1; i<=n; i++)
        if(a[i]<rmax)
            rmax1=max(rmax1,a[i]);
    for(int i=1; i<=n; i++)
        if(rmax1!=a[i] && rmax!=a[i])
            tong+=a[i];
    cout<<tong;
    return 0;
}
