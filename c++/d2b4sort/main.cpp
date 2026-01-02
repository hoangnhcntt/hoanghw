#include <bits/stdc++.h>
using namespace std;
int n,a[10000],k,sl;
int main()
{
    cin>>n>>k;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            if(a[i]+a[j]==k)
                sl++;
    cout <<sl;
    return 0;
}
