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
    for(auto x:c)
        tong+=x;
    tong/=n;
    cout<<fixed<<setprecision(1)<<tong;
    return 0;
}
