#include <bits/stdc++.h>
using namespace std;
vector<int> c;
int n,k;
int rmax=1e9;
int sl=0;
int main()
{
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>k;
        c.push_back(k);
    }
    for(auto x:c)
        if(x%2==1)
            sl++;
    cout<<sl;
    return 0;
}
