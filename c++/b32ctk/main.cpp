#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    vector<string> c;
    for(int i = 0; i < s.size(); i++)
        for(int j = i; j < s.size(); j++)
        {
            string s2 = s.substr(i, j - i + 1);

            auto t = find(c.begin(), c.end(), s2);
            if(t == c.end())
                c.push_back(s2);
        }

    cout << c.size();
    return 0;
}
