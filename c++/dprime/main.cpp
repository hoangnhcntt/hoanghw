#include <bits/stdc++.h>
using namespace std;
long long n,m,a[100000];
bool nt(int x)
{
    if(x<2) return false;
    if(x<4) return true;
    for(int i=2; i*i<=x; i++)
        if(x%i==0)
            return false;
    return true;
}
int sont(int u,int v)
{
    int sl=0;
    for(int i=u; i<=v; i++)
        if(nt(a[i])==true)
            sl++;
    return sl;
}
int main()
{
    freopen("dprime.inp","r",stdin);
    freopen("dprime.out","w",stdout);
    cin>>n>>m;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    for(int i=1;i<=m;i++)
    {
        int u,v;
        cin>>u>>v;
        cout<<sont(u,v)<<endl;
    }
    return 0;
}
