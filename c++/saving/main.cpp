#include <bits/stdc++.h>
using namespace std;

int main() {
    double M, X, K;
    cin >> M >> X >> K;

    int years = 0;
    double money = M;

    while (money < K) {
        money *= (1 + X / 100.0);
        years++;
    }

    cout << years;
    return 0;
}
