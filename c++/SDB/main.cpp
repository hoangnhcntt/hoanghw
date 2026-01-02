#include <bits/stdc++.h>
using namespace std;
int t, n, m;
bool nt(int x)
{
    if(x < 2) return false;
    for(int i = 2; i*i <= x; i++)
        if(x % i == 0) return false;
    return true;
}
int main()
{
    freopen("SDB.INP","r",stdin);
    freopen("SDB.OUT","w",stdout);
    cin >> t;
    while (t>0)
    {
        int sl = 0;
        cin >> n >> m;
        for (int i = n; i <= m; i++)
        {
            int r = round(pow(i, 0.25));
            if (1LL * r * r * r * r == i && nt(r))
                sl++;
        }
        cout << sl << endl;
        t--;
    }
    return 0;
}
