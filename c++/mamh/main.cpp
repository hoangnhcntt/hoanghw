#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("MAMH.INP","r",stdin);
    freopen("MAMH.OUT","w",stdout);
    string s, m, p;
    cin >> s;
    for (char x : s)
    {
        if (isdigit(x))
            p += x;
        else
        {
            if (p.size() > m.size() || (p.size() == m.size() && p > m))
                m = p;
            p.clear();
        }
    }
    if (p.size() > m.size() || (p.size() == m.size() && p > m))
        m = p;
    cout << m << endl;
    return 0;
}
