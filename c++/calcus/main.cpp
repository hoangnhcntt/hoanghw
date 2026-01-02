#include <bits/stdc++.h>
using namespace std;
int n,m;
char k;
int main()
{
    freopen("CALCUS.INP","r",stdin);
    freopen("CALCUS.OUT","w",stdout);
    cin>>n>>m>>k;
    if(m==0 && k=='/')
        cout<<"NONE";
    else
    {
        if(k=='+')
            cout<<n+m;
        if(k=='-')
            cout<<n-m;
        if(k=='/')
            cout<<n/m;
        if(k=='*')
            cout<<n*m;
    }
    return 0;
}
