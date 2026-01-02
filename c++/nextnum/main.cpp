#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int n = stoi(s);
    sort(s.begin(), s.end());
    long long res = 1e9;
    do
    {
        int num = stoi(s);
        if (num > n)
            res = min(res, 1LL * num);
    }
    while (next_permutation(s.begin(), s.end()));
    if (res != 1e9) cout << res;
    else cout << -1;
    return 0;
}
