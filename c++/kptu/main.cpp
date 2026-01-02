#include <bits/stdc++.h>
using namespace std;
int n;
int a[10000],k;
int tong=0;
int main()
{
    freopen("KPTU.INP","r",stdin);
    freopen("KPTU.OUT","w",stdout);
    cin>>n>>k;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=n-k+1;i<=n;i++)
        tong+=a[i];
    cout <<tong;
    return 0;
}
