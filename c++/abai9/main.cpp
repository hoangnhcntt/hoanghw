#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("abai9.inp","r",stdin);
    freopen("abai9.out","w",stdout);
    int k;
    cin >> k;
    double tong = 1.0 - 1.0 / (k + 1);
    cout << fixed << setprecision(2) << tong << endl;
    return 0;
}
