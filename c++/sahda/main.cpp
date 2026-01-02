#include <bits/stdc++.h>
using namespace std;
int n,a[100000],k;
bool nt(int x)
{
    if(x<2) return false;
    for(int i=2; i<=sqrt(x); i++)
        if(x%i==0)
            return false;
    return true;
}
int main()
{
    cin>>n>>k;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    int rmax=-1e9,g[100000];
    for(int i=1; i<=n; i++)
        if(a[i]>k)
        {
            cout<<i<<" ";
        }
    cout<<endl;
    for(int i=1; i<=n; i++)
        if(a[i]<k)
        {
            if(nt(a[i]))
                rmax=max(rmax,a[i]);
        }
    if(rmax!=-1e9)
        cout<<rmax<<endl;
    else cout<<"NONE";
    for(int i=1; i<=n; i++)
        g[i]=0;
    int rmax1=-1e9;
    for(int i=1; i<=n; i++)
    {
        if(a[i]<k)
            g[i]=g[i-1]+1;
        else
            g[i]=0;
    }
    for(int i=1; i<=n; i++)
        rmax1=max(rmax1,g[i]);
    cout<<rmax1;
    return 0;
}
