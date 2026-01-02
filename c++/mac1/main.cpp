#include <bits/stdc++.h>
using namespace std;
int n,a[1000];
int f[10000];
void sdemuoc(int u)
{
    memset(f,0,sizeof(f));
    for(int i=1;i<=u;i++)
        for(int j=1;j<=u/i;j++)
        f[i*j]++;
}
int main()
{
    freopen("mac1.inp","r",stdin);
    freopen("mac1.out","w",stdout);
    int n;
    sdemuoc(1000000);
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        cout<<f[n];
    }
    return 0;
}
