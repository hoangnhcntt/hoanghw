#include <bits/stdc++.h>
using namespace std;
int n,res=-1e9,k,a[100000],c[10000],b[100000];
void xl()
{
    int tonga=0,tongc=0;
    for(int i=1; i<=n; i++)
        if(b[i]==1)
        {
            tonga+=a[i];
            tongc+=c[i];
            if(tongc>k)
                return;
        }
    if(tongc<=k)
        res=max(tonga,res);
}
void pps(int x)
{
    for(int i=0; i<=1; i++)
    {
        b[x]=i;
        if(x==n) xl();
        else pps(x+1);
    }
}
int main()
{
    freopen("DRSEL.INP","r",stdin);
    freopen("DRSEL.OUT","w",stdout);
    cin>>n>>k;
    for(int i=1; i<=n; i++)
        cin>>a[i]>>c[i];
    pps(1);
    cout <<res;
    return 0;
}
