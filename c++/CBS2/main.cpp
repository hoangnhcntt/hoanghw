#include <bits/stdc++.h>
using namespace std;
string s;
string k;
void canbang(string &u, string &v)
{
    while (u.size() < v.size())
        u = '0' + u;
    while (v.size() < u.size())
        v = '0' + v;
}
int main()
{
    cin>>s>>k;
    canbang(s,k);
    if(s>k)
        cout<<"YES";
    else cout<<"NO";
    return 0;
}
