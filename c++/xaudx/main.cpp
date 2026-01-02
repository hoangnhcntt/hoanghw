#include <bits/stdc++.h>
using namespace std;
int XauDX(string s) {
    int n = s.size();
    vector<vector<bool>> g(n, vector<bool>(n, false));
    for (int i = 0; i < n; ++i) {
        g[i][i] = true;
    }
    for (int len = 2; len <= n; ++len) {
        for (int i = 0; i <= n - len; ++i) {
            int j = i + len - 1;
            g[i][j] = (s[i] == s[j]) && g[i + 1][j - 1];
        }
    }
    int lmax = 1;
    for (int len = n; len >= 1; --len) {
        for (int i = 0; i <= n - len; ++i) {
            if (g[i][i + len - 1]) {
                return len;
            }
        }
    }
    return lmax;
}

int main() {
    freopen("xaudx.inp","r",stdin);
    freopen("xaudx.out","w",stdout);
    string s;
    cin >> s;
    cout << XauDX(s) << endl;
    return 0;
}
