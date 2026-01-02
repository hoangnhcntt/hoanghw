#include <bits/stdc++.h>
using namespace std;
const int MAX = 1e7 + 5;
bool isPrime[MAX];
void sang()
{
    fill(isPrime, isPrime + MAX, true);
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i < MAX; i++)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j < MAX; j += i)
                isPrime[j] = false;
        }
    }
}
bool isPalindrome(int x)
{
    string s = to_string(x);
    string t = s;
    reverse(t.begin(), t.end());
    return s == t;
}
bool check(int x)
{
    if (!isPalindrome(x)) return false;
    int cnt = 0;
    int sqrt_x = sqrt(x);
    for (int i = 1; i <= sqrt_x; i++)
    {
        if (x % i == 0)
        {
            if (isPrime[i]) cnt++;
            int j = x / i;
            if (j != i && isPrime[j]) cnt++;
            if (cnt >= 3) return true;
        }
    }
    return false;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("BAI2.INP","r",stdin);
    freopen("BAI2.OUT","w",stdout);
    sang();
    int n, m;
    cin >> n >> m;
    int res = 0;
    for (int i = n; i <= m; i++)
    {
        if (check(i)) res++;
    }
    cout << res;
    return 0;
}
