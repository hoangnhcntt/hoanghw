#include <bits/stdc++.h>
using namespace std;
int n;
vector<int> c;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int k;
        cin>>k;
        c.push_back(k);
    }
    for(int i:c)
        cout<<i<<" ";
    return 0;
}
