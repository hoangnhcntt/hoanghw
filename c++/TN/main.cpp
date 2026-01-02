#include <bits/stdc++.h>
using namespace std;
int n;
int main()
{
    //code by HoangHuyNguyen
    freopen("TN.INP","r",stdin);
    freopen("TN.OUT","w",stdout);
    int k;
    cin>>n>>m;
    k=n/__gcd(n,m)*m;
    cout <<k;
    return 0;
}
