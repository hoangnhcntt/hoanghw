#include <bits/stdc++.h>
using namespace std;
int n;
vector<int> c;
int main()
{
    freopen("DQHV1.INP","r",stdin);
    freopen("DQHV1.OUT","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
        c.push_back(i);
    do
    {
        for(auto x:c)
            cout<<x<<" ";
        cout<<endl;
    }
    while(next_permutation(c.begin(),c.end()));
        return 0;
}
