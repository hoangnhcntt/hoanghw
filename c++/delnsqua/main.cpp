#include <bits/stdc++.h>
using namespace std;
string s;
int rmin=1e9;
bool cp(int x)
{
    if(trunc(sqrt(x))==sqrt(x))
        return true;
    return false;
}
int main()
{
    freopen("delnsqua.inp","r",stdin);
    freopen("delnsqua.out","w",stdout);
    getline(cin,s);
    for(int i=0; i<=s.size()-3; i++)
        for(int j=i+1; j<=s.size()-2; j++)
            for(int k=j+1; k<=s.size()-1; k++)
            {
                string s1;
                s1=s.substr(i,1)+s.substr(j,1)+s.substr(k,1);
                int p;
                p=stoi(s1);
                if(cp(p)==true)
                    rmin=min(rmin,p);
            }
    cout <<rmin;
    return 0;
}
