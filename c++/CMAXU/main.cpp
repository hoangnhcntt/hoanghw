#include <bits/stdc++.h>
using namespace std;
int SOLONNHAT(string s)
{
    int rmax = 0, d = 0;
    bool kiemtra = false;
    for (int c = 0; c < s.size(); c++)
    {
        if (isdigit(s[c]))
        {
            d = d * 10 + (s[c] - '0');
            kiemtra = true;
        }
        else
        {
            if (kiemtra)
            {
                rmax = max(rmax, d);
                d = 0;
                kiemtra = false;
            }
        }
    }
    if (kiemtra)
        rmax = max(rmax, d);
    return rmax;
}
void timuoc(int x)
{
    int uoc[10000], k = 0;
    for (int i = 1; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            uoc[k++] = i;
            if (i != x / i)
                uoc[k++] = x / i;
        }
    }
    sort(uoc, uoc + k);
    for (int i = 0; i < k; i++)
        cout << uoc[i] << " ";
}
int main()
{
    freopen("CMAXU.INP","r",stdin);
    freopen("CMAXU.OUT","w",stdout);
    string s;
    cin >> s;
    int rmax = SOLONNHAT(s);
    timuoc(rmax);
    return 0;
}
