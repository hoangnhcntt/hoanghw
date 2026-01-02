#include <bits/stdc++.h>
using namespace std;
int n,m,a[100][100];
int main()
{
    cin>>n>>m;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=m; j++)
            cin>>a[i][j];
    int s[100][100];
    s[0][0]=0;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
            s[i][j]=s[i][j-1]+s[i-1][j]-s[i-1][j-1]+a[i][j];
        }
            int res=-1e9;
    int p=min(m,n);
    for(int k=1; k<=p; k++)
        for(int i=1; i<=n; i++)
            for(int j=1; j<=m; j++)
            {
                int q=s[i+k-1][j+k-1]-s[i+k-1][j-1]-s[i-1][j+k-1]+s[i-1][j-1];
                if(q==k*k)
                    res=max(res,k);
            }
    cout<<res;
    return 0;
}
