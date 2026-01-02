#include <bits/stdc++.h>
using namespace std;
int n,a[10000][10000],m,tong,rmax;
int main()
{
    cin>>n>>m;
    for(int i=1; i<=m; i++)
        for(int j=1; j<=n; j++)
            cin>>a[i][j];
    sort(a+n+m,n,m);
    for(int i=1; i<=m; i++)
        for(int j=1; j<=n; j++)
            cout<<a[i][j];
    return 0;
}
