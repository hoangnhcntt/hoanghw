#include <bits/stdc++.h>
using namespace std;
long long n,a[10000],k;
int main()
{
    freopen("smk.inp","r",stdin);
    freopen("smk.out","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    cin>>k;
    int rmax,h=0;
    for(int i=1; i<k; i++)
    {
        h+=a[i];
    }
    rmax=h;
    for(int i=k; i<n; i++)
    {
        h+=a[i]-a[i-k];
        rmax=max(rmax,h);
    }
    cout<<rmax;
    return 0;
}
