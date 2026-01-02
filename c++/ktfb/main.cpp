#include <bits/stdc++.h>
using namespace std;
int n;
bool kt(int x)
{
    if(x==0) return true;
    int f1=0;
    int f2=1;
    int f=f1+f2;
    while(f<x)
    {
        f1=f2;
        f2=f;
        f=f1+f2;
    }
    if(f==x) return true;
    return false;
}
int main()
{
    cin>>n;
    int a[10000];
    a[1]=0;
    a[2]=1;
    for(int i=3; i<=55; i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
    cout<<a[n];
    return 0;
}
