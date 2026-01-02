#include <bits/stdc++.h>
using namespace std;
int a,b,c,d,v;
int main()
{
    cin>>a>>b>>c>>d>>v;
    int tu=-1*b+1ll*v*d;
    int mau=a-1ll*v*c;
    if(mau==0)
    {
        if(tu==0)
            cout<<"MULTIPLE";
        else cout<<"NONE";
    }
    else
    {
        if(d/c==tu/mau)
            cout<<"NONE";
        else
        {
            int gcd=__gcd(tu,mau);
            tu/=gcd;
            mau/=gcd;
        }
        cout<<"X = "<<tu<<"/"<<mau;
    }
    return 0;
}
