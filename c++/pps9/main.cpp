#include <bits/stdc++.h>
using namespace std;
int n,b[10000],k,a[10000],h=0,c[1000],d[100000],z=0,tong,r=1e9;
void xuli()
{
    int s1=0,s2=0;
    for(int i=1; i<=n; i++)
    {
        if(b[i]==1)
            s1+=a[i];
        else
            s2+=a[i];
    }
    r=min(r,abs(s1-s2));
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
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    pps(1);
    cout<<r;
    return 0;
}
