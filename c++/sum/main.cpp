#include <bits/stdc++.h>
using namespace std;
int ktra(int x) {
    int dem = 0;
    for (int a = 1; a <= x / 4; a++) {
        for (int b = a; b <= (x - a) / 3; b++) {
            for (int c = b; c <= (x - a - b) / 2; c++) {
                int d = x - a - b - c;
                if (d >= c) {
                    ++dem;
                }
            }
        }
    }
    return dem;
}
int main() {
    int x;
    while (cin >> x) {
        cout << ktra(x) << endl;
    }
    return 0;
}
