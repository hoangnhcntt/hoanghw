#include <bits/stdc++.h>
using namespace std;
int n,q,a[100000];
int skibidi(int l,int r,int k)
{
    int c[100000],f=0;
    for(int i=l;i<=r;i++)
        c[++f]=a[i];
    sort(c+1,c+1+f,greater<int>());
    return c[k];
}
int main()
{
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    cin>>q;
    for(int j=1; j<=q; j++)
    {
        int m,i,v,l,r,k;
        cin>>m;
        if(m==1)
        {
            cin>>i>>v;
            a[i]=v;
        }
        if(m!=1)
        {
            cin>>l>>r>>k;
            int e=skibidi(l,r,k);
            cout<<e<<endl;
        }
    }
    return 0;
}
