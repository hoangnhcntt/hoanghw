#include <bits/stdc++.h>
using namespace std;
long long n,a[100000],x,y,z,q;
long long th(int u,int v)
{
    long long s=1e9;
    for(long long i=u; i<=v; i++)
        s=min(s,a[i]);
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
            cout<<th(y,z)<<endl;
    }
    return 0;
}
