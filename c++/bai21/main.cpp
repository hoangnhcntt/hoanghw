#include <bits/stdc++.h>
using namespace std;
int a,b;
int main()
{
    freopen("BAI21.INP","r",stdin);
    freopen("BAI21.OUT","w",stdout);
    cin>>a>>b;
    int rmax,rmax1;
    rmax=max(a*10+b,b*10+a);
    cout<<rmax;
    return 0;
}
