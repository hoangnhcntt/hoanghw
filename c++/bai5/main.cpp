#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("bai5.inp","r",stdin);
    freopen("bai5.out","w",stdout);
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    long long dem = 0;
    for (int l = 1; l <= n; l++)
    {
        long long tong = 0;
        for (int r = l; r <= n; r++)
        {
            tong += a[r];
            long long luythua = 1;
            for (int i = 1; i <= m; i++)
                luythua *= tong;
            if (luythua % k == 0)
                dem++;
        }
    }
    cout << dem;
    return 0;
}
