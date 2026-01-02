#include <bits/stdc++.h>
using namespace std;
int n,k,b[10000],a[10000];
;int main()
{
    cin>>n>>k;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=k;i++)
        cin>>b[i];
    for(int i=1;i<=n;i++)
      for(int j=1;j<=k;j++)
        if(a[i]==b[j])
          cout<<i<<" ";
    return 0;
}
