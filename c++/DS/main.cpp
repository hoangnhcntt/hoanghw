#include <bits/stdc++.h>
using namespace std;
long long solve(vector<int> &a, int n)
{
    vector<long long> freq(1000001, 0);
    for (int x : a) freq[x]++;
    long long total = 1LL * n * (n - 1) / 2;
    long long same = 0;
    for (long long f : freq)
    {
        if (f > 1) same += f * (f - 1) / 2;
    }
    return total - same;
}
int main()
{
    freopen("DS.INP", "r", stdin);
    freopen("DS.OUT", "w", stdout);
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    cout << solve(a, n);
    return 0;
}
