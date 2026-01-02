#include <bits/stdc++.h>
using namespace std;
int n,a[100000],x,y,z,q;
long long tongdoan(int u,int v)
{
    long long s=0;
    for(int i=u; i<=v; i++)
        s+=a[i];
    return s;
}
int main()
{
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    cin>>q;
    for(int i=1; i<=q; i++)
    {
        cin>>x>>y>>z;
        if(x==1) a[y]=z;
        else
            cout<<tongdoan(y,z);
    }
    return 0;
}
