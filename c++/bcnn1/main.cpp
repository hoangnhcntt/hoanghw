#include <bits/stdc++.h>
using namespace std;
int n,m;
int main()
{
    freopen("MAA4.INP","r",stdin);
    freopen("MAA4.OUT","w",stdout);
    cin>>n>>m;
    for(int i=min(n,m); i<=n*m;i++)
        if(n%i==0 && m%i==0)
        {
            cout<<i;
            break;
        }
    return 0;
}
