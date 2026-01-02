#include <bits/stdc++.h>
using namespace std;
bool Sokep(int u)
{
    long long p = 1LL * u * u;
    string s = to_string(p);
    for (int i = 0; i < s.size() - 1; i++)
    {
        string s1 = s.substr(0, i + 1);
        string s2 = s.substr(i + 1);
        long long p1 = stoll(s1);
        long long p2 = (s2.empty() ? 0 : stoll(s2));

        if (p1 + p2 == u) return true;
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    if (Sokep(n))
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
