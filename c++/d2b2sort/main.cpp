#include <bits/stdc++.h>
using namespace std;
int n,a[10000],k,tong;
int main()
{
    cin>>n>>k;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    sort(a+1,a+1+n);
    for(int i=1;i<=n;i++)
        tong+=a[n-k+i];
    cout << tong;
    return 0;
}
