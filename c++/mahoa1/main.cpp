#include <bits/stdc++.h>
using namespace std;
int a,b,c,t,p,q;
int main()
{
    freopen("mahoa1.inp","r",stdin);
    freopen("mahoa1.out","w",stdout);
    cin>>a>>b>>c>>t;
    p=(a+b-c)*(a+t);
    q=1.0*(1.0*sqrt(a*a-b))/(b+c+t);
    cout <<p<<" "<<fixed<<setprecision(3)<<q;
    return 0;
}
