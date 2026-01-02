#include <bits/stdc++.h>
using namespace std;
string tru(string a, string b) {
    while (b.size() < a.size()) b = '0' + b;
    string res = "";
    int bo = 0;
    for (int i = a.size() - 1; i >= 0; i--) {
        int x = (a[i] - '0') - (b[i] - '0') - bo;
        if (x < 0) {
            x += 10;
            bo = 1;
        } else {
            bo = 0;
        }
        res += (x + '0');
    }
    reverse(res.begin(), res.end());
    while (res.size() > 1 && res[0] == '0') res.erase(res.begin());
    return res;
}

int main() {
    string a, b;
    cin >> a >> b;
    cout << tru(a, b) << endl;
    return 0;
}
