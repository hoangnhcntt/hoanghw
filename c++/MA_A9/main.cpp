#include <bits/stdc++.h>
using namespace std;
int n,m;
int a[10000];
int main()
{
    freopen("MA_A9.INP","r",stdin);
    freopen("MA_A9.OUT","w",stdout);
    cin>>n>>m;
    a[1]=n*n;
    for(int i=2;i<=m;i++)
    {
        a[i]=(a[i-1]%10)*n;
    }
    cout<<a[m-1]%10;
    return 0;
}
