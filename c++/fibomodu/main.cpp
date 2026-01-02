#include <bits/stdc++.h>
using namespace std;
int n;
int main()
{
    cin>>n;
    int f[1000000];
    f[0]=0;
    f[1]=1;
    for(int i=2;i<=n;i++)
        f[i]=(f[i-1]+f[i-2])%(pow(10,9)+7);
    cout<<f[n];
    return 0;
}
