#include <bits/stdc++.h>
using namespace std;
int n;
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
string giaithua(int n)
{
    string res = "1";
    for (int i = 2; i <= n; i++)
        res=skibidi(res,to_string(i));
    return res;
}
int main()
{
    cin>>n;
    string res;
    res=giaithua(n);
    cout<<res;
    return 0;
}
