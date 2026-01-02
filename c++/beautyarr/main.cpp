#include <bits/stdc++.h>
using namespace std;
int n,b[1000];
int c[100000],res=0,k;
int a[100000];
void xuli()
{
    int k=0;
    for(int i=1; i<=n; i++)
        if(b[i]==1)
            c[++k]=a[i];
    for(int i=1; i<=k-2; i++)
    {
        if(c[i]<c[i+1]&&c[i+1]<c[i+2])
            return;
        if(c[i]>c[i+1]&&c[i+1]>c[i+2])
            return;
    }
    res=max(res,k);
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
    for(int i=1;i<=n;i++)
        cin>>a[i];
    pps(1);
    cout<<n-res;
    return 0;
}
