#include <bits/stdc++.h>
using namespace std;
string s;
int main()
{
    cin>>s;
    bool k=0;
    for(int i=1; i<s.size()-1; i++)
        if(s[i]>s[i-1] && s[i]>s[i+1])
        {
            cout<<"YES";
            k=1;
            break;
        }
    if(k==0)
        cout<<"NO";
    return 0;
}
