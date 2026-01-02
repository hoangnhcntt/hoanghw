#include <bits/stdc++.h>
using namespace std;
int n,m,gcd,lcm;
int main()
{
    cin>>n>>m;
    gcd=__gcd(n,m);
    lcm=n*m/gcd;
    cout <<gcd<<" "<<lcm;
    return 0;
}
