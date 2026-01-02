#include <bits/stdc++.h>
using namespace std;
int n, m;
int a[100005], b[100005];
int main()
{
    freopen("BAI03.INP", "r", stdin);
    freopen("BAI03.OUT", "w", stdout);
    cin >> n >> m;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];
    sort(a, a + n);
    sort(b, b + m);
    int i = 0, j = 0, dem = 0;
    while (i < n && j < m)
    {
        if (a[i] > b[j])
        {
            dem++;
            i++;
            j++;
        }
        else
        {
            i++;
        }
    }

    cout << dem << endl;
    return 0;
}
