#include <bits/stdc++.h>
using namespace std;
int n,res=-1e9,k,a[100000],c[10000],b[100000];
void in()
{
    for(int i=1;i<=n;i++)
        cout<<b[i];
    cout<<endl;
}
void pps(int x)
{
    for(int i=0; i<=k-1; i++)
    {
        b[x]=i;
        if(x==k) in();
        else pps(x+1);
    }
}
int main()
{
    freopen("KPHAN.INP","r",stdin);
    freopen("KPHAN.OUT","w",stdout);
    cin>>n>>k;
    pps(1);
    return 0;
}
