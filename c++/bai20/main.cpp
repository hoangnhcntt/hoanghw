#include <bits/stdc++.h>
using namespace std;
int a,b,c;
int main()
{
    freopen("BAI20.INP","r",stdin);
    freopen("BAI20.OUT","w",stdout);
    cin>>a>>b>>c;
    int rmax,rmax1;
    rmax=max(a+b,max(b+c,a+c));
    cout<<rmax;
    return 0;
}
