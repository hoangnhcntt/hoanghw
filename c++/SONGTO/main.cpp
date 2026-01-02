#include <bits/stdc++.h>
using namespace std;
int n;
int sl=0;
bool nt(int x)
{
    if(x<2) return false;
    for(int i=2; i<=sqrt(x); i++)
        if(x%i==0)
            return false;
    return true;
}
int tongcs(int x)
{
    int tong=0;
    while(x>0)
    {
        tong+=x%10;
        x/=10;
    }
    return tong;
}
bool kt(int x)
{
    if(nt(x))
    {
        if(nt(tongcs(x)))
            return true;
        else return false;
    }
    else
        return false;
}
int main()
{
    freopen("SONGTO.INP","r",stdin);
    freopen("SONGTO.OUT","w",stdout);
    cin>>n;
    for(int i=2; i<=n; i++)
        if(kt(i))
            sl++;
    cout<<sl;
    return 0;
}
