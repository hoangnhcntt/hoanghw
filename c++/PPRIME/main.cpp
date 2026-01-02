#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n) {
    if (n < 2) return false;
    if (n % 2 == 0) return n == 2;
    for (int i = 3; 1LL * i * i <= n; i += 2)
        if (n % i == 0) return false;
    return true;
}
int main() {
    freopen("PPRIME.INP", "r", stdin);
    freopen("PPRIME.OUT", "w", stdout);

    int N; cin >> N;
    vector<int> a(N);
    for (int i = 0; i < N; i++) cin >> a[i];

    vector<int> pos;
    for (int i = 0; i < N; i++)
        if (isPrime(a[i])) pos.push_back(i + 1);

    if (pos.empty()) cout << -1;
    else {
        for (int i = 0; i < (int)pos.size(); i++) {
            if (i) cout << " ";
            cout << pos[i];
        }
    }
}
