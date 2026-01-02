#include <bits/stdc++.h>
using namespace std;
long long a,b,x,y,u,v;
int main()
{
    freopen("ticket.inp","r",stdin);
    freopen("ticket.out","w",stdout);
    cin>>a>>b>>u>>v>>x>>y;
    long long res=(x-y)*a+y*b+(x-y)*u+y*v;
    cout <<res;
    return 0;
}
