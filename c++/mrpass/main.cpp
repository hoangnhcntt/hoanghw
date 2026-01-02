#include <bits/stdc++.h>
using namespace std;
long long a[100000],n,k;
int main()
{
    cin>>n>>k;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=n;i>=n-k+1;i--)
        cout<<a[i];
    return 0;
}
