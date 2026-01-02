#include <iostream>
#include <vector>

using namespace std;

const int MOD = 132020;

int countWays(vector<bool>& broken, int n) {
    vector<int> dp(n + 1);
    dp[0] = 1;
    dp[1] = 1;

    for (int i = 2; i <= n; ++i) {
        if (!broken[i]) {
            dp[i] = (dp[i - 1] + dp[i - 2]) % MOD;
        }
    }

    return dp[n];
}

int main() {
    int n, k;
    cin >> n >> k;

    vector<bool> broken(n + 1, false);
    for (int i = 0; i < k; ++i) {
        int x;
        cin >> x;
        broken[x] = true;
    }

    int result = countWays(broken, n);
    cout << result << endl;

    return 0;
}
