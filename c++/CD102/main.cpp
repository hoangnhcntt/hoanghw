#include <bits/stdc++.h>
using namespace std;
int n;
int main()
{
    freopen("CD102.INP","r",stdin);
    freopen("CD102.OUT","w",stdout);
    cin>>n;
    vector<int> c;
    int i;
    while(n>0)
    {
        i=n%2;
        n/=2;
        c.push_back(i);
    }
    for(int i=c.size()-1;i>=0;i--)
    {
        cout<<c[i];
    }
    return 0;
}
