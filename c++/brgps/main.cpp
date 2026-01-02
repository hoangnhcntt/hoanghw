#include <bits/stdc++.h>
using namespace std;
long long a,b,c,d,hieutu,mau;
int main()
{
    freopen("BRGPS.INP","r",stdin);
    freopen("BRGPS.OUT","w",stdout);
    cin>>a>>b>>c>>d;
    hieutu=(a*d)-(b*c);
    mau=b*d;
    int gcd=__gcd(abs(hieutu),abs(mau));
    if(mau>0)cout<<hieutu/gcd<<" "<<mau/gcd;
    else
    {

        if(mau<0 && hieutu<0) cout<<-hieutu/gcd<<" "<<-mau/gcd;
        if(mau<0)cout<<-hieutu/gcd<<" "<<-mau/gcd;
    }
    return 0;
}
