#include <bits/stdc++.h>
using namespace std;
int n,b[10000],k,a[10000],h=0,c[10000],tong=0,rmax,d[100000],z=0;
bool dx(int x)
{
    int sogoc=x,songuoc=0;
    while(x>0)
    {
        songuoc*=10;
        songuoc+=x%10;
        x/=10;
    }
    if(songuoc==sogoc)
        return true;
    return false;
}
void xuli()
{
    int s=0,s1=0;
    for(int i=1; i<=n; i++)
        if(b[i]==1)
        {
            s*=10;
            s+=a[i];
        }
    if(dx(s)==true)
    {
        rmax=max(rmax,s);
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
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    pps(1);
    if(rmax>0)
        cout<<rmax;
    else
        cout<<"NONE";
    return 0;
}
