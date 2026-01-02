#include <bits/stdc++.h>
using namespace std;
int n;
vector<int> c;
double tong;
int sl=0;
int l;
int main()
{
    cin>>n>>l;
    for(int i=1; i<=n; i++)
    {
        int k;
        cin>>k;
        c.push_back(k);
    }
    for(auto x:c)
        if(l==x)
         sl++;
    cout<<sl;
    return 0;
}
