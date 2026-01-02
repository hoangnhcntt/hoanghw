#include <bits/stdc++.h>
using namespace std;
int n,a[10000],g[100000],rmax;
bool kt(int x)
{
    int sogoc=x;
    int sodao=0;
    while(x>0)
    {
        sodao=sodao*10+x%10;
        x/=10;
    }
    if(sodao==sogoc)
        return true;
    else
        return false;
}
int main()
{
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    for(int i=1; i<=n; i++)
        g[i]=0;
    for(int i=1; i<=n; i++)
        if(kt(a[i])==true)
            g[i]=g[i-1]+1;
    for(int i=1; i<=n; i++)
        rmax=max(rmax,g[i]);
    cout <<rmax;
    return 0;
}
