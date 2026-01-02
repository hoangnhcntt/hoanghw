#include <bits/stdc++.h>
using namespace std;
long long n,a[1000000];
int main()
{
    long long tong=0,rmax=-1e9,rmin=1e9;
    freopen("asumm.inp","r",stdin);
    freopen("asumm.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n;i++)
    {
        rmax=max(rmax,a[i]);
        rmin=min(rmin,a[i]);
        tong+=a[i];
    }
    cout<<tong<<endl<<rmax<<endl<<rmin;
    return 0;
}
