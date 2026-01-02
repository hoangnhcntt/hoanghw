#include <bits/stdc++.h>
using namespace std;
int n,a[100000],rmax=-1e9,sl=0,rmax1=-1e9;
int main()
{
    freopen("btmax.inp","r",stdin);
    freopen("btmax.out","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    for(int i=1; i<=n; i++)
        rmax=max(rmax,a[i]);
    for(int i=1; i<=n; i++)
        if(a[i]<rmax)
            rmax1=max(rmax1,a[i]);
    sort(a+1,a+1+n);
    for(int i=n; i>=1; i--)
        if(a[i]==rmax1)
            sl++;
    if(sl==0)
        cout<<"NONE";
    else
        cout<<rmax1<<" "<<sl;
    return 0;
}
