#include <bits/stdc++.h>
using namespace std;
int x1, y11, x2, y2, r, mi;
int main()
{
    freopen("BAI25.INP","r",stdin);
    freopen("BAI25.OUT","w",stdout);
    cin >> x1 >> y11 >> x2 >> y2>> r;
    mi = sqrt((x2 - x1) * (x2 - x1) + (y2 - y11) * (y2 - y11));
    if(mi > r)
        cout << "OUT";
    else
        cout << "IN";
    return 0;
}
