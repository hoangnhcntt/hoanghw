#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    int i = 0;
    while (!s.empty())
    {
        if (s[i] == ' ' || i == s.size())
        {
            string s1 = s.substr(0, i);
            cout << s1 << endl;
            s.erase(0, i + 1);
            i = 0;
        }
        else
        {
            i++;
            if (i == s.size())
            {
                cout << s << endl;
                break;
            }
        }
    }
    return 0;
}
