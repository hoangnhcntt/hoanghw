#include <bits/stdc++.h>
#include <string>
using namespace std;
int n,s=0;
int dem(int x)
{
    int so=0;
    while(x>0)
    {
        so++;
        x/=10;
    }
    return so;
}
int main()
{
    freopen("SHEEPS.INP","r",stdin);
    freopen("SHEEPS.OUT","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
        s+=dem(i);
    cout<<s;
    return 0;
}
