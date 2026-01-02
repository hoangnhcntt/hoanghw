#include <bits/stdc++.h>
using namespace std;
int n,a[10000];
void he(int x)
{
    int c[10000],k=0;
    for(int i=1; i*i<=x; i++)
    {
        if(x%i==0)
            c[++k]=i;
        if(i!=x/i)
            c[++k]=i;
    }
    sort(c+1,c+1+k);
    for(int i=1; i<=k; i++)
        cout<<c[i];
}
int main()
{
    freopen("CSPASS.INP","r",stdin);
    freopen("CSPASS.OUT","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    for(int i=1; i<=n; i++)
    {
        he(a[i]);
        cout<<" ";
    }
    return 0;
}
