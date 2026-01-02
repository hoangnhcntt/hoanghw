#include <bits/stdc++.h>
using namespace std;
int n;
int rmax=-1e9,rmin=1e9;
int main()
{
    cin>>n;
    int a[100000];
    int g[100000];
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+1+n);
    for(int i=1; i<=n; i++)
    {
        if(a[i]==a[i-1])
            g[i]=g[i-1]+1;
    }
    int rmax=*max_element(g+1,g+1+n);
    for(int i=1; i<=n; i++)
        if(g[i]==rmax)
            rmin=min(rmin,a[i]);
    cout<<rmin;
    return 0;
}
