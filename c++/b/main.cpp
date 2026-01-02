#include <bits/stdc++.h>
using namespace std;
int main()
{
    string k;
    cin >> k;
    string s2 = "";
    vector<pair<int, char>> c;
    for (int i = 0; i < k.size(); i++)
    {
        if (isdigit(k[i]))
        {
            s2 += k[i];
        }
        else
        {
            if (s2.size() > 0)

                c.push_back(make_pair(stoi(s2), k[i]));
            else
                c.push_back(make_pair(1, k[i]));

            s2 = "";
        }
    }
    for (auto i : c)
        for (int j = 0; j < i.first; j++)
            cout << i.second;

    return 0;
}
