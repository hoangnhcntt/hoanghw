#include <bits/stdc++.h>
using namespace std;
int a,b,c,d,rmax;
int main()
{
    freopen("hcnfma.inp","r",stdin);
    freopen("hcnfma.out","w",stdout);
    cin>>a>>b>>c>>d;
    rmax=max(rmax,(a*b,max(b*c,max(c*d,max(a*c,max(a*d,max(b*c,max(c*d,b*d))))))));
    cout <<rmax;
    return 0;
}
