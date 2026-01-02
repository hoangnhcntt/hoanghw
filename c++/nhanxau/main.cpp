#include <bits/stdc++.h>
using namespace std;
string skibidi(string s1, string s2)
{
    int n = s1.size(), m = s2.size();
    vector<int> res(n + m, 0);

    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = m - 1; j >= 0; j--)
        {
            int mu = (s1[i]-'0') * (s2[j]-'0');
            int cc = mu + res[i + j + 1];
            res[i + j] += cc / 10;
            res[i + j + 1] = cc % 10;
        }
    }

    string result = "";
    for (int x : res)
        if (!(result.empty() && x == 0)) result += (x + '0');
    if(result.empty())
        return "0";
    else
        return result;
}
int main()
{
    string a, b;
    cin >> a >> b;
    cout << skibidi(a, b) << endl;
    return 0;
}
