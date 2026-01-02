#include <bits/stdc++.h>
using namespace std;
int n,a[100000],b,c,rmin,tong;
int main()
{
    cin>>n>>b>>c;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    rmin=min(b,c);
    sort(a+1,a+1+n);
    for(int i=1; i<=n; i++)
    {
        if(a[i]==1)
            tong+=rmin;
        if(a[i]==2)
            tong+=b+c;
    }
    cout <<tong;
    return 0;
}
