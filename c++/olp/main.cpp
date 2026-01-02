#include <bits/stdc++.h>
using namespace std;
int n,a[100000];
int k=0,g[100000],sl;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    sort(a+1,a+1+n);
    for(int i=1;i<=n;i++)
        if(a[i]!=a[i+1])
           g[++k]=a[i];
    sl=n-k;
    cout<<sl;
    return 0;
}
