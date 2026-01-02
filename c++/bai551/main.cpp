#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x;
    cin >> n >> x;
    vector<int> c(n);
    set<int> s;
    int sl = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> c[i];
    }

    for (int i = 1; i <= n; i++)
    {
        if (s.count(x - c[i]))
        {
            sl++;
        }
        s.insert(c[i]);
    }
    cout << sl;
    return 0;
}
