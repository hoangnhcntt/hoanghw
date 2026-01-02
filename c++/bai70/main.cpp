#include <bits/stdc++.h>
using namespace std;
vector<int> c;
long long n;
int main()
{
    freopen("BAI70.INP","r",stdin);
    freopen("BAI70.OUT","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        long long k;
        cin>>k;
        c.push_back(k);
    }
    for(int i=1; i<=n; i++)
    {
        c.push_back(c[i-1]);
    }
    for(int x:c)
        cout<<x<<" ";
    return 0;
}
