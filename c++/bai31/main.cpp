#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("BAI31.INP", "r", stdin);
    freopen("BAI31.OUT", "w", stdout);
    int n;
    cin >> n;
    int rmin=1000000;
    vector<int> d;
    d.push_back(n / 100);
    d.push_back((n / 10) % 10);
    d.push_back(n % 10);
    rmin=min(d[0]*10+d[1],min(d[1]*10+d[2],d[0]*10+d[2]));
    cout<<rmin;
    return 0;
}
