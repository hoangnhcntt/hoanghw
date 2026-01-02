#include <bits/stdc++.h>
using namespace std;
string s;
int main()
{
    freopen("CD210.INP","r",stdin);
    freopen("CD210.OUT","w",stdout);
    getline(cin,s);
    int tong=0;
    int q=s.size()-1;
    for(int i=0; i<=q; i++)
    {
            tong+=(s[i]-48)*pow(2,q-i);
    }
    cout<<tong;
    return 0;
}
