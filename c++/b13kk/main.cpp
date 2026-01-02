#include <bits/stdc++.h>
using namespace std;
int n;
vector<int> c;
double tong;
int main()
{
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        int k;
        cin>>k;
        c.push_back(k);
    }
    sort(c.begin(),c.end());
    for(auto x:c)
        cout<<x<<" ";
    return 0;
}
