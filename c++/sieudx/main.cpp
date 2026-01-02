#include <bits/stdc++.h>
using namespace std;
string n;
int main()
{
    cin>>n;
    string p;
    p=n[0];
    string so;
    while( so.size() != n.size())
    {
        so+=p;
    }
    int s1=stoll(so);
    int s2=stoll(n);
    if(s1-s2<0)
    {
        int l=1;
        while(so.size()!=n.size())
        {
            s1+=l*10;
            so=so.size()+" ";
        }
        cout<<s1-s2;
    }
    else
        cout<<s1-s2;
    return 0;
}
