#include <bits/stdc++.h>
using namespace std;
int n, k;
vector<int> b;
bool kt()
{
    int sl1 = 0;
    for (int i = 1; i <= n; i++)
        if (b[i] == 1)
            sl1++;

    return (sl1 == k);
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
    freopen("DQBN03.INP", "r", stdin);
    freopen("DQBN03.OUT", "w", stdout);
    cin >> n >> k;
    b.assign(n + 1, 0);
    pps(1);
    return 0;
}
