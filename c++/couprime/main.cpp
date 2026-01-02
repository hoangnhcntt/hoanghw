#include <bits/stdc++.h>
using namespace std;
int n;
bool nt(int x)
{
    if(x<2) return false;
    if(x<4) return true;
    for(int i=2; i*i<=x; i++)
        if(x%i==0)
            return false;
    return true;
}
int main()
{
    freopen("COUPRIME.INP","r",stdin);
    freopen("COUPRIME.OUT","w",stdout);
    cin>>n;
    int sl=0;
    for(int i=2; i<=n; i++)
        if(nt(i)==true)
            sl++;
    cout <<sl;
    return 0;
}
