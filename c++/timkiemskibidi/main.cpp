#include <bits/stdc++.h>
using namespace std;
int n;
long long k;
set<long long> c;
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        long long x;
        cin >> x;
        c.insert(x);
    }
    cin>>k;
    int dem = 0;
    for (auto i : c)
    {
        long long ga = k - i;
        if (c.find(ga) != c.end() && ga != i)
        {
            dem++;
        }
    }
    cout << dem / 2;
    return 0;
}
