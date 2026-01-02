#include <bits/stdc++.h>
using namespace std;
string s;
int main()
{
    freopen("CD1610.INP","r",stdin);
    freopen("CD1610.OUT","w",stdout);
    getline(cin,s);
    int tong=0;
    int q=s.size()-1;
    for(int i=0; i<=q; i++)
    {
        if(s[i]=='A')
            tong+=10*pow(16,q-i);
        else if(s[i]=='B')
            tong+=11*pow(16,q-i);
        else if(s[i]=='C')
            tong+=12*pow(16,q-i);
        else if(s[i]=='D')
            tong+=13*pow(16,q-i);
        else if(s[i]=='E')
            tong+=14*pow(16,q-i);
        else if(s[i]=='F')
            tong+=15*pow(16,q-i);
        else
            tong+=(s[i]-48)*pow(16,q-i);
    }
    cout<<tong;
    return 0;
}
