#include <bits/stdc++.h>
using namespace std;
int n,k,tong,a[1000],rmax;
int main()
{
    cin>>n>>k;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    for(int i=1; i<=n; i++)
        g[i]=0;
    for(int i=1;i<=k;i++)
        tong+=a[i];
    for(int i=1; i<=n; i++)
       {
           tong=tong-a[i]+a[i+k];
           rmax=max(rmax,tong);
       }
    cout<<rmax;
    return 0;
}
