#include <bits/stdc++.h>
using namespace std;
int n,a[10000],b[10000];
void sxnp()
{
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            if(a[i]<=a[j])
            {
                swap(a[i],a[j]);
                swap(b[i],b[j]);
            }
}
int main()
{

    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        b[i]=i;
    }
    sxnp();
    for(int i=1; i<=n; i++)
        cout<<b[i]<<" ";
    return 0;
}
