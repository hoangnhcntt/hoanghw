#include <bits/stdc++.h>
using namespace std;
int m, n, a[1000][1000],b[1000][1000];
bool kt(int x, int y)
{
    int rmax = 0;
    int rmin = 1e9;
    for (int i = 1; i <= n; i++)
        rmax = max(rmax, a[y][i]);
    for (int i = 1; i <= m; i++)
        rmin = min(rmin, a[i][x]);
    return (a[y][x] == rmax && a[y][x] == rmin);
}
int main()
{
    freopen("SIGNAL.INP", "r", stdin);
    freopen("SIGNAL.OUT", "w", stdout);
    cin >> m >> n;
    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];
    bool tim = false;
    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++)
            if (kt(j, i))
            {
                cout << i << " " << j << endl;
                tim = true;
            }
    if (!tim)
        cout << "0 0" << endl;
    return 0;
}
