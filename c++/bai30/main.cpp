#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("BAI30.INP", "r", stdin);
    freopen("BAI30.OUT", "w", stdout);
    int n;
    cin >> n;
    vector<int> d;
    d.push_back(n / 100);
    d.push_back((n / 10) % 10);
    d.push_back(n % 10);
    sort(d.begin(), d.end(), greater<int>());
    int meo = d[0]*100 + d[1]*10 + d[2];
    cout << meo << endl;
    return 0;
}
