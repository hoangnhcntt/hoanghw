#include <bits/stdc++.h>
using namespace std;
int sl,n,k,a[10000],b[10000],rmax=0;
void xuli()
{
    int s=0;
    sl=0;
    for(int i=1; i<=n; i++)
        if(b[i]==1)
        {
            s+=a[i];
            sl++;
        }
    if(s<=k)
        rmax=max(rmax,sl);
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
    cin>>n>>k;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    pps(1);
    if(rmax!=0)
        cout <<rmax;
    else
        cout<<-1;
    return 0;
}
