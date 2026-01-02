#include <bits/stdc++.h>
using namespace std;
int m,n,a[1000][1000];
int main()
{
    freopen("BAI806.INP","r",stdin);
    freopen("BAI806.OUT","w",stdout);
    cin>>m>>n;
    for(int i=1; i<=m; i++)
        for(int j=1; j<=n; j++)
            cin>>a[i][j];
    int i=1;
    while(i<=m)
    {
        int tong=0;
        for(int j=1; j<=n; j++)
            tong+=a[i][j];
        i++;
        cout<<tong<<" ";
    }
    cout<<endl;
    int v=1;
    while(v<=n)
    {
        int tong=0;
        for(int l=1;l<=m;l++)
            tong+=a[l][v];
        v++;
        cout<<tong<<" ";
    }
    return 0;
}
