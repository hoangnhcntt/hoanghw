#include <bits/stdc++.h>
using namespace std;
int n;
int main()
{
    freopen("bai6.inp","r",stdin);
    freopen("bai6.out","w",stdout);
    cin>>n;
    int i=1;
    long long s=0;
    s=(n*(n+1)*(2*n+1))/6;
    cout << s;
    return 0;
}
