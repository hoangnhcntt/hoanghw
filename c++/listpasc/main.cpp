#include <bits/stdc++.h>
using namespace std;
int C(int n, int k)
{
    if (k == 0 || k == n) return 1;
    return C(n - 1, k - 1) + C(n - 1, k);
}
void in(int n)
{
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j <= i; ++j)
        {
            cout << C(i, j) << " ";
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    in(n);
    return 0;
}
