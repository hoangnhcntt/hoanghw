#include <bits/stdc++.h>
using namespace std;
int n;
int a[700][700];
int dp[700][700];
int main()
{
    cin>>n;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            cin>>a[i][j];
    long long tong=0;
    for(int i=1; i<=n; i++)
        dp[i][0]=0;
    for(int j=1; j<=n; j++)
        dp[0][j]=0;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            dp[i][j]=max(dp[i][j-1]+a[i][j],dp[i-1][j]+a[i][j]);
    cout<<dp[n][n];
    return 0;
}
