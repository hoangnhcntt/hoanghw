#include <bits/stdc++.h>
using namespace std;
int n,b[1000];
bool kt(int k)
{
    int sl0=0,sl1=0;
    for(int i=1; i<=k; i++)
    {
        if(b[i]==0) sl0++;
        else sl1++;
    }
    if(sl0==sl1)
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
    cin>>n;
    pps(1);
    return 0;
}
