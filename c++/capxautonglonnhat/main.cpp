#include <bits/stdc++.h>
using namespace std;
bool ss(const string &a, const string &b) {
    if (a.size() != b.size())
        return a.size() < b.size();
    return a < b;
}
string cong(string a, string b) {
    while (a.size() < b.size()) a = "0" + a;
    while (b.size() < a.size()) b = "0" + b;
    int nho = 0;
    string res = "";
    for (int i = a.size()-1; i >= 0; i--) {
        int sum = (a[i]-'0') + (b[i]-'0') + nho;
        nho = sum / 10;
        res.push_back(sum % 10 + '0');
    }
    if (nho) res.push_back(nho + '0');
    reverse(res.begin(), res.end());
    return res;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string a, b, c;
    cin >> a >> b >> c;
    vector<string> v = {a, b, c};
    sort(v.begin(), v.end(), ss);
    cout << cong(v[1], v[2]);
    return 0;
}
