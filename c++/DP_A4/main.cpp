#include <bits/stdc++.h>
using namespace std;
int a[10000],n;
int t;
int s[10000];
int main()
{
    freopen("DP_A4.INP","r",stdin);
    freopen("DP_A4.OUT","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        s[i]=s[i-1]+a[i];
    }
    cin>>t;
    while(t--)
    {
        int p,k;
        cin>>p>>k;
        cout<<s[k]-s[p-1]<<endl;
    }
    return 0;
}
