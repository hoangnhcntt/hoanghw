#include <bits/stdc++.h>
using namespace std;
int n,b[1000],sl=0;
bool kt(int k)
{
    for(int i=1; i<=k; i++)
        if(b[i]==1 && b[i+1]==1)
            return false;
    return true;
}
void xuli()
{
    if(kt(n)==true)
        sl++;
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
    cout<<sl;
    return 0;
}
