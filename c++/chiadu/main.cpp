#include <iostream>
#include <vector>
using namespace std;
bool ktlhon(string &a , string b)
{
    if( a.size() < b.size() ) return false;
    while( b.size() < a.size() ) b = "0" + b;
    if( a < b) return false;
    vector<int> s( a.size() , 0);
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
string chia2s( string a , string b)
{
    string res = "";
    string s = "";
    int i = 0;
    while( i < a.size() )
    {
        s = s + a[i++];
        int t = 0;
        while( ktlhon( s , b))
        {
            t++;
        }
        res = res + char(t + 48);
        t = 0;
    }
    if( s.empty() )
        return "0";
    return s;
}
int main()
{
    string a, b;
    cin >> a >> b;
    cout << chia2s( a , b);
    return 0;
}
