#include <bits/stdc++.h>
using namespace std;
long long a,b,c,d;
int main()
{
    cin>>a>>b>>c>>d;
    long long rmax=-1e9;
    if(a%2==0)
        rmax=max(rmax,a);
    if(b%2==0)
        rmax=max(rmax,b);
    if(c%2==0)
        rmax=max(rmax,c);
    if(d%2==0)
        rmax=max(rmax,d);
    if(rmax==-1e9)
        cout<<"NONE";
    else cout<<rmax;
    return 0;
}
