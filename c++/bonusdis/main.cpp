#include <bits/stdc++.h>
using namespace std;
int n,a[10000],sl;
bool nt(int x)
{
    if(x<2) return false;
    if(x<4) return true;
    for(int i=2;i*i<=x;i++)
        if(x%i==0)
        return false;
    return true;
}
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n;i++)
        if(nt(a[i])==true)
         sl++;
    cout <<sl;
    return 0;
}
