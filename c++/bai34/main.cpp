#include <bits/stdc++.h>
using namespace std;
int t(int x1, int y1, int x2, int y2)
{
    return x1 * y2 - x2 * y1;
}
bool kt(int x1, int y1, int x2, int y2, int x3, int y3, int xM, int yM)
{
    int d1 = t(x2 - x1, y2 - y1, xM - x1, yM - y1);
    int d2 = t(x3 - x2, y3 - y2, xM - x2, yM - y2);
    int d3 = t(x1 - x3, y1 - y3, xM - x3, yM - y3);
    bool hn = (d1 < 0) || (d2 < 0) || (d3 < 0);
    bool hp = (d1 > 0) || (d2 > 0) || (d3 > 0);
    return !(hn && hp);
}
int main()
{
    freopen("BAI34.INP", "r", stdin);
    freopen("BAI34.OUT", "w", stdout);
    int x1, y1, x2, y2, x3, y3, xM, yM;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> xM >> yM;
    cout << (kt(x1, y1, x2, y2, x3, y3, xM, yM) ? "IN" : "OUT");
    return 0;
}
