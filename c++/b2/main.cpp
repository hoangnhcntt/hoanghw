#include <bits/stdc++.h>
using namespace std;
int n;
int main()
{
    cin>>n;
    int f[100000];
    f[1]=1;
    f[2]=2;
    for(int i=3;i<=n;i++)
        f[i]=f[i-1]+f[i-2];
    cout <<f[n];
    return 0;
}
