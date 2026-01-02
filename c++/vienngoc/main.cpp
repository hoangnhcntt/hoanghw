#include <bits/stdc++.h>
using namespace std;
long long a,b,c,s,p;
int main()
{
    freopen("vienngoc.inp","r",stdin);
    freopen("vienngoc.out","w",stdout);
    cin>>a>>b>>c;
    s=1ll*(a+b-c)*(a-b-c);
    p=(a-b)*(b+c);
    cout <<s<<" "<<p;
    return 0;
}
