#include <bits/stdc++.h>
using namespace std;
vector<int>c;
int n,k;
void sub2()
{
    long long dem = 0;
    sort(c.begin(), c.end());
    for(int i = 0; i < n - 1; i++)
    {
        int x = k-c[i];
        auto l = lower_bound(c.begin()+ i + 1, c.end(), x);
        auto r = upper_bound(c.begin()+ i + 1, c.end(), x);
        dem += (r - l);
    }
    cout << dem;
}
int main()
{
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        int l;
        cin>>l;
        c.push_back(l);
    }
    cin>>k;
    sub2();
    return 0;
}
