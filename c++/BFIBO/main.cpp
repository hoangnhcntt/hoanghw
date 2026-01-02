#include <bits/stdc++.h>
using namespace std;
int n;
int main()
{
    freopen("BFIBO.INP","r",stdin);
    freopen("BFIBO.OUT","w",stdout);
    cin>>n;
    long long tong=0;
    long long a[100000];
    a[1]=1;
    a[2]=1;
    for(int i=3; i<=50; i++)
        a[i]=a[i-1]+a[i-2];
    for(int i=1; i<=50; i++)
        if(a[i]<n)
            tong+=a[i];
    cout <<tong;
    return 0;
}
