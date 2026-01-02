#include <bits/stdc++.h>
using namespace std;
long long a,b,c;
long long s,p;
int main()
{
    cin>>a>>b>>c;
    s=1ll*(1ll*pow(a,2)+1ll*pow(b,2)+1ll*pow(c,2))*(a+b+c);
    p=1ll*(a+b)*(b+c);
    cout <<s<<" "<<p;
    return 0;
}

