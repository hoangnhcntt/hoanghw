#include <bits/stdc++.h>
using namespace std;
string s;
int main()
{
    getline(cin,s);
    int rmax=0;
    int sl=0;
    for(int i=0; i<=s.size()-1; i++)
    {
        string s1;
        if(s[i]!=' ')
        {
            s1+=s[i];
        }
        else
        {
            int p=s1.size();
            rmax=max(rmax,p);
            s1.clear();
        }
    }
    if(s.size()>0)
    {
        int p=s.size();
        rmax=max(rmax,p);
    }
    cout <<rmax;
    return 0;
}
