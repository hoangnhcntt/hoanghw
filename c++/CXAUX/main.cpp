#include <bits/stdc++.h>
using namespace std;
void so(string s)
{
    int d[10000], k = 0, e = 0;

    for (int c = 0; c < s.size(); c++)
    {
        if (isdigit(s[c]))
            e = e * 10 + (s[c] - '0');
        else
        {
            if (e > 0)
            {
                d[k++] = e;
                e = 0;
            }
        }
    }
    if (e > 0)
        d[k++] = e;
    sort(d, d + k);
    if(k!=0)
        for (int i = 0; i < k; i++)
            cout << d[i] << " ";
    else
        cout<<"NULL";
}
int main()
{
    freopen("CXAUX.INP","r",stdin);
    freopen("CXAUX.OUT","w",stdout);
    string s;
    cin >> s;
    so(s);
    return 0;
}
