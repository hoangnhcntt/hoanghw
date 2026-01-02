#include <bits/stdc++.h>
using namespace std;
int n;
vector<int> a, b;
int tong = 0;
bool ktt = 0;
bool kt()
{
    for (int i = 1; i <= n; i++)
        if (b[i] != a[i])
            return false;
    return true;
}
void xl()
{
    if (kt())
        ktt = 1;
    else
        ktt = 0;
}
void in()
{
    for (int i = 1; i <= n; i++)
        cout << b[i] << " ";
    cout << endl;
}
void pps(int x)
{
    for (int i = 0; i <= 1; i++)
    {
        b[x] = i;
        if (x == n)
        {
            if (ktt == 1)
            {
                in();
                ktt = 0;
            }
            else
                xl();
        }
        else
            pps(x + 1);
    }
}
int main()
{
    freopen("DQBN00.INP", "r", stdin);
    freopen("DQBN00.OUT", "w", stdout);
    cin >> n;
    a.assign(n + 1, 0);
    b.assign(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        tong += a[i];
    }
    if (tong == n)
        cout << "NONE";
    else
        pps(1);
    return 0;
}
