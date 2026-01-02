#include <bits/stdc++.h>
using namespace std;
long long n,m,a[100000],b[10000],k,sl=0;
bool check(int x,int y,int z)
{
    if(abs(x-y)<=k)
        return true;
    if(abs(x-y)>k)
        return false;
}
int main()
{
    freopen("HOUSE.INP","r",stdin);
    freopen("HOUSE.OUT","w",stdout);
    cin>>n>>m>>k;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=m;i++)
        cin>>b[i];
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
           if(check(a[i],b[j],k)==true)
            sl++;
    cout <<sl;
    return 0;
}
