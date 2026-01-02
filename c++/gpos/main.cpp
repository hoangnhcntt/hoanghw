#include <bits/stdc++.h>
using namespace std;
long long n,a[100000],c[1000000],k=0;
bool check(int x,int y)
{
    long long tong1=0;
    for(int i=1; i<=y-1; i++)
        tong1+=a[i];
    if(tong1==x)
        return true;
    else
        return false;
}
int main()
{
    freopen("GPOS.INP","r",stdin);
    freopen("GPOS.OUT","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    for(int i=1; i<=n; i++)
        if(check(a[i],i)==true)
            c[++k]=i;
    if(k!=0)
    {
        cout<<k<<endl;
        for(int i=1; i<=k; i++)
            cout<<c[i]<<" ";
    }
    else
        cout<<-1;
    return 0;
}
