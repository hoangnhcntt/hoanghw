#include <bits/stdc++.h>
using namespace std;
long long n, a[10000];
bool nt(int x)
{
    if (x < 2) return false;
    for (int i = 2; i * i <= x; i++)
        if (x % i == 0)
            return false;
    return true;
}
long long tongUocKhongNguyenTo(long long x)
{
    long long sl = 0;
    for (long long i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            if (!nt(i)) sl += i;
            long long j = x / i;
            if (j != i && !nt(j)) sl += j;
        }
    }
    if (!nt(x)) sl += x;
    return sl;
}

int main()
{
    freopen("MA_C3.INP","r",stdin);
    freopen("MA_C3.OUT","w",stdout);
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++)
        cout << tongUocKhongNguyenTo(a[i]) << endl;
    return 0;
}
