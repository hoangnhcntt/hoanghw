#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("BDCON.inp","r",stdin);
    freopen("BDCON.out","w",stdout);
    int n;
    cin >> n;
    int a[n];
    int rmin = 1e9, rmax = -1e9;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] < rmin) rmin = a[i];
        if (a[i] > rmax) rmax = a[i];
    }
    int SOCUOISUNG = -1, SOCUOISUNG2 = -1, minLen = n;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == rmin)
        {
            SOCUOISUNG = i;
            if (SOCUOISUNG2 != -1) minLen = min(minLen, i - SOCUOISUNG2 + 1);
        }
        if (a[i] == rmax)
        {
            SOCUOISUNG2 = i;
            if (SOCUOISUNG != -1) minLen = min(minLen, i - SOCUOISUNG + 1);
        }
    }

    cout << minLen << "\n";
    return 0;
}
