#include <bits/stdc++.h>
using namespace std;
int n;
long long a[100000];
int main()
{
    freopen("DP_A1.INP","r",stdin);
    freopen("DP_A1.OUT","w",stdout);
    cin>>n;
    a[1]=1;
    a[2]=1;
    for(int i=3; i<=10000; i++)
        a[i]=a[i-2]+a[i-1];
    for(int i=1; i<=n; i++)
    {
        int k;
        cin>>k;
        cout<<a[k]<<endl;
    }
    return 0;
}
