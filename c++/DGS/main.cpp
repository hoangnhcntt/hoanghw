#include <bits/stdc++.h>
using namespace std;
bool com(string a, string b)
{
    return a + b > b + a;
}
int main()
{
    //freopen("DGS.INP", "r", stdin);
    //freopen("DGS.OUT", "w", stdout);
    int N;
    cin >> N;
    vector<string> nu(N);
    for (int i = 0; i < N; i++)
        cin >> nu[i];
    sort(nu.begin(), nu.end(), com);
    if (nu[0] == "0")
        cout << "0";
    else
        for (string s: nu)
            cout << s;
    return 0;
}
