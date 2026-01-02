#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("PTICH.INP","r",stdin);
    freopen("PTICH.OUT","w",stdout);

    int N; cin >> N;
    vector<long long> a(N);
    for (auto &x : a) cin >> x;
    sort(a.begin(), a.end());

    long long res = max(1LL * a[0] * a[1], 1LL * a[N-1] * a[N-2]);
    cout << res;
}
