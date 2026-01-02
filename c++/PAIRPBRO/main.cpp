#include <bits/stdc++.h>
using namespace std;
int n,k,sl=0;
bool nt(int x)
{
    if(x<2) return false;
    for(int i=2; i<=sqrt(x); i++)
        if(x%i==0)
            return false;
    return true;
}
int main()
{
    freopen("PAIRPBRO.INP","r",stdin);
    freopen("PAIRPBRO.OUT","w",stdout);
    cin>>n>>k;
    for(int i=1; i<=n; i++)
    {
        if(nt(i)==true)
            if(i+k<=n)
                if(nt(i+k)==true)
                    sl++;
    }
    cout<<sl;
    return 0;
}
