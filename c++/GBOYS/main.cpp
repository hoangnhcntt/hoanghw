#include <bits/stdc++.h>
using namespace std;
int x,y,z,a,b,c,rmin,x1,y11,z1;
int main()
{
    cin>>x>>y>>z>>a>>b>>c;
    rmin=min(x,min(y,z));
    if(rmin>=3600)
    {
        x1=rmin/3600;
        rmin%=3600;
    }
    else if(rmin>=60)
    {
        y11=rmin/60;
        rmin%=60;
    }
    z1=rmin;
    cout <<a+x1<<" "<<b+y11<<" "<<c+z1;
    return 0;
}
