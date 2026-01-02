#include <bits/stdc++.h>
using namespace std;
bool isSafe(const vector<int> a, int K)
{
    for (size_t i=1;i<a.size(); ++i)
    {
        if (abs(a[i]-a[i-1])<= K)
        {
            return false;
        }
    }
    return true;
}
int c(vector<int> s, int K)
{
    int dem = 0;
    sort(s.begin(), s.end());
    do
    {
        if (isSafe(s, K))
        {
            ++dem;
        }
    }
    while (next_permutation(s.begin(), s.end()));
    return dem;
}
int main()
{
    freopen("DANTOAN.INP","r",stdin);
    freopen("DANTOAN.OUT","w",stdout);
    int N, K;
    cin >> N >> K;
    vector<int> s(N);
    for (int i = 0; i < N; ++i)
        cin >> s[i];
    int r = c(s, K);
    cout<<r;
    return 0;
}
