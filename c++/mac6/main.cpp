#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long l, r;
    cin >> l >> r;
    int can = sqrt(r) + 1;
    vector<bool> nt(can + 1, true);
    vector<int> ds;

    nt[0] = nt[1] = false;
    for (int i = 2; i <= can; i++) {
        if (nt[i]) {
            ds.push_back(i);
            if ((long long)i * i <= can)
                for (int j = i * i; j <= can; j += i)
                    nt[j] = false;
        }
    }
    vector<bool> ok(r - l + 1, true);
    for (int p : ds) {
        long long bat = max((long long)p * p,
                            ((l + p - 1) / p) * p);
        for (long long x = bat; x <= r; x += p)
            ok[x - l] = false;
    }
    if (l == 1) ok[0] = false;
    int dem = 0;
    for (bool x : ok) if (x) dem++;
    cout << dem;
    return 0;
}
