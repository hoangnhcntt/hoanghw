#include <bits/stdc++.h>
using namespace std;
int m,n,a[1000][1000];
int main()
{
    freopen("BAI805.INP","r",stdin);
    freopen("BAI805.OUT","w",stdout);
    cin>>m>>n;
    for(int i=1; i<=m; i++)
        for(int j=1; j<=n; j++)
            cin>>a[i][j];
    int i=1;
    while(i<=n)
    {
        int tong=1e9;
        for(int j=1; j<=m; j++)
            tong=min(tong,a[j][i]);
        i++;
        cout<<tong<<endl;
    }
    return 0;
}
