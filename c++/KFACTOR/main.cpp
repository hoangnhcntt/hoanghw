#include <bits/stdc++.h>
using namespace std;
int t, n, m;
int sl=0;
bool nt(int x)
{
    if(x < 2) return false;
    for(int i = 2; i <=sqrt(x); i++)
        if(x % i == 0) return false;
    return true;
}
int uln(int x)
{
    int rmax=-1e9;
    for(int i=1; i<=sqrt(x); i++)
        if(x%i==0 && nt(i)==true)
        {
            rmax=max(rmax,i);
            if(i!=x/i && nt(x/i))
                rmax=max(rmax,x/i);
        }
    return rmax;
}
int main()
{
    freopen("KFACTOR.INP","r",stdin);
    freopen("KFACTOR.OUT","w",stdout);
    cin >> t>>n>>m;
    for(int i=n; i<=m; i++)
        if(!nt(i))
            if(uln(i)<=t)
            {
                sl++;
            }
    cout<<sl;
    return 0;
}
