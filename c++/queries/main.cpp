#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    vector<long long> toidepzai(n+1,0);
    for (int i = 1; i <= n; i++)
    {
        long long x;
        cin >> x;
        toidepzai[i] = toidepzai[i - 1] + x;
    }
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        cout << toidepzai[r] - toidepzai[l - 1] << endl;
    }
    return 0;
}
