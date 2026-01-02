#include <bits/stdc++.h>
using namespace std;
int demuoc(int n) {
    int dem = 0;
    for (int i = 1; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            dem++;
            if (i != n / i) {
                dem++;
            }
        }
    }
    return dem;
}

int main() {
    int n;
    cin >> n;
    int A[n];
    for (int i = 0; i < n; ++i) {
        cin >> A[i];
    }

    int tonguoc = 0;
    for (int i = 0; i < n; ++i) {
        tonguoc += demuoc(A[i]);
    }

    cout << tonguoc << endl;

    return 0;
}
