#include <bits/stdc++.h>
using namespace std;
int n,res=-1e9,k,a[100000],b[100000];
bool nt(int x)
{
    if(x<2) return false;
    for(int i=2; i<=sqrt(x); i++)
        if(x%i==0)
            return false;
    return true;
}
void xl()
{
    int tong=0;
    for(int i=1; i<=n; i++)
        if(b[i]==1)
        {
            tong*=10;
            tong+=a[i];
        }
    for(int i=1; i<=n; i++)
        if(b[i]==0)
        {
            tong*=10;
            tong+=a[i];
        }
    if(nt(tong))
        res=max(res,tong);
}
void pps(int x)
{
    for(int i=0; i<=1; i++)
    {
        b[x]=i;
        if(x==n) xl();
        else pps(x+1);
    }
}
int main()
{
    freopen("DQHV7.INP","r",stdin);
    freopen("DQHV7.OUT","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    pps(1);
    cout <<res;
    return 0;
}
