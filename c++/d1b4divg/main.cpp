#include <bits/stdc++.h>
using namespace std;
int n,a[100000],g[100000];
int main()
{
    int rmax;
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    sort(a+1,a+1+n);
    for(int i=1; i<=n; i++)
        g[i]=1;
    for(int i=1; i<=n; i++)
    {
        if(a[i]==a[i-1])
            g[i]=g[i-1]+1;
        else
            g[i]=1;
    }
    for(int i=1; i<=n; i++)
        rmax=max(rmax,g[i]);
    cout <<rmax;
    return 0;
}
