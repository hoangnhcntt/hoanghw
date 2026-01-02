#include <bits/stdc++.h>
using namespace std;
int m, n, k;
int a[1000][1000];
int dp[1000][1000];
int main()
{
    freopen("TOTALSQU.INP","r",stdin);
    freopen("TOTALSQU.OUT","w",stdout);
    cin >> m >> n >> k;
    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];
    int r = -1e18;
    for (int i = 1; i <= m - k + 1; i++)
        for (int j = 1; j <= n - k + 1; j++)
        {
            dp[i][j]=dp[i-1][j]+dp[i][j+1]-dp[i-1][j-1]+a[i][j];
        }
    for (int i = 1; i <= m - k + 1; i++)
        for (int j = 1; j <= n - k + 1; j++)
        {
            int q;
            q=dp[i+k-1][j+k-1]-dp[i-1][j+k-1]-dp[i+k-1][j-1]+dp[i-1][j-1];
            r=max(r,q);
        }
    cout << r;
    return 0;
}
