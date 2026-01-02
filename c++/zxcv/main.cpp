#include <bits/stdc++.h>
using namespace std;
int n,a[10000][10000],m,tong,rmax;
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
            tong+=a[j][i];
        }
        rmax=max(rmax,tong);
        tong=0;
    }
    cout<<rmax;
    return 0;
}
