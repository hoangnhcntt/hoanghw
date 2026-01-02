#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("bai4.inp","r",stdin);
    freopen("bai4.out","w",stdout);
    string X, target;
    cin >> X;
    string Y = "";
    for (char ch : X)
    {
        Y += ch;
        reverse(Y.begin(), Y.end());
    }
    cout<<Y;
    return 0;
}
