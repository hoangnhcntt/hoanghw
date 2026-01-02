#include <bits/stdc++.h>
using namespace std;
int n,m,sl=0;
int tong(int x)
{
    int ton=0;
    for(int i=1; i<x; i++)
    {
        if(x%i==0)
            ton+=i;
    }
    return ton;
}
int main()
{
    cin>>n>>m;
    for(int i=n; i<=m; i++)
        if(tong(i)>i)
            sl++;
    cout <<sl;
    return 0;
}
