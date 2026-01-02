#include <bits/stdc++.h>
using namespace std;
int n,b[10000],k,a[10000],h=0,c[10000],tong=0,cmax=-1e9,cmin=1e9,d[100000],z=0;
bool ktasdhiah(int x)
{
    if(x==k)
        return true;
    else
        return false;
}
void xuli()
{
    int s=0;
    for(int i=1; i<=n; i++)
        if(b[i]==1)
        {
            s+=a[i];
        }
    if(ktasdhiah(s)==true)
    {
        for(int i=1; i<=n; i++)
            if(b[i]==1)
            {
                h++;
                cmax=max(c[i],cmax);
                cmin=min(c[i],cmin);
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
    cin>>n>>k;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        cin>>c[i];
    }
    pps(1);
    cout<<h<<endl<<abs(cmax-cmin);
    return 0;
}
