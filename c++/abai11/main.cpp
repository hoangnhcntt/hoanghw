#include <iostream>
using namespace std;
int main()
{
    freopen("abai11.inp", "r", stdin);
    freopen("abai11.out", "w", stdout);
    int k;
    cin >> k;
    int tong;
    if (k % 2 == 0)
        tong = k / 2;
    else
        tong = (-k - 1) / 2;

    cout << tong << endl;
    return 0;
}
