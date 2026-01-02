#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("MUAVE.INP","r",stdin);
    freopen("MUAVE.OUT","w",stdout);
    int n, j97, k98;
    cin >> n >> j97 >> k98;
    vector<int> a(n), b, c;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b.push_back(i + 1);
    }
    int dem = k98 - n;
    int p = 0;
    for (int i = 0; i < n; i++)
    {
        if(p!=dem)
            if (a[i] >= j97)
            {
                b.push_back(b[i]);
                p++;
            }
    }
    if(p!=dem)
        while(dem-p-1!=0)
        {
            b.push_back(n);
            p++;
        }
    sort(b.begin(), b.end());
    int l = 1;
    for (int i = 1; i < b.size(); i++)
    {
        if (b[i] == b[i - 1]) l++;
        else
        {
            c.push_back(l);
            l = 1;
        }
    }
    c.push_back(l);
    for (int x : c)
        cout << x << " ";
    return 0;
}
