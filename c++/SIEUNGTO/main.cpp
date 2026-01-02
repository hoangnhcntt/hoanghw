#include <bits/stdc++.h>
using namespace std;
int a,b,sl=0;
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
    if(nt(x))
    {
        while(x>0)
        {
            if(nt(x))
                x/=10;
            else return false;
        }
        return true;
    }
    else return false;
}
int main()
{
    freopen("SIEUNGTO.INP","r",stdin);
    freopen("SIEUNGTO.OUT","w",stdout);
    cin>>a>>b;
    for(int i=a; i<=b; i++)
        if(kt(i))
            sl++;
    cout<<sl;
    return 0;
}
