#include <bits/stdc++.h>
using namespace std;
int n, a[10000];
bool kt(int x, int y)
{
    int mid = (x + y) / 2;
    for (int i = x; i < mid; i++)
        if (a[i] >= a[i + 1])
            return false;
    for (int i = mid; i < y; i++)
        if (a[i] <= a[i + 1])
            return false;
    return true;
}

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    int rmax=0;
    for (int i = 1; i <= n; i++)
        for (int j = i + 1; j <= n; j++)
            if (kt(i, j))
                rmax = max(rmax, j - i + 1);
    cout << rmax;
    return 0;
}
