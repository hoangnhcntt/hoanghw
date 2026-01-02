#include <bits/stdc++.h>
using namespace std;
long long n, k, a[10000], b[10000], c[10000], rmax = 0, l = 0;
void xuli()
{
    int sum = 0, count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (b[i] == 1)
        {
            sum += a[i];
            count++;
        }
    }
    if (sum % k == 0)
    {
        if (count > rmax)
            rmax = count;
    }
}
void pps(int x)
{
    if (x > n)
    {
        xuli();
        return;
    }
    b[x] = 1;
    pps(x + 1);
    b[x] = 0;
    pps(x + 1);
}
void xuli1()
{
    int sum = 0, count = 0;
    int temp[10000], tempSize = 0;

    for (int i = 1; i <= n; i++)
    {
        if (b[i] == 1)
        {
            sum += a[i];
            temp[tempSize++] = a[i];
        }
    }

    if (sum % k == 0 && tempSize == rmax)
    {
        if (l == 0)
        {
            memcpy(c, temp, tempSize * sizeof(int));
            l = tempSize;
        }
    }
}
void pps1(int x)
{
    if (x > n)
    {
        xuli1();
        return;
    }
    b[x] = 1;
    pps1(x + 1);
    b[x] = 0;
    pps1(x + 1);
}

int main()
{
    freopen("DQBN8.INP","r",stdin);
    freopen("DQBN8.OUT","w",stdout);
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    pps(1);
    pps1(1);
    if (l == 0)
        cout << "NONE";
    else
    {
        for (int i = 0; i < l; i++)
            cout << c[i] << " ";
    }
    return 0;
}
