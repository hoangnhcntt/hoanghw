#include <bits/stdc++.h>
using namespace std;
int x,y,z,a,b,c,rmin,x1,y11,z1;
int main()
{
    freopen("fcode.inp","r",stdin);
    freopen("fcode.out","w",stdout);
    cin>>x>>y>>z>>a>>b>>c;
    rmin=min(x,min(y,z));
    x1=rmin%3600;
    rmin/=3600;
    y11=rmin%60;
    rmin/=60;
    z1=rmin;
    cout <<a+x1<<" "<<b+y11<<" "<<c+z1;
    return 0;
}
