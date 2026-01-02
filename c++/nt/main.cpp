#include <bits/stdc++.h>
using namespace std;
int n,m,a[1000][10000];
bool nt(int x)
{
    if(x<2) return false;
    if(x<4) return true;
    for(int i=2; i*i<=x; i++)
        if(x%i==0)
            return false;
    return true;
}
int main()
{
    cin>>n>>m;
    for(int i=1; i<=m; i++)
        for(int j=1; j<=n; j++)
            cin>>a[i][j];
    for(int i=1; i<=m; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(nt(a[i][j])==true)
                cout<<i<<" "<<j;
        }
        cout<<endl;
    }
    return 0;
}
