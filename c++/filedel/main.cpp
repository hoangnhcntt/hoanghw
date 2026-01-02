#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("filedel.inp", "r", stdin);
    freopen("fidel.inp", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, q;
    cin >> n >> q;
    vector<string> s(n);
    for (int i = 0; i < n; i++)
        cin >> s[i];
    for (int i = 0; i < q; i++)
    {
        char c;
        cin >> c;
        vector<string> temp;
        for (const string& str : s)
            if (str.find(c) == string::npos)
                temp.push_back(str);
        s.swap(temp);
        cout << s.size() << endl;
    }
    return 0;
}
