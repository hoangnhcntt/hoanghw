#include <bits/stdc++.h>
using namespace std;
int n,a[10000][10000],m,tong,rmax;
int main()
{
    cin>>n>>m;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=m; j++)
            cin>>a[i][j];
    for(int i=m; i>=1; i--)
    {
        for(int j=n; j>=1; j--)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
