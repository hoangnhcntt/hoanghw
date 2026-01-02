#include <bits/stdc++.h>
using namespace std;
bool kt(int x)
{
    if(x==0) return true;
    int f1=0;
    int f2=1;
    int f=f1+f2;
    while(f<x)
    {
        f1=f2;
        f2=f;
        f=f1+f2;
    }
    if(f==x) return true;
    return false;
}
int main()
{
    int n,rmax=0,a[1000];
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    int g[10000];
    for(int i=1; i<=n; i++)
        g[i]=0;
    for(int i=1; i<=n; i++)
    {
        if(kt(a[i])==true)
            g[i]=g[i-1]+1;
        else
            g[i]=0;
    }
    for(int i=1; i<=n; i++)
        rmax=max(rmax,g[i]);
    cout<<rmax;
    return 0;
}
