#include <bits/stdc++.h>
using namespace std;
int n;
int main()
{
    freopen("DP_A5.INP","r",stdin);
    freopen("DP_A5.OUT","w",stdout);
    cin>>n;
    long long r=0,rmax=-1e9;
    long long a;
    for(int i=1; i<=n; i++)
    {

        cin>>a;
        r=max(a,r+a);
        rmax=max(r,rmax);

    }
    cout<<rmax;
    return 0;
}
