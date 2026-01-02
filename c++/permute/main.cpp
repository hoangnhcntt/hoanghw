#include <bits/stdc++.h>
using namespace std;
bool nt(int x)
{
    if(x<2) return false;
    if(x<4) return true;
    for(int i=2; i<=sqrt(x); i++)
        if(x%i==0)
            return false;
    return true;
}
int main()
{
    string s;
    cin >> s;
    int n = stoi(s);
    sort(s.begin(), s.end());
    long long res = 1e9;
    do
    {
        int num = stoi(s);
        if (num > n && nt(num)==true)
            res = min(res, 1LL * num);
    }
    while (next_permutation(s.begin(), s.end()));
    if (res != 1e9) cout << res;
    else cout << -1;
    return 0;
}
