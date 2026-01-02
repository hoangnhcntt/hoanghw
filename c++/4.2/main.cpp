#include <bits/stdc++.h>
using namespace std;
int n,a[100000],sl=0,rmax,c[100000];
int main()
{
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    sort(a+1,a+1+n);
    for(int i=1; i<=n; i++)
        c[i]=1;
    for(int i=1; i<=n; i++)
    {
        if(a[i]==a[i-1])
            c[i]=c[i-1]+1;
    }
    for(int i=1; i<=n; i++)
    {
        rmax=max(rmax,c[i]);
    }
    for(int i=1; i<=n; i++)
        if(c[i]==rmax)
            cout<<a[i]<<" "<<rmax<<endl;
    return 0;
}
