#include <bits/stdc++.h>
using namespace std;
int n;
int a[10000],c[100000],d[100000],k;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n;i++)
        c[i]=1;
    sort(a+1,a+1+n);
    for(int i=1;i<=n;i++)
        if(a[i]==a[i-1])
          c[i]=c[i-1]+1;
    for(int i=1;i<=n;i++)
        rmax=max(rmax,c[i]);
    for(int i=1;i<=n;i++)
        if(rmax==c[i])
          d[++k]=a[i];
    for(int i=1;i<=k;i++)
        cout<<d[i];
    return 0;
}
