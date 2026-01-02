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
string l;
int main()
{
    cin>>s>>k>>l;
    canbang(s,k);
    canbang(k,l);
    canbang(s,l);
    string rmax;
    rmax=max(s,max(k,l));
    cout<<rmax;
    return 0;
}
