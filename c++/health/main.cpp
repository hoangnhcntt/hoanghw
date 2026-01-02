#include <bits/stdc++.h>
using namespace std;
int n,a[100000],c[100000],b[100000],rmin=1e9;
void sxnp()
{
    for(int i=1; i<=n; i++)
        for(int j=i+1; j<=n; j++)
            if(a[i]<=a[j])
            {
                swap(a[i],a[j]);
                swap(b[i],b[j]);
            }
}
int main()
{
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        b[i]=i;
    }
    sxnp();
    for(int i=1; i<=n; i++)
        c[i]=1;
    for(int i=1; i<=n; i++)
    {
        if(a[i]==a[i-1])
            c[i]=c[i-1]+1;
        else
            c[i]=1;
    }
    for(int i=1; i<=n; i++)
        if(c[i]==1 && c[i+1]==1)
            rmin=min(rmin,a[i]);
    for(int i=1; i<=n; i++)
        if(a[i]==rmin)
            cout<<b[i]<<" ";
    return 0;
}
