#include <bits/stdc++.h>
using namespace std;
vector<int> c;
int n,k;
int tong=0;
int main()
{
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>k;
        c.push_back(k);
    }
    for(auto x:c)
        tong+=x;
    cout<<tong;
    return 0;
}
