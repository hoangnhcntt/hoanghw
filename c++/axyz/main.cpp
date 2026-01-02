#include <bits/stdc++.h>
using namespace std;
int x,y,z,rmax=-1e9;
int SoLe(int x)
{
    int rmax=-1e9,r;
    while(x>0)
    {
        r=x%10;
        x/=10;
        if(r%2!=0 && rmax<r)
            rmax=r;
    }
    return rmax;
}
int main()
{
    freopen("AXYZ.INP","r",stdin);
    freopen("AXYZ.OUT","w",stdout);
    cin>>x>>y>>z;
    rmax=max(rmax,SoLe(x));
    rmax=max(rmax,SoLe(y));
    rmax=max(rmax,SoLe(z));
    if(rmax==-1e9)cout<<"NONE";
    else cout<<rmax;
    return 0;
}
