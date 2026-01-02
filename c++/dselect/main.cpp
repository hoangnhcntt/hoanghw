#include <bits/stdc++.h>
using namespace std;
int n,a[1000000],c[10000],b[10000],rmax,l,r;
void xuli()
{
    int s=0,s1=0;
    for(int i=1; i<=n; i++)
        if(b[i]==1)
        {
            s+=c[i];
            s1+=a[i];
        }
    if(s>=l && s<=r)
    {
        for(int i=1; i<=n; i++)
            if(b[i]==1)
            {
                rmax=max(rmax,s1);
            }
    }
}
void pps(int x)
{
    for(int i=0; i<=1; i++)
    {
        b[x]=i;
        if(x==n) xuli();
        else
            pps(x+1);
    }
}
int main()
{
    freopen("DSELECT.INP","r",stdin);
    freopen("DSELECT.OUT","w",stdout);
    cin>>n>>l>>r;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        cin>>c[i];
    }
    pps(1);
    cout<<rmax;
    return 0;
}
