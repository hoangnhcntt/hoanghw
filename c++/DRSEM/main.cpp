#include <bits/stdc++.h>
using namespace std;
long long n,b[10000],k,a[10000],h=0,c[10000],tong=0,cmax=-1e9,cmin=1e9,d[100000],z=0;
bool ktasdhiah(int x)
{
    if(x<k)
        return true;
    else
        return false;
}
void xuli()
{
    long long s=0;
    h=0;
    for(int i=1; i<=n; i++)
        if(b[i]==1)
            s+=c[i];
    if(ktasdhiah(s)==true)
    {
        for(int i=1; i<=n; i++)
            if(b[i]==1)
            {
                h+=a[i];
                cmax=max(cmax,h);
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
    //freopen("DRSEM.INP","r",stdin);
    //freopen("DRSEM.OUT","w",stdout);
    cin>>n>>k;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        cin>>c[i];
    }
    pps(1);
    cout<<cmax;
    return 0;
}
