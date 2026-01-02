#include <bits/stdc++.h>
using namespace std;
int a[100][100],n,m,b[100][100];
int main()
{
    freopen("rrote.inp","r",stdin);
    freopen("rrote.out","w",stdout);
    cin>>m>>n;
    for(int i=1; i<=m; i++)
        for(int j=1; j<=n; j++)
            cin>>a[i][j];
    for(int i=1; i<=m; i++)
        for(int j=1; j<=n; j++)
            b[j][m-i+1]=a[i][j];
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
            cout<<b[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
