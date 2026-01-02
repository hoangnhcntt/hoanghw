#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n,p,q;
int main()
{
    freopen("DN.inp","r",stdin);
    freopen("DN.out","w",stdout);
    cin>>p>>q>>n;
    if (ceil(sqrt(p))<=floor(sqrt(q)))
        cout<<abs(floor(sqrt(q))-ceil(sqrt(p))+1);
    else
        cout<<0;
    return 0;
}
