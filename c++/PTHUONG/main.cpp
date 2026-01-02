#include <bits/stdc++.h>
using namespace std;
int n,a[100000],gcd;
int main()
{
    freopen("PTHUONG.INP","r",stdin);
    freopen("PTHUONG.OUT","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n;i++)
        gcd=__gcd(a[i],gcd);
    cout <<gcd;
    return 0;
}
