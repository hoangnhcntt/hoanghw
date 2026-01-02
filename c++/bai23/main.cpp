#include <bits/stdc++.h>
using namespace std;
int a,b,c;
long long d;
int main()
{
    freopen("BAI23.INP","r",stdin);
    freopen("BAI23.OUT","w",stdout);
    cin>>a>>b>>c;
    d=1ll*b*b-1ll*4*a*c;
    if(d<0)
        cout<<"NONE";
    else if(d==0)
    {
        double k;
        k=-1.0*b/2*a;
        cout<<fixed<<setprecision(2)<<k<<" "<<k;
    }
    else
    {
        double x1,x2;
        x1=(-b-sqrt(a))/2*a;
        x2=(-b+sqrt(a))/2*a;
        cout<<fixed<<setprecision(2)<<x1<<" "<<x2;
    }
    return 0;
}
