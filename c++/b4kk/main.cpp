#include <bits/stdc++.h>
using namespace std;
vector<int> c;
int n,k;
int rmax=1e9;
int main()
{
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>k;
        c.push_back(k);
    }
    for(auto x:c)
        rmax=min(rmax,x);
        cout<<rmax;
    return 0;
}
