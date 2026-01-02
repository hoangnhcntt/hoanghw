#include <bits/stdc++.h>
using namespace std;
int n;
int main()
{
    int a[100][100];
    cin>>n;
    int m=n;
    int b[100][100];
    int k=0;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=m; j++)
            a[i][j]=++k;
    for(int i=1; i<=m; i++)
        for(int j=1; j<=n; j++)
            b[j][m-i+1]=a[i][j];
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
            cout<<b[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
