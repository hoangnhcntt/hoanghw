#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    vector<int> c;
    cin>>n;
    for(int i=1; i<=n*2; i++)
    {
        int k;
        cin>>k;
        c.push_back(k);
    }
    sort(c.begin(),c.end());
    for(int x:c)
        cout<<x<<" ";
    return 0;
}
