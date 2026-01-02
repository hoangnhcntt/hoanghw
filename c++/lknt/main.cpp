#include <bits/stdc++.h>
using namespace std;
bool f[1000001];
void sangera(int u)
{
    memset(f, true, sizeof(f));
    f[0] = f[1] = false;

    for (int i = 2; i * i <= u; i++)
    {
        if (f[i])
        {
            for (int j = i * i; j <= u; j += i)
                f[j] = false;
        }
    }
}
int main()
{
    int a, b;
    cin >> a >> b;
    sangera(b);
    vector<int> g;
    for (int i = a; i <= b; i++)
        if (f[i])
            g.push_back(i);

    if (g.empty())
        cout << "NONE";
    else
        for (int x : g)
            cout << x << "\n";

    return 0;
}
