#include <bits/stdc++.h>
using namespace std;
int main() {
    int N, M;
    cin >> N >> M;
    vector<vector<int>> cost(N + 1, vector<int>(M + 1));
    vector<vector<int>> dp(N + 1, vector<int>(M + 1, 1e9));
    for (int i = 1; i <= N; ++i)
        for (int j = 1; j <= M; ++j)
            cin >> cost[i][j];
    dp[1][1] = cost[1][1];
    for (int i = 1; i <= N; ++i) {
        for (int j = 1; j <= M; ++j) {
            if (i > 1)
                dp[i][j] = min(dp[i][j], dp[i - 1][j] + cost[i][j]);
            if (j > 1)
                dp[i][j] = min(dp[i][j], dp[i][j - 1] + cost[i][j]);
        }
    }
    cout << dp[N][M];
    return 0;
}
