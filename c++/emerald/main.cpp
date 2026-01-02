#include <bits/stdc++.h>
using namespace std;
int n,b[1000],k,a[10000],c[10000],h=0,tong,s1;
void xuli()
{
    int s=0;
    s1=0;
    for(int i=1; i<=n; i++)
        s+=a[i];
    k=s/3;
    for(int i=1; i<=n; i++)
        if(b[i]==1)
            s1+=a[i];
    if(s1==k)
    {
        for(int i=1; i<=n; i++)
            if(b[i]==1)
            {
                c[++h]=i;
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
    freopen("EMERALD.INP","r",stdin);
    freopen("EMERALD.OUT","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        tong+=a[i];
    }
    if(tong%3==0)
    {
        pps(1);
        cout<<h;
        for(int i=1; i<=h; i++)
            cout<<c[i]<< " ";
    }
    else
        cout<<0;
    return 0;
}
