#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    long long K;
    cin >> N >> K;

    vector<long long> W(N);
    for (int i = 0; i < N; i++) cin >> W[i];

    sort(W.begin(), W.end());

    int l = 0, r = N - 1;
    int ans = 0;

    while (l < r) {
        if (W[l] + W[r] >= K) {
            ans++;
            l++;
            r--;
        } else {
            l++;
        }
    }

    cout << ans;
    return 0;
}
