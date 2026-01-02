#include <bits/stdc++.h>
using namespace std;
int m,n,s0,res,s[100][100],a[100][100];
int main()
{
    freopen("totalsq2.inp","r",stdin);
    freopen("totalsq2.out","w",stdout);
    cin>>m>>n>>s0;
    for(int i=1; i<=m; i++)
        for(int j=1; j<=n; j++)
            cin>>a[i][j];
    s[0][0]=0;
    for(int i=1; i<=m; i++)
        for(int j=1; j<=n; j++)
            s[i][j]=s[i][j-1]+s[i-1][j]-s[i-1][j-1]+a[i][j];
    for(int k=1; k<=min(m,n); k++)
        for(int i=1; i<=m-k+1; i++)
            for(int j=1; j<=n-k+1; j++)
            {
                int q=s[i+k-1][j+k-1]-s[i+k-1][j-1]-s[i-1][j+k-1]+s[i-1][j-1];
                if(q==s0 && res<k)
                    res=k;
            }
    cout<<res;
    return 0;
}
