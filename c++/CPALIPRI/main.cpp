#include <bits/stdc++.h>
using namespace std;
int n,sl;
bool nt(int x)
{
    if(x<2) return false;
    if(x<4) return true;
    for(int i=2; i*i<=x; i++)
        if(x%i==0)
            return false;
    return true;
}
bool kt(int x)
{
    int sogoc=x;
    int songuoc;
    if(nt(x)==true)

    {
        while(x>0)
        {
            songuoc*=10;
            songuoc+=x%10;
            x/=10;
        }
        if(sogoc==songuoc)
            return true;
        else
            return false;
    }
    else
        return false;
}
int main()
{
    //freopen("CPALIPRI.INP","r",stdin);
    //freopen("CPALIPRI.OUT","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
        if(kt(i)==true)
            sl++;
    cout<<sl;
    return 0;
}
