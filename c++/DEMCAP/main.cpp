#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("DEMCAP.INP","r",stdin);
    freopen("DEMCAP.OUT","w",stdout);
    int n;
    cin >> n;
    int count[11] = {0};
    int h;
    for (int i = 0; i < n; ++i)
    {
        cin >> h;
        count[h]++;
    }
    int t = 0;
    for (int i = 1; i <= 10; ++i)
    {
        int he = count[i];
        t += he * (he - 1) / 2;
    }
    cout << t << endl;
    return 0;
}
