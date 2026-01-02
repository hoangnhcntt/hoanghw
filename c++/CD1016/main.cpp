#include <bits/stdc++.h>
using namespace std;
int n;
int main()
{
    freopen("CD1016.INP","r",stdin);
    freopen("CD1016.OUT","w",stdout);
    cin>>n;
    vector<string> c;
    int i;
    while(n>0)
    {
        i=n%16;
        n/=16;
        if(i==10)
            c.push_back("A");
        else if(i==11)
            c.push_back("B");
        else if(i==12)
            c.push_back("C");
        else if(i==13)
            c.push_back("D");
        else if(i==14)
            c.push_back("E");
        else if(i==15)
            c.push_back("F");
        else
        {
            string k;
            k=to_string(i);
            c.push_back(k);
        }
    }
    for(auto i=c.size()-1; i>=0; i--)
    {
        cout<<c[i];
    }
    return 0;
}
