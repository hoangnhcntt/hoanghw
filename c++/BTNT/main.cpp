#include <bits/stdc++.h>
using namespace std;
int n,a[10000000];
bool nt(int x)
{
    if(x<2) return false;
    if(x<4) return true;
    for(int i=2; i*i<=x; i++)
        if(x%i==0)
            return false;
    return true;
}
int tcs(int x)
{
    int tong=0;
    while(x>0)
    {
        tong+=x%10;
        x/=10;
    }
    return tong;
}
int main()
{
    freopen("BTNT.INP","r",stdin);
    freopen("BTNT.OUT","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    for(int i=1; i<=n; i++)
        if(nt(a[i])==true)
            if(nt(tcs(a[i]))==true)
                cout<<a[i]<<" ";
    return 0;
}
