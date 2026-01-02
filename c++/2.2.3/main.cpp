#include <bits/stdc++.h>
using namespace std;
int n,a[100000],sl=0;
void sxnp(int x)
{
    for(int i=1; i<=x-1; i++)
    {
        int j=i+1;
        if(a[i]>a[j])
        {
            swap(a[i],a[j]);
            sl++;
        }
    }
}
int main()
{
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    sxnp(n);
    cout<<sl;
    return 0;
}
