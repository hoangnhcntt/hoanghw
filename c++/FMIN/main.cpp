#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("FMIN.INP", "r", stdin);
    freopen("FMIN.OUT", "w", stdout);
    long long M, N, P, Q, S;
    cin >> M >> N >> P >> Q >> S;
    long long ans = min({M, N, P, Q, S});
    cout << ans;

    return 0;
}
