#include <bits/stdc++.h>
using namespace std;
int n;
vector<int> b;
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
            in();
        else
            pps(x + 1);
    }
}
int main()
{
    cin >> n;
    b.assign(n + 1, 0);
    pps(1);
    return 0;
}
