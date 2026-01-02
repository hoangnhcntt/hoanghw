#include <bits/stdc++.h>
using namespace std;
int n,m,a[100][100],k,sl=0;
int main()
{
    freopen("rectwsu2.inp","r",stdin);
    freopen("rectwsu2.out","w",stdout);
    cin>>m>>n>>k;
    int s[100][100];
    for(int i=1; i<=m; i++)
        for(int j=1; j<=n; j++)
            cin>>a[i][j];
    for(int i=1; i<=m; i++)
        for(int j=1; j<=n; j++)
        {
            s[i][j]=s[i][j-1]+s[i-1][j]-s[i-1][j-1]+a[i][j];
        }
    for(int i1=1; i1<=m; i1++)
        for(int j1=1; j1<=n; j1++)
            for(int i2=1; i2<=m; i2++)
                for(int j2=1; j2<=n; j2++)
                {
                    int q=s[i2][j2]-s[i1-1][j2]-s[i2][j1-1]+s[i1-1][j1-1];
                    if(q%k==0)
                        sl++;
                }
    cout<<sl;
    return 0;
}
