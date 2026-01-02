#include <bits/stdc++.h>
using namespace std;
string s;
int sl=0;
int main()
{
    freopen("NGUYENAM.INP","r",stdin);
    freopen("NGUYENAM.OUT","w",stdout);
    getline(cin,s);
    for(int i=0; i<=s.size()-1; i++)
        s[i]=tolower(s[i]);
    for(int i=0; i<=s.size()-1;i++)
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
            sl++;
    cout<<sl;
    return 0;
}
