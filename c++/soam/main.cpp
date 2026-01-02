#include <bits/stdc++.h>
using namespace std;
int n,a[10000],rmax=-1e9;
int main()
{
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    for(int i=1; i<=n; i++)
        if(a[i]<0)
            rmax=max(rmax,a[i]);
    cout <<rmax;
    return 0;
}
