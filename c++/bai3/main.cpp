#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("bai3.inp", "r", stdin);
    freopen("bai3.out", "w", stdout);
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    unordered_map<int, int> freq;
    long long count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        count += freq[k - a[i]];
        freq[a[i]]++;
    }
    cout << count;
    return 0;
}
