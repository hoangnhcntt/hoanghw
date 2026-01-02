#include <bits/stdc++.h>
#define PI 3.14
using namespace std;

int main() {
    //freopen("abai5.inp", "r", stdin);
    //freopen("abai5.out", "w", stdout);
    double ab;
    cin >> ab;
    double chuVi = 2 * PI * ab;
    double dienTich = PI * ab * ab;
    cout << fixed << setprecision(2)<< chuVi <<" " << dienTich;
    return 0;
}
