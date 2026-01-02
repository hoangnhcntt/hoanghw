#include <bits/stdc++.h>
using namespace std;
string s;
int main()
{
    getline(cin,s);
    for(int i=0; i<=s.size()-1; i++)
    {
        if(s[i]==' ')
            s.erase(i,1);
        else
            s[i]=tolower(s[i]);
    }
    s[0]=toupper(s[0]);
    cout<<s;
    return 0;
}
