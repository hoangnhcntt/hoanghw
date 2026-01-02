#include <bits/stdc++.h>
using namespace std;
int a, b, c, d, v;
int main()
{
    //freopen("BAI32.INP", "r", stdin);
    //freopen("BAI32.OUT", "w", stdout);
    cin >> a >> b >> c >> d >> v;
    long long tu = -1LL * b + 1LL * v * d;
    long long mau = 1LL * a - 1LL * v * c;
    if (mau == 0)
    {
        if (tu == 0)
            cout << "MULTIPLE";
        else
            cout << "NONE";
    }
    else
    {
        if (1LL * d * mau == 1LL * c * tu)
        {
            cout << "NONE";
        }
        else
        {
            long long gcd = __gcd(abs(tu), abs(mau));
            tu /= gcd;
            mau /= gcd;
            if (mau < 0)
            {
                tu = -tu;
                mau = -mau;
            }
            cout << "x = " << tu << "/" << mau;
        }
    }
    return 0;
}
