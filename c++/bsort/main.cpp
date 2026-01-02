#include <bits/stdc++.h>
using namespace std;
int n,a[100000],rmax,rmax1=0,sl,sl1;
int main()
{
    freopen("BSORT.INP","r",stdin);
    freopen("BSORT.OUT","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    sort(a+1,a+1+n);
    for(int i=1; i<=n; i++)
        rmax=max(rmax,a[i]);
    for(int i=1; i<=n; i++)
        if(a[i]<rmax)
            rmax1=max(rmax1,a[i]);
    for(int i=1; i<=n; i++)
        if(a[i]==rmax)
            sl++;
    for(int i=1; i<=n; i++)
        if(a[i]==rmax1)
            sl1++;
    cout<<rmax<<" "<<sl<<endl;
    if(rmax1==0)
        cout<<"NONE";
    else
        cout<<rmax1<<" "<<sl1<<endl;
    return 0;
}
