#include <bits/stdc++.h>
using namespace std;
string s1,s2;
int main()
{
    freopen("BNGUOC.INP","r",stdin);
    freopen("BNGUOC.OUT","w",stdout);
    cin>>s1>>s2;
    string s3,s4;
    s3 = s1;
    s4 = s2;
    reverse(s1.begin(),s1.end());
    reverse(s2.begin(),s2.end());
    if(s1>s2) cout<<s3;
    else cout<<s4;
    return 0;
}
