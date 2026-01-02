#include <bits/stdc++.h>
using namespace std;
int n,b[1000],sl=0;
int a[100000];
bool kt(int x)
{
    if(x<2) return false;
    for(int i=2; i<=sqrt(x); i++)
        if(x%i==0)
            return false;
    return true;
}
void in()
{
    for(int i=1; i<=n; i++)
        if(b[i]==1)
            cout<<a[i]<<" ";
    cout<<endl;
}
void xuli()
{
    int tong=0;
    for(int i=1; i<=n; i++)
        if(b[i]==1)
            tong+=a[i];
    if(kt(tong))
        in();

}
void pps(int x)
{
    for(int i=0; i<=1; i++)
    {
        b[x]=i;
        if(x==n) xuli();
        else
            pps(x+1);
    }
}
int main()
{
    freopen("DQBN22.INP","r",stdin);
    freopen("DQBN22.OUT","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    pps(1);
    return 0;
}
