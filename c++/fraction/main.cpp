#include <bits/stdc++.h>
using namespace std;
int a,b;
int main()
{
    cin>>a>>b;
    int gcd=__gcd(a,b);
    cout <<a/gcd<<" "<<b/gcd;
    return 0;
}
