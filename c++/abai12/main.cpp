#include <bits/stdc++.h>
using namespace std;
int n,k;
int main()
{
    freopen("abai12.inp","r",stdin);
    freopen("abai12.out","w",stdout);
    cin>>n>>k;
    while(n%k!=0)
    {
        n--;
    }
    cout <<n;
    return 0;
}
