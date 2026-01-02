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
    sort(c.begin(),c.end());
    cout<<c[n-1]-c[0];
    return 0;
}
