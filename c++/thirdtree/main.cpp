#include <bits/stdc++.h>
using namespace std;
int n,a[100000],rmax1,rmax2,rmax3;
long long tong=0;
int main()
{
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        rmax1=max(rmax1,a[i]);
    }
    for(int i=1; i<=n; i++)
        if(rmax1>a[i])
            rmax2=max(rmax2,a[i]);
    for(int i=1; i<=n; i++)
        if(rmax2>a[i])
            rmax3=max(rmax3,a[i]);
    for(int i=1; i<=n; i++)
        if(a[i]!=rmax1 && a[i]!=rmax2 && a[i]!=rmax3)
            tong+=a[i];
    cout<<tong;
    return 0;
}
