#include <bits/stdc++.h>
using namespace std;
int n;
string s;
int maxdai(string x)
{
    int sl=1;
    int rmax=0;
    for(int i=1; i<=x.size(); i++)
        if(s[i]==s[i-1])
            sl++;
        else
        {
            rmax=max(rmax,sl);
            sl=1;
        }
    return max(rmax,sl);
}
int main()
{
    freopen("DUONGDEP.INP","r",stdin);
    freopen("DUONGDEP.OUT","w",stdout);
    int rma=0;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>s;
        rma=max(rma,maxdai(s));
    }
    cout<<rma;
    return 0;
}
