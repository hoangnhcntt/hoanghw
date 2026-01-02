#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y, z;
    cin >> x >> y >> z;

    double S = (sqrt(x) + sqrt(y) + sqrt(z)) / (x + y + z);
    double P = (pow(x, 2) + pow(y, 2)) / (sqrt(z) + 1);

    cout << fixed << setprecision(3) << S << " " << P;
    return 0;
}
