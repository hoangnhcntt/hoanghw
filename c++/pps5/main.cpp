#include <bits/stdc++.h>
using namespace std;
int n,b[1000],k,a[10000],c[10000],h=0,rmax;
void xuli()
{
    int s=0;
    h=0;
    for(int i=1; i<=n; i++)
        if(b[i]==1)
            s+=a[i];
    if(s==k)
    {
        for(int i=1; i<=n; i++)
            if(b[i]==1)
            {
                h++;
                rmax=max(rmax,h);

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
        cin>>a[i];
    pps(1);
    cout<<rmax;
    return 0;
}
