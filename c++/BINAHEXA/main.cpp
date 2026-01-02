#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("BINAHEXA.INP","r",stdin);
    freopen("BINAHEXA.OUT","w",stdout);

    unsigned long long n;
    cin >> n;

    unsigned long long n1 = n;
    vector<int> c;
    vector<string> b;
    if (n == 0) c.push_back(0);
    while (n > 0)
    {
        c.push_back(n % 2);
        n /= 2;
    }
    for (int i = c.size() - 1; i >= 0; i--)
        cout << c[i];
    cout << " ";
    if (n1 == 0) b.push_back("0");
    while (n1 > 0)
    {
        int i = n1 % 16;
        n1 /= 16;
        if (i >= 10)
            b.push_back(string(1, 'A' + (i - 10)));
        else
            b.push_back(to_string(i));
    }
    for (int i = b.size() - 1; i >= 0; i--)
        cout << b[i];

    return 0;
}
