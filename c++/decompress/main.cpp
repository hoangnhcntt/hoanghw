#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    string so = "";
    string chu="";
    vector<pair<string,int>> c;
    for(int i = 0; i < s.size(); i++)
    {
        if(isalpha(s[i]))
            chu+=s[i];
        else
        {
            so+=s[i];
            if(isalpha(s[i+1]))
            {
                int so1;
                so1 =stoi(so);
                c.push_back(make_pair(chu,so1));
                chu="";
                so="";
            }
        }

    }
    if(so.size()>0)
        c.push_back(make_pair(chu,stoi(so)));
    for(auto x:c)
        for(int i=1; i<=x.second; i++)
            cout<<x.first;
    return 0;
}
