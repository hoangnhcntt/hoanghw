#include <bits/stdc++.h>
using namespace std;
int n,a[10000],rmax,k;
int tong(int u,int v)
{
    int h=0,sl=0;
    for(int i=u; i<=v; i++)
    {
        h+=a[i];
        sl++;
    }
    if(h==k)
        return sl;
}
int main()
{
    cin>>n>>k;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    for(int i=1; i<=n-1; i++)
        for(int j=i+1; j<=n; j++)
            rmax=max(rmax,tong(i,j));

    if(rmax==0)
        cout<<"NONE";
    else cout<<rmax;
    return 0;
}
