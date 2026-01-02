#include <bits/stdc++.h>
using namespace std;
int n, k, a[100], c[100], b[100], hmax = 0;
void xuli()
{
    int tong = 0, he = 0;
    for (int i = 1; i <= n; i++)
    {
        if (b[i] == 1)
        {
            tong += a[i];
            he += c[i];
        }
    }
    if (tong == k)
        hmax = max(hmax, he);
}
void pps(int x)
{
    for (int i = 0; i <= 1; i++)
    {
        b[x] = i;
        if (x == n)
            xuli();
        else
            pps(x + 1);
    }
}
int main()
{
    freopen("DQCN.INP","r",stdin);
    freopen("DQCN.OUT","w",stdout);
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        cin >> a[i] >> c[i];
    pps(1);
    if(hmax!=0)
    cout << hmax;
    else
        cout<<"NONE";
    return 0;
}
