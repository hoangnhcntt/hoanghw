#include <bits/stdc++.h>
using namespace std;
int n,a[100000],b[10000];
int main()
{
    cin>>n;
    int rmax=1e9;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        cin>>b[i];
    }
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
         rmax=min(rmax,abs(a[i]+b[j]));
    cout <<rmax;
    return 0;
}
