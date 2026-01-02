#include <bits/stdc++.h>
using namespace std;
int n,b[10000],k,a[10000],h=0,c[10000],tong=0,rmax,d[100000],z=0,v,m,s2=0,s1=0,dem1=0,dem2=0;
void xuli()
{
    int s=0;
    s1=0;
    s2=0;
    for(int i=1; i<=n; i++)
        if(b[i]==1)
        {
            s+=a[i];
            s1+=c[i];
            s2+=d[i];
        }
    if(s<=m && s2<=v)
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
    cin>>n>>m>>v;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        cin>>c[i];
        cin>>d[i];
    }
    pps(1);
    cout<<rmax;
    return 0;
}
