#include <bits/stdc++.h>
using namespace std;
int n;
int ucln(int x,int y)
{
    while(y>0)
    {
        int r=x%y;
        x=y;
        y=r;
    }
    return u;
}
int main()
{
    freopen("MAA3.INP","r",stdin);
    freopen("MAA3.OUT","w",stdout);
    cin>>n>>m;
    cout<<ucln(n,m);
    return 0;
}
