#include <bits/stdc++.h>
using namespace std;
long long n,a[1000000],sotien,rmin=1e9;
int main()
{
    freopen("fish.inp","r",stdin);
    freopen("fish.out","w",stdout);
    cin>>n;
    int sl=n;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    for(int i=1; i<=n; i++)
        rmin=min(rmin,a[i]);
    for(int i=1; i<=n; i++)
    {
        if(a[i]==rmin)
        {
            sotien+=sl*3*a[i];
            break;
        }
        if(a[i]!=rmin)
        {
            sotien+=a[i]*3;
            sl--;
        }
    }
    cout <<sotien;
    return 0;
}
