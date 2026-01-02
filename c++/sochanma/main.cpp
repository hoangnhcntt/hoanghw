#include <bits/stdc++.h>
using namespace std;
int a,b,c;
int main()
{
    freopen("sochanma.inp","r",stdin);
    freopen("sochanma.out","w",stdout);
    cin>>a>>b>>c;
    if((a*100+b*10+c)%2==0)
        cout<<a<<b<<c;
    if((a*100+c*10+b)%2==0)
        cout<<a<<c<<b;
    if((b*100+c*10+a)%2==0)
        cout<<b<<c<<a;
    if((c*100+b*10+a)%2==0)
        cout<<c<<b<<a;
    return 0;
}
