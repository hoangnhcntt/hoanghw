#include <bits/stdc++.h>
using namespace std;
long long a,b,c;
long long gt(long long x)
{
    long long tich=1;
    for(long long i=1;i<=x;i++)
        tich*=i;
    return tich;
}
int main()
{
    freopen("royalbox.inp","r",stdin);
    freopen("royalbox.out","w",stdout);
    cin>>a>>b>>c;
    long long s;
    s=(gt(a)/(gt(b)*gt(a-b)))%c;
    cout <<s;
    return 0;
}
