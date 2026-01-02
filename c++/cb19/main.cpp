#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    double S = (pow(a, 3) + pow(b, 3) + pow(c, 3) + pow(d, 3)) / pow(a + b + c + d, 2);
    double P = (pow(a, 2) + pow(b, 2) + pow(c, 2) + pow(d, 2)) / sqrt(a + b + c + d);
    cout << fixed << setprecision(3) << S << " " << P;
    return 0;
}
