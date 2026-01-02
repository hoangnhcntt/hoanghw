#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    string s2 = s;
    int i = 0;
    int rmax = -1e9;
    while (!s.empty())
    {
        if (i == s.size() || s[i] == ' ')
        {
            string s1 = s.substr(0, i);
            rmax = max(rmax, (int)s1.size());
            if (i == s.size()) break;
            s.erase(0, i + 1);
            i = 0;
        }
        else
            i++;
    }
    i = 0;
    while (!s2.empty())
    {
        if (i == s2.size() || s2[i] == ' ')
        {
            string s1 = s2.substr(0, i);
            if ((int)s1.size() == rmax)
            {
                cout << s1 << endl;
                break;
            }
            if (i == s2.size()) break;
            s2.erase(0, i + 1);
            i = 0;
        }
        else
        {
            i++;
        }
    }

    return 0;
}
