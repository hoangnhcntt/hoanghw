#include <bits/stdc++.h>
using namespace std;
const int MAX_N = 100000;
long long prefixSum[MAX_N + 2];
long long getSum(int L, int R)
{
    return prefixSum[R] - prefixSum[L - 1];
}
int main()
{
    freopen("CHIADAY4.INP", "r", stdin);
    freopen("CHIADAY4.OUT", "w", stdout);
    int n;
    cin >> n;
    vector<long long> A(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> A[i];
    }
    prefixSum[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        prefixSum[i] = prefixSum[i - 1] + A[i];
    }
    prefixSum[n + 1] = prefixSum[n];
    long long maxRes = LLONG_MIN;
    for (int x1 = 1; x1 <= n; x1++)
    {
        for (int x2 = x1; x2 <= n; x2++)
        {
            for (int x3 = x2; x3 <= n + 1; x3++)
            {
                long long res = getSum(1, x1) - getSum(x1, x2) + getSum(x2, x3) - getSum(x3, n + 1);
                maxRes = max(maxRes, res);
            }
        }
    }
    cout << maxRes << endl;
    return 0;
}
