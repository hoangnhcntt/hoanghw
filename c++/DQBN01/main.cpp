#include <bits/stdc++.h>
using namespace std;
int n;
vector<int> b;
bool kt()
{
    for (int i = 1; i <= n - 2; i++)
    {
        if (b[i] + b[i + 1] + b[i + 2] == 3)
            return false;
    }
    return true;
}
void in()
{
    for (int i = 1; i <= n; i++)
        cout << b[i] << " ";
    cout << endl;
}
void xl()
{
    if (kt())
        in();
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
    freopen("DQBN01.INP", "r", stdin);
    freopen("DQBN01.OUT", "w", stdout);
    cin >> n;
    b.assign(n + 1, 0);
    pps(1);
    return 0;
}
