#include <bits/stdc++.h>
using namespace std;
int n;
vector<int> b;
bool kt()
{
    int sl0 = 0;
    for (int i = 1; i <= n; i++)
        if (b[i] == 0)
            sl0++;
    return (n - sl0 == sl0);
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
    freopen("DQBN02.INP", "r", stdin);
    freopen("DQBN02.OUT", "w", stdout);
    cin >> n;
    if (n % 2 == 0)
    {
        b.assign(n + 1, 0);
        pps(1);
    }
    else
        cout << -1;

    return 0;
}
