#include <bits/stdc++.h>
using namespace std;
string s,s1;
int main()
{
    cin>>s;
    for(int i=0; i<=s.size()-1; i++)
        if(s[i]!=s[i+1])
        s1=s1+s[i];
    cout <<s.size()-s1.size();
    return 0;
}
