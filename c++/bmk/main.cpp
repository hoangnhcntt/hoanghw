Thái Bình
#include <bits/stdc++.h>
using namespace std;
bool KTRA(const string &s)
{
    if (s.size() < 8) return false;
    bool mk1 = false, mk2 = false, mk3 = false, mk4= false, mk5 = false;
    for (char c : s)
    {
        if (c == '#') mk1 = true;
        if (c == '@') mk2 = true;
        if (isupper(c)) mk3 = true;
        if (islower(c)) mk4= true;
        if (isdigit(c)) mk5 = true;
    }
    return mk1 && mk2 && mk3 && mk4&& mk5;
}
int main()
{
    string s;
    freopen("BMK.inp","r",stdin);
    freopen("BMK.out","w",stdout);
    cin >> s;
    if (KTRA(s))
    {
        cout << "1" << endl;
    }
    else
    {
        cout << "0" << endl;
    }
    return 0;
}
