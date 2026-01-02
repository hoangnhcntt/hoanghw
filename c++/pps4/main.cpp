#include <bits/stdc++.h>
using namespace std;
int n,b[1000],k;
bool kt(int x)
{
    int sl0=0,sl1=0;
    for(int i=1; i<=x; i++)
    {
        if(b[i]==1) sl1++;
    }
    if(sl1<=k)
        return true;
    return false;
}
void in()
{
    for(int i=1; i<=n; i++)
        cout<<b[i]<<" ";
    cout<<endl;
}
void xuli()
{
        if(kt(n)==true)
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
    cin>>n>>k;
    pps(1);
    return 0;
}
