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
string giaithua(int n)
{
    string res = "1";
    for (int i = 2; i <= n; i++)
        res=skibidi(res,to_string(i));
    return res;
}
bool ktlhon(string &a, string b)
{
    if( a.size() < b.size() ) return false;
    while( b.size() < a.size() ) b = "0" + b;
    if( a < b) return false;
    vector<int> s( a.size(), 0);
    for( int i = a.size() - 1 ; i >= 0; i--)
    {
        s[i] = a[i] - b[i] - s[i] ;
        if( s[i] < 0)
        {
            s[i-1] ++ ;
            s[i] += 10;
        }
    }
    string res = "";
    for( int x : s)
        if(! (res.empty() && x == 0))
            res = res + char( x + 48);
    a = res;
    return true;
}
string chia2sau( string a, string b)
{
    string res = "";
    string s = "";
    int i = 0;
    while( i < a.size() )
    {
        s = s + a[i++];
        int t = 0;
        while( ktlhon( s, b))
        {
            t++;
        }
        res = res + char(t + 48);
        t = 0;
    }
    if( res.empty() )
        return "0";
    while( res[0] == '0') res.erase(0,1);
    return res;
}
int main()
{
    int n, k;
    cin >> n >> k;
    string ans = chia2sau(giaithua(n),giaithua(n - k));
    cout << ans;
    return 0;
}
