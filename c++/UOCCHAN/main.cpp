#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("UOCCHAN.INP", "r", stdin);
    freopen("UOCCHAN.OUT", "w", stdout);
    long long X;
    cin >> X;
    vector<long long> uoc;
    for (long long i = 1; i * i <= X; i++)
    {
        if (X % i == 0)
        {
            long long j = X / i;
            if (i % 2 == 0) uoc.push_back(i);
            if (j != i && j % 2 == 0) uoc.push_back(j);
        }
    }
    if (uoc.empty())
    {
        cout << -1;
    }
    else
    {
        sort(uoc.begin(), uoc.end());
        for (int i = 0; i < (int)uoc.size(); i++)
        {
            if (i > 0) cout << " ";
            cout << uoc[i];
        }
    }
    return 0;
}
