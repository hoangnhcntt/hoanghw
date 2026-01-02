#include <bits/stdc++.h>
using namespace std;
long long n, m;
int sl = 0;
long long du(long long x)
{
    long long l = 0;
    for (long long i = 1; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            if (i < x) l += i;
            if (i != x / i && x / i < x) l += x / i;
        }
    }
    return l;
}
bool kt(long long x, long long y)
{
    return du(x) == y && du(y) == x;
}
int main()
{
    freopen("MA_C4.INP", "r", stdin);
    freopen("MA_C4.OUT", "w", stdout);
    cin >> n >> m;
    for (long long i = n; i <= m; i++)
    {
        long long k = du(i);
        if (i < k && k <= m && kt(i, k))
        {
            sl++;
        }
    }
    cout << sl;
    return 0;
}
