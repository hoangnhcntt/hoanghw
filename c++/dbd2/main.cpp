#include <bits/stdc++.h>
using namespace std;
const long long MOD = 1e9 + 7;

int main() {
    double N, P;
    cin >> N >> P;

    if (P == 1) {
        cout << (long long)(N + 1) % (long long)MOD;
        return 0;
    }

    long double tu = pow(P, N + 1) - 1;
    long double mau = P - 1;

    long long S = fmod(tu / mau, MOD);
    if (S < 0) S += MOD;

    cout << (long long)S;
    return 0;
}
