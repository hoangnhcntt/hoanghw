#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("PHATQUA.INP", "r", stdin);
    freopen("PHATQUA.OUT", "w", stdout);
    long long A, B;
    cin >> A >> B;
    long long g = __gcd(A, B);
    int count = 0;
    for (long long i = 1; i * i <= g; ++i)
    {
        if (g % i == 0)
        {
            count++;
            if (i != g / i) count++;
        }
    }
    cout << count;
}
