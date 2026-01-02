#include <bits/stdc++.h>
using namespace std;
bool depOMG (int n)
{
    int s = 0;
    while (n > 0)
    {
        s += n % 10;
        n /= 10;
    }
    return s % 5 == 0;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b;
    cin >> a >> b;
    int dem = 0;
    for (int i = a; i <= b; i++)
        if (depOMG (i)) dem++;
    cout << dem;
    return 0;
}
