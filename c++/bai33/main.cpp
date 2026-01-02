#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x1,y11,x3,y3,xm,ym;
    freopen("BAI33.INP","r",stdin);
    freopen("BAI33.OUT","w",stdout);
    cin>>xm>>ym>>x1>>y11>>x3>>y3;
    if(ym>=y3 && ym<=y11 && xm>=x1 && xm<=x3)
        cout<<"IN";
    else
        cout<<"OUT";
    return 0;
}
