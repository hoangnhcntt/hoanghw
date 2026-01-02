#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    vector<long long> a(N + 1), S(N + 1, 0);

    // Bước 1: nhập mảng
    for (int i = 1; i <= N; i++) {
        cin >> a[i];
    }

    // Bước 2: tạo mảng tổng tích lũy
    for (int i = 1; i <= N; i++) {
        S[i] = S[i - 1] + a[i];
    }

    // Bước 3: tìm vị trí đẹp
    bool found = false;
    for (int i = 1; i <= N; i++) {
        if (S[i] == S[N] - S[i]) {
            cout << i << " ";
            found = true;
        }
    }

    // Bước 4: nếu không có
    if (!found) {
        cout << -1;
    }

    return 0;
}
