#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin >> a;
    string k;
    int sl = 1;
    for (int i = 1; i < a.size(); i++)
    {
        if (a[i] == a[i - 1])
            sl++;
        else
        {
            if (sl > 1)
            {
                k.push_back(a[i - 1]);
                k += to_string(sl);
            }
            else k.push_back(a[i - 1]);
            sl = 1;
        }
    }
    if (sl > 1)
    {
        k.push_back(a.back());
        k += to_string(sl);
    }
    else k.push_back(a.back());
    cout << k;
    return 0;
}
