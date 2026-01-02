#include <bits/stdc++.h>
using namespace std;
int n;
vector<int>a;
void sub1()
{
    int dem=0;
    for(int i=0; i<n-1; i++)
        for(int j=i+1; j<n; j++)
            if(a[i]+a[j]==0)
                dem++;
    cout<<dem;
}
void sub2()
{
    long long dem = 0;
    sort(a.begin(), a.end());

    for(int i = 0; i < n - 1; i++)
    {
        int x = -a[i];
        auto l = lower_bound(a.begin() + i + 1, a.end(), x);
        auto r = upper_bound(a.begin() + i + 1, a.end(), x);
        dem += (r - l);
    }
    cout << dem;
}
int main()
{
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        int k;
        cin>>k;
        a.push_back(k);
    }
    if(n<=3000)
        sub1();
    else sub2();
    return 0;
}
