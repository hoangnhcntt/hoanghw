#include <bits/stdc++.h>
using namespace std;
vector<int> c;
int n,k;
int rmax=1e9;
int sl=0;
int main()
{
    cin>>n>>k;
    for(int i=1; i<=n; i++)
    {
        int t;
        cin>>t;
        c.push_back(t);
    }
    for(auto x:c)
    {
        if(x%k==0)
        {
            cout<<x;
            break;
        }
    }
    return 0;
}
