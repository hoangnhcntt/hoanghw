#include <bits/stdc++.h>
using namespace std;
int a[10000],k,n;
int b[10000],s,res=1e9;
void xl()
{
    int rmin=1e9,rmax=-1e9;
    int t=0;
    int y=0;
    for(int i=1; i<=k; i++)
    {
        rmin=min(rmin,b[a[i]]);
        rmax=max(rmax,b[a[i]]);
    }
    if(rmax-rmin<res)
        res=rmax-rmin;
}
void in()
{
    cout<<res<<endl;
    for(int i=1;i<=k;i++)
        cout<<b[a[i]]<<" ";
    cout<<endl;
}
void xl2()
{
    int rmin=1e9,rmax=-1e9;
    int t=0;
    int y=0;
    for(int i=1; i<=k; i++)
    {
        rmin=min(rmin,b[a[i]]);
        rmax=max(rmax,b[a[i]]);
    }
    if(rmax-rmin==res)
        in();
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
void thu1(int i)
{
    for(int j=a[i-1]+1; j<=n-k+i; j++)
    {
        a[i]=j;
        if(i==k)
            xl2();
        else thu1(i+1);
    }
}
int main()
{
    //freopen("DQCKN52.INP","r",stdin);
    //freopen("DQCKN52.OUT","w",stdout);
    cin>>n>>k;
    for(int i=1; i<=n; i++)
    {
        cin>>b[i];
    }
    a[0]=0;
    thu(1);
    thu1(1);
    return 0;
}
