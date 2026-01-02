#include <bits/stdc++.h>
using namespace std;
int n,a[1000],k;

int main()
{
    cin>>n>>k;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n;i++)
        a[n+i]=a[i];
    for(int i=k+1;i<=n+k;i++)
        cout<<a[i]<<" ";
    return 0;
}
