#include <bits/stdc++.h>
using namespace std;
int ax, ay, bx, by, cx, cy;
float dab, dbc, dca, p, s;
float k(int mx, int my, int nx, int ny)
{
    return (sqrt((mx - nx) * (mx - nx) + (my - ny) * (my - ny)));
}
int main()
{
    freopen("BAI26.INP","r",stdin);
    freopen("BAI26.OUT","w",stdout);
    cin >> ax >> ay >> bx >> by >> cx >> cy;
    dab = k(ax, ay, bx, by);
    dbc = k(bx, by, cx, cy);
    dca = k(cx, cy, ax, ay);
    if (dab + dbc <= dca || dbc + dca <= dab || dca + dab <= dbc)
    {
        cout<<"NONE";
    }
    else
    {
        p = (dab + dbc + dca) / 2.0;
        s = sqrt(p * (p - dab) * (p - dbc) * (p - dca));
        cout<<fixed<<setprecision(2)<<s;
    }
    return 0;
}
