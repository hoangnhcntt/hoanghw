#include <bits/stdc++.h>
using namespace std;
string s;
int solve(string s) {
    int max_len = 0, cur_len = 0;
    for (char c : s) {
        if (isdigit(c)) {
            cur_len++;
        } else {
            max_len = max(max_len, cur_len);
            cur_len = 0;
        }
    }
    max_len = max(max_len, cur_len);
    return max_len;
}

int main() {
    freopen("KTS.INP", "r", stdin);
    freopen("KTS.OUT", "w", stdout);
    getline(cin, s);
    cout << solve(s);
    return 0;
}

