#include <bits/stdc++.h>
using namespace std;
int n;
int main()
{
    freopen("bai13.inp","r",stdin);
    freopen("bai13.out","w",stdout);
    cin>>n;
    double k;
    k=1.0*(n*(n+2))/((n+1)*(n+1));
    cout <<fixed<<setprecision(3)<<k;
    return 0;
}
