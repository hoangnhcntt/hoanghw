#include <bits/stdc++.h>
using namespace std;
using ll = long long;
bool nt(ll x)
{
    if (x < 2) return false;
    for (ll i = 2; i * i <= x; i++)
        if (x % i == 0)
            return false;
    return true;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin >> n;
    vector<ll> c;
    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            c.push_back(i);
            while (n % i == 0)
                n /= i;
        }
    }
    if (n > 1) c.push_back(n);
    cout << c.size();
    return 0;
}
