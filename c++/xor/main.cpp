#include <bits/stdc++.h>
using namespace std;
int n,q,a[10000];
int skibidi(int l,int r)
{
    int res=0;
    for(int i=l; i<=r; i++)
        res ^= a[i];
    return res;
}
int main()
{
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    cin>>q;
    for(int j=1; j<=q; j++)
    {
        int m,i,v,l,r;
        cin>>m;
        if(m==1)
        {
            cin>>i>>v;
            a[i]=v;
        }
        if(m!=1)
        {
            cin>>l>>r;
            int e=skibidi(l,r);
            cout<<e<<endl;
        }
    }
    return 0;
}
