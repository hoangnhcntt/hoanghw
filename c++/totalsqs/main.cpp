#include <bits/stdc++.h>
using namespace std;
int m, n, k,s0;
int a[1000][1000];
int dp[1000][1000];
int main()
{
    //freopen("TOTALSQS.INP","r",stdin);
    //freopen("TOTALSQS.OUT","w",stdout);
    cin >> m >> n >> s0;
    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];
    int r = 0;
    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++)
        {
            dp[i][j]=dp[i-1][j]+dp[i][j+1]-dp[i-1][j-1]+a[i][j];
        }
    int k=min(n,m);
    for(int kmax=k; kmax>=1; kmax--)
    {
        for (int i = 1; i <= m - k + 1; i++)
            for (int j = 1; j <= n - k + 1; j++)
            {
                int q;
                q=dp[i+k-1][j+k-1]-dp[i-1][j+k-1]-dp[i+k-1][j-1]+dp[i-1][j-1];
                if(q==s0)
                {
                    cout<<k;
                    r=1;
                    break;
                }
            }
    }
    if(r==0)
        cout<<"NONE";
    return 0;
}
