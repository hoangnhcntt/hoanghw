#include <bits/stdc++.h>
using namespace std;
int a,b,c;
bool nt(int x)
{
    if(x<2) return false;
    for(int i=2; i<=sqrt(x); i++)
        if(x%i==0)
            return false;
    return true;
}
bool kt(int x)
{
    while(x>0)
    {
        if(nt(x))
            return false;
            else x/=10;
    }
    return true;
}
int main()
{
    freopen("PNT.INP","r",stdin);
    freopen("PNT.OUT","w",stdout);
    cin>>a>>b>>c;
    if(kt(a))
        cout<<1<<" ";
    else cout<<0<<" ";
    if(kt(b))
        cout<<1<<" ";
    else cout<<0<<" ";
    if(kt(c))
        cout<<1<<" ";
    else cout<<0<<" ";
    return 0;
}
