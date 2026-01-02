#include <bits/stdc++.h>
using namespace std;
int n,a[100000],g[10000],rmax;
int main()
{
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    for(int i=1; i<=n; i++)
        g[i]=1;
    sort(a+1,a+1+n);
    for(int i=1; i<=n; i++)
        if(a[i]==a[i-1])
        {
            g[i]=g[i-1]+1;
        }
    for(int i=1; i<=n; i++)
        rmax=max(rmax,g[i]);
    for(int i=1; i<=n; i++)
        if(rmax==g[i])
            cout<<a[i]<<endl;
    cout<<rmax;
    return 0;
}
