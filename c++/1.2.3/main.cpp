#include <bits/stdc++.h>
using namespace std;
int n,a[100000],gcd,lcm=1;
int main()
{
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    for(int i=1; i<=n; i++)
        gcd=__gcd(gcd,a[i]);
    for(int i=2; i<=n; i++)
        lcm=lcm*(a[i]/__gcd(lcm,a[i]));
    cout <<gcd<<" "<<lcm;
    return 0;
}
