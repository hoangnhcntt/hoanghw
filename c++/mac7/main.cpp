#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n, x;
    cin >> n >> x;
    map<long long, long long> ts;
    long long t = x;
    for (long long i = 2; i * i <= t; i++) {
        while (t % i == 0) {
            ts[i]++;
            t /= i;
        }
    }
    if (t > 1) ts[t]++;

    long long kq = LLONG_MAX;

    for (auto it : ts) {
        long long p = it.first;
        long long mu = it.second;

        long long dem = 0, pp = p;
        while (pp <= n) {
            dem += n / pp;
            if (pp > n / p) break;
            pp *= p;
        }
        kq = min(kq, dem / mu);
    }
    cout << kq;
    return 0;
}
