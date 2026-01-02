#include <bits/stdc++.h>
using namespace std;
int x,n,a[100000];
int main()
{
    cin>>n>>x;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    for(int i=1; i<=n; i++)
        rmax=max(rmax,a[i]);
    for(int i=1; i<=n; i++)
    {
        if(a[i]==rmax)
            cout<<x;
        else
            cout<<a[i];
    }
}
