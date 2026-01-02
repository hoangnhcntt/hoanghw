#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    vector<int> g(n, 1);
    for (int i = 1; i < n; i++)
    {
        if (abs(a[i] - a[i - 1]) <= k)
            g[i] = g[i - 1] + 1;
        else
            g[i] = 1;
    }

    int rmax = *max_element(g.begin(), g.end());
    cout << rmax;

    return 0;
}
