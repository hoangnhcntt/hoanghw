#include <bits/stdc++.h>
using namespace std;
int n,a[10000],rmax;
int main()
{
    freopen("code.inp","r",stdin);
    freopen("code.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    sort(a+1,a+1+n);
    for(int i=1;i<=n;i++)
        if(a[i]-a[i-1]!=1)
           rmax=max(rmax,a[i]-1);
    cout <<rmax;
    return 0;
}
