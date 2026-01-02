#include <bits/stdc++.h>
using namespace std;
int n,a[1000],b[10000];
void sxnp(int x)
{
    for(int i=1; i<=x; i++)
        for(int j=1; j<=x; j++)
        {
            if(a[i]>a[j])
            {
                swap(a[i],a[j]);
                swap(b[i],b[j]);
            }
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
    sxnp(n);
    for(int i=1; i<=n; i++)
        cout<<b[i]<<" ";
    return 0;
}
