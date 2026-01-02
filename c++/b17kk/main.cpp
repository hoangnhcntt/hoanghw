#include <bits/stdc++.h>
using namespace std;
int n;
vector<int> c;
double tong;
int sl=0;
int main()
{
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        int k;
        cin>>k;
        c.push_back(k);
    }
    for(auto x:c)
        tong+=x;
    tong/=n;
    for(auto x:c)
        if(x>tong)
         sl++;
    cout<<sl;
    return 0;
}
