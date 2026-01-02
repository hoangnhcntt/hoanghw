#include <bits/stdc++.h>
using namespace std;
int n, a[700][700];
bool sodep(int x)
{
    int tong = 0;
    while (x > 0)
    {
        tong += x % 10;
        x /= 10;
    }
    return tong == 10;
}
int main()
{
    cin >> n;
    int rmin = 1e9;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
            rmin = min(rmin, a[i][j]);
        }
    int sl = 0;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            if (a[i][j] == rmin)
                sl++;
    cout << sl << endl;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            if (sodep(a[i][j]))
                cout << a[i][j] << " ";
    cout << endl;
    int dp[700][700];
    int l1, l2;
    vector<int> b;
    for (int i = 1; i <= n; i++)
        dp[0][i] = 0;
    for (int j = 1; j <= n; j++)
        dp[j][0] = 0;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
        {
            dp[i][j] = max(dp[i - 1][j] + a[i][j], dp[i][j - 1] + a[i][j]);
            if (dp[i - 1][j] + a[i][j] > dp[i][j - 1] + a[i][j])
            {
                l1 = i;
                l2 = j;
                b.push_back(l1);
                b.push_back(l2);
            }
            if (dp[i - 1][j] + a[i][j] < dp[i][j - 1] + a[i][j])
            {
                l1 = i;
                l2 = j;
                b.push_back(l1);
                b.push_back(l2);
            }
        }
    cout << dp[n][n] << endl;
    int dem = 0;
    for (int x : b)
    {
        cout << x << " ";
        dem++;
        if (dem == 2)
        {
            cout << endl;
            dem = 0;
        }
    }
    return 0;
}
