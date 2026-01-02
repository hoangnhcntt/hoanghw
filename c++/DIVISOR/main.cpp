#include <bits/stdc++.h>
using namespace std;
int n,a[10000];
long long m=1;
int dem(int x)
{
    int sl=0;
    for(int i=1; i<=sqrt(x); i++)
        if(x%i==0)
        {
            sl++;
            if(i!=x/i) sl++;
        }
    return sl;
}
int main()
{
    freopen("DIVISOR.INP","r",stdin);
    freopen("DIVISOR.OUT","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    for(int i=1; i<=n; i++)
        m*=a[i];
    cout<<dem(m);
    return 0;
}
