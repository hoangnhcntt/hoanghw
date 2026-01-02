#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, p;
    cin >> n >> p;
    long long res;
    if (p == 1)
    {
        res = (n + 1) * (n + 2) / 2;
    }
    else
    {
        long double a = pow(p, n + 1);
        long double b = pow(p, n + 2);

        long double num = p - (n + 1) * a + n * b - 1;
        long double denom = (1 - p) * (1 - p);

        res = fmod(num / denom,1000000007);
    }
    cout << (long long)res;
    return 0;
}
