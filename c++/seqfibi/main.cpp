#include <bits/stdc++.h>
using namespace std;
int n;
int main()
{
    cin>>n;
    int f[100000];
    f[1]=1;
    f[2]=1;
    for(int i=3;i<=50;i++)
        f[i]=f[i-1]+f[i-2];
    for(int i=1;i<=n;i++)
        cout<<f[i]<<" ";
    return 0;
}
