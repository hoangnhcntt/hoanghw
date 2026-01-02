#include <bits/stdc++.h>
using namespace std;
using int128 = __int128;
int128 k;
int128 a, b, c;
void xuat(int128 x) {
    if (x == 0) {
        cout << 0;
        return;
    }
    string s;
    while (x > 0) {
        s.push_back((x % 10) + '0');
        x /= 10;
    }
    reverse(s.begin(), s.end());
    cout << s;
}

int main() {
    cin >> a >> b >> c;
    k = (int128)(a * (b + c)) + (int128)(b * (a + c));
    xuat(k);
    return 0;
}
