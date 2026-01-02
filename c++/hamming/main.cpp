#include <bits/stdc++.h>
using namespace std;
bool shm(long long x)
{
    if (x == 0) return false;

    while (x % 2 == 0) x /= 2;
    while (x % 3 == 0) x /= 3;
    while (x % 5 == 0) x /= 5;

    return (x == 1);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    set<long long> c;
    for (int i = 1; i <= 1000000; i++)
    {
        if (shm(i))
            c.insert(i);
    }
    int t;
    cin >> t;
    long long x;

    while (t--)
    {
        cin >> x;
        if (c.find(x) != c.end())
            cout << c.find(x)<<endl;
        else
            cout <<"Not in sequence";
    }
    return 0;
}
