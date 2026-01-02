#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    string s = to_string(n);
    int k = s.size();
    int d = s[0] - '0';
    long long ans = 0;
    long long p = 1;
    for (int i = 1; i <= k - 1; i++)
    {
        ans += 4 * p;
        p *= 10;
    }
    long long base = 1;
    for (int i = 1; i < k; i++)
        base *= 10;
    vector<int> even = {2, 4, 6, 8};
    for (int e : even)
    {
        if (e < d)
        {
            ans += base;
        }
        else if (e == d)
        {
            ans += (n % base) + 1;
        }
    }
    cout << ans;
    return 0;
}
