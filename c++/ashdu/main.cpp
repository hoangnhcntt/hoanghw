#include <bits/stdc++.h>
using namespace std;
int n,a[10000][10000],m,tong,rmax,rmin;
int main()
{
    cin>>n>>m;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=m; j++)
            cin>>a[i][j];
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            rmax=min(rmax,a[i][j]);
        }

    }
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            if(rmax<tong)
                rmin=min(rmin,tong);
        }
    }
    cout<<rmin;
    return 0;
}
