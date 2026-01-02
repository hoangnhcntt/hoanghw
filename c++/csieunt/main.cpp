#include <bits/stdc++.h>
using namespace std;
bool isPrime(int x) {
    if (x < 2) return false;
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) return false;
    }
    return true;
}
int main() {
    freopen("CSIEUNT.INP", "r", stdin);
    freopen("CSIEUNT.OUT", "w", stdout);
    int n;
    cin >> n;
    int a[100005];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int max_tong = -1, c = -1, d = -1;
    int tong = 0, vt = 0;
    for (int i = 0; i < n; i++) {
        if (isPrime(a[i])) {
            tong += a[i];
            if (tong > max_tong) {
                max_tong = tong;
                c = vt;
                d = i;
            }
        } else {
            tong = 0;
            vt = i + 1;
        }
    }
    if (c == -1) {
        cout << "NONE";
    } else {
        for (int i = c; i <= d; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
