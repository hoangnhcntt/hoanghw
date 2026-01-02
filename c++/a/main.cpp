#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    double money = 0;

    if (N <= 1) {
        money = 10000;
    }
    else if (N <= 30) {
        money = 10000 + (N - 1) * 13500;
    }
    else {
        money = 10000 + 29 * 13500 + (N - 30) * 11000;
    }

    if (N > 100) {
        money = money * 0.9;
    }

    cout << (long long)money;
    return 0;
}
