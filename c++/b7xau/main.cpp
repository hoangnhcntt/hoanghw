#include <bits/stdc++.h>
using namespace std;
string s,s1;
int main()
{
    cin>>s;
    s1=s;
    reverse(s.begin(),s.end());
    if(s1==s)
        cout<<"YES";
    else cout<<"NO";
    return 0;
}
