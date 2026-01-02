#include <bits/stdc++.h>
using namespace std;
void canbang(string &u, string &v)
{
    while (u.size() < v.size())
        u = '0' + u;
    while (v.size() < u.size())
        v = '0' + v;
}
string congxau(string a, string b)
{
    canbang(a, b);
    int dz = 0;
    string kq = "";
    for (int i = a.size() - 1; i >= 0; i--)
    {
        int soA = a[i] - '0';
        int soB = b[i] - '0';
        int tong = soA + soB + dz;
        kq.push_back((tong % 10) + '0');
        dz = tong / 10;
    }

    if (dz) kq.push_back(dz + '0');
    reverse(kq.begin(), kq.end());
    return kq;
}
int main()
{
    int n;
    cin >> n;
    if (n == 1 || n == 2)
    {
        cout << 1;
        return 0;
    }
    string f1 = "1", f2 = "1", f3;
    for (int i = 3; i <= n; i++)
    {
        f3 = congxau(f1, f2);
        f1 = f2;
        f2 = f3;
    }
    cout << f3;
    return 0;
}
