#include <bits/stdc++.h>
using namespace std;
int n;
int f;
int main()
{
    freopen("abai8.inp", "r", stdin);
    freopen("abai8.out", "w", stdout);
    cin>>n;
    f=(n*(n+1)*(2*n+1))/6;
    cout <<f;
    return 0;
}
