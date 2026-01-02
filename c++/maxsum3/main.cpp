#include <bits/stdc++.h>
using namespace std;
int n,a[10000],rmax;
int tong(int u,int v)
{
    int h=0;
    for(int i=u; i<=v; i++)
        h+=a[i];
    return h;
}
int main()
{
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    for(int i=1; i<=n-1; i++)
        for(int j=i+1; j<=n; j++)
            rmax=max(rmax,tong(i,j));
    cout<<rmax;
    return 0;
}
