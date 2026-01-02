#include <bits/stdc++.h>
using namespace std;
int n,a[10000];
int main()
{
    freopen("BPRG.INP","r",stdin);
    freopen("BPRG.OUT","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    sort(a+1,a+1+n);
    for(int i=n; i>=1; i--)
        cout<<a[i]<<" ";
    cout<<endl;
    for(int i=1; i<=n; i++)
        cout<<a[i]<<" ";
    cout<<endl;
    cout<<abs(a[n]-a[1]);
    return 0;
}
