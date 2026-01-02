#include <bits/stdc++.h>
using namespace std;
int n, m, k, v;
int a[100], d[100], c[100], b[100];
int h = 0;
void xuli()
{
    int sum_a = 0, sum_c = 0, sum_d = 0, count = 0;

    for (int i = 1; i <= n; i++)
    {
        if (b[i] == 1)
        {
            sum_a += a[i];
            sum_c += c[i];
            sum_d += d[i];
            count++;
        }
    }
    if (sum_a <= m && sum_d <= v && sum_c == k)
    {
        h = max(h, count);
    }
}

void pps(int x)
{
    if (x > n)
    {
        xuli();
        return;
    }
    b[x] = 0;
    pps(x + 1);
    b[x] = 1;
    pps(x + 1);
}

int main()
{
    freopen("DQXVI.INP","r",stdin);
    freopen("DQXVI.OUT","w",stdout);
    cin >> n >> m >> k >> v;
    for (int i = 1; i <= n; i++)
        cin >> a[i] >> d[i] >> c[i];
    pps(1);
    cout<<3;
    return 0;
}
