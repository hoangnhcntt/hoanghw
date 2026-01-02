#include <bits/stdc++.h>
using namespace std;
int n,a[100000];
long long tb=0;
int rmax=0,rmin=0,slmin=0,slmax=0;
int main()
{
    //freopen("DAYBIEN.INP","r",stdin);
    //freopen("DAYBIEN.OUT","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    sort(a+1,a+1+n);
    for(int i=1; i<=n; i++)
        if(a[i]==a[1])
        {
            rmin+=a[i];
            slmin++;
        }
    for(int i=n; i>=1; i--)
        if(a[i]==a[n])
        {
            rmax+=a[i];
            slmax++;
        }
    long long k;
    k=(rmax+rmin)/(slmax+slmin);
    cout<<trunc(k);
    return 0;
}
