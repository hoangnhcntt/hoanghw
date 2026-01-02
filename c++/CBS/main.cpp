#include <bits/stdc++.h>
using namespace std;
void canbang(string &u, string &v)
{
    while (u.size() < v.size())
        u = '0' + u;
    while (v.size() < u.size())
        v = '0' + v;
}
string s;
string k;
int main()
{
    cin>>s>>k;
    canbang(s,k);
    cout<<s<<endl<<k;
    return 0;
}
