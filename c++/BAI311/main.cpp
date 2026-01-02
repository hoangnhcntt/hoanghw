#include <bits/stdc++.h>
using namespace std;
string s;
int main()
{
    cin>>s;
    string hoang="999999";
    for(int i=0; i<=s.size()-3; i++)
        for(int j=i+1; j<=s.size()-2; j++)
            for(int k=j+1; k<=s.size()-1; k++)
            {
                string so;
                so=so+s[i]+s[j]+s[k];
                if(hoang>so)
                    hoang=so;
                so="";
            }
    cout<<hoang;
    return 0;
}
