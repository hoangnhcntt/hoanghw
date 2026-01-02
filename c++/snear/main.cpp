#include <bits/stdc++.h>
using namespace std;
int n,a[100000],k,rmax;
int tong(int u,int v)
{
    int tong=0;
    for(int i=u; i<=v; i++)
        tong+=a[i];
    return tong;
}
int main()
{
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    cin>>k;
    for(int i=1; i<=n; i++)
        if(tong(i,i+2)<=k)
            rmax=max(rmax,tong(i,i+2));
    for(int i=1; i<=n; i++)
        if(rmax==tong(i,i+2))
            cout<<a[i]<<" "<<a[i+1]<<" "<<a[i+2];
    return 0;
}
