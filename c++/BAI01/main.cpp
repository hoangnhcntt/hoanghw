#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("BAI01.INP","r",stdin);
    freopen("BAI01.OUT","w",stdout);
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    int sl = 0;
    for (int i = 1; i <= n; i++)
    {
        bool da = (i % a == 0);
        bool db = (i % b == 0);
        bool dc = (i % c == 0);

        int dem = da + db + dc;

        if (dem == 2)
            sl++;
    }

    cout << sl;
    return 0;
}
