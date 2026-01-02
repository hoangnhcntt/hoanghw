#include <bits/stdc++.h>
using namespace std;
int a[10000],k,n;
int b[10000],s,res=0;
int rmin=1e9,rmax=-1e9;
bool kt(int x)
{
    int t=0;
    int y=0;
    for(int i=1; i<=x; i++)
    {
        if(b[a[i]]==rmin)
            t=1;
        if(b[a[i]]==rmax)
            y=1;
    }
    if(t+y==2)
        return true;
    else return false;
}
void xl()
{
    if(kt(k))
    {
        for(int i=1; i<=k; i++)
            cout<<b[a[i]]<<" ";
        cout<<endl;
    }
}
void thu(int i)
{
    for(int j=a[i-1]+1; j<=n-k+i; j++)
    {
        a[i]=j;
        if(i==k)
            xl();
        else thu(i+1);
    }
}
int main()
{
    //freopen("DQCKN51.INP","r",stdin);
    //freopen("DQCKN51.OUT","w",stdout);
    cin>>n>>k;
    for(int i=1; i<=n; i++)
    {
        cin>>b[i];
        rmin=min(rmin,b[i]);
        rmax=max(rmax,b[i]);
    }
    a[0]=0;
    thu(1);
    return 0;
}
