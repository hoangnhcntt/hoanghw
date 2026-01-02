#include <bits/stdc++.h>
using namespace std;
int a,b,c,d,e;
int rmax=-1e9;
int rmin=1e9;
int main()
{
    freopen("MINMAX.INP","r",stdin);
    freopen("MINMAX.OUT","w",stdout);
    cin>>a>>b>>c>>d>>e;
    if(a%2==0)
        rmax=max(rmax,a);
    else
        rmin=min(rmin,a);
    if(b%2==0)
        rmax=max(rmax,b);
    else
        rmin=min(rmin,b);
    if(c%2==0)
        rmax=max(rmax,c);
    else
        rmin=min(rmin,c);
    if(d%2==0)
        rmax=max(rmax,d);
    else
        rmin=min(rmin,d);
    if(e%2==0)
        rmax=max(rmax,e);
    else
        rmin=min(rmin,e);
    if(rmax!=-1e9 && rmin!=1e9)
        cout<<rmax<<" "<<rmin;
    if(rmax!=-1e9 && rmin==1e9)
        cout<<rmax<<" "<<"NONE";
    if(rmax==-1e9 && rmin!=1e9)
        cout<<"NONE "<<rmin;
    return 0;
}
