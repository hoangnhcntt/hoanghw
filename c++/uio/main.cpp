#include <bits/stdc++.h>
using namespace std;
int n,a[10000][10000],m,tong=0,rmax;
bool kt(int x)
{
    int songuoc=0;
    int sogoc=x;
    while(x>0)
    {
        songuoc*=10;
        songuoc+=x%10;
        x/=10;
    }
    if(sogoc==songuoc)
        return true;
    return false;
}
int main()
{
    cin>>n>>m;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=m; j++)
            cin>>a[i][j];
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            tong*=10;
            tong+=a[j][i];
        }
        if(kt(tong)==true)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        tong=0;
    }
    return 0;
}
