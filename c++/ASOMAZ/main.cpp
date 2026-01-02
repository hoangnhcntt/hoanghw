#include <bits/stdc++.h>
using namespace std;
long long m,n,p,q;
long long rmaxtc,rmaxhehe;
long long mas(int x)
{
    int rmax=1;
    while(x>0)
    {
        rmax=max(rmax,x%10);
        x/=10;
    }
    return rmax;
}
bool kt(int x,int y)
{
    while(x>0)
    {
        if(x%10==y)
            return true;
        else
            x/=10;
    }
    return false;
}
int main()
{
    freopen("ASOMAZ.INP","r",stdin);
    freopen("ASOMAZ.OUT","w",stdout);
    cin>>m>>n>>p>>q;
    long long rmaxm=mas(m);
    long long rmaxn=mas(n);
    long long rmaxp=mas(p);
    long long rmaxq=mas(q);
    long long rmaxtc=max(rmaxm,max(rmaxn,max(rmaxp,rmaxq)));
    if(kt(rmaxm,rmaxtc)==true)
        rmaxhehe=max(rmaxhehe,m);
    if(kt(rmaxn,rmaxtc)==true)
        rmaxhehe=max(rmaxhehe,n);
    if(kt(rmaxp,rmaxtc)==true)
        rmaxhehe=max(rmaxhehe,p);
    if(kt(rmaxq,rmaxtc)==true)
        rmaxhehe=max(rmaxhehe,q);
    cout<<rmaxhehe;
    return 0;
}
