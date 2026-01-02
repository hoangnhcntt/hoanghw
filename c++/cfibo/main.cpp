#include <bits/stdc++.h>
using namespace std;
int n;
int main()
{
    freopen("CFIBO.inp","r",stdin);
    freopen("CFIBO.out","w",stdout);
    cin>>n;
    int f=0;
    int f1=0;
    int f2=1;
    while(f<n)
    {
        cout<<f<<" ";
        f1=f2;
        f2=f;
        f=f1+f2;
    }
    return 0;
}
