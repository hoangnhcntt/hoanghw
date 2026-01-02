#include <bits/stdc++.h>
using namespace std;
int findSmallestN(int a)
{
    int n = 1;
    while (true)
    {
        long long power = pow(n, n);
        if (power % a == 0)
        {
            return n;
        }
        n++;
    }
}
int main()
{
    freopen("POWER.INP", "r", stdin);
    freopen("POWER.OUT", "w", stdout);
    int a;
    cin>>a;
        cout << findSmallestN(a) << endl;
    return 0;
}
