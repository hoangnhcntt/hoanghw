#include <bits/stdc++.h>
using namespace std;
int n,a[10000][10000],m,rmin=1e9,rmax=-1e9;
int main()
{
    cin>>n>>m;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=m; j++)
            cin>>a[i][j];
    for(int i=1;i<=n;i++)
        rmin=min(rmin,a[i][1]);
    for(int i=1;i<=m;i++)
        rmax=max(rmax,a[i][1]);
    cout<<rmax<<rmin;
    return 0;
}
