#include <bits/stdc++.h>
using namespace std;
int n, k;
vector<int> b;
int tong = 0;
void in()
{
    for (int i = 1; i <= n; i++)
        cout << b[i] << " ";
    cout << endl;
}
void xl()
{
    if (tong + 1 == k)
    {
        in();
        tong++;
    }
    else
        tong++;
}
void pps(int x)
{
    for (int i = 0; i <= 1; i++)
    {
        b[x] = i;
        if (x == n)
            xl();
        else
            pps(x + 1);
    }
}
int main()
{
    freopen("DQBN000.INP", "r", stdin);
    freopen("DQBN000.OUT", "w", stdout);
    cin >> n >> k;
    b.assign(n + 1, 0);
    pps(1);
    return 0;
}
