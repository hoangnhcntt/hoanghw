#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("VUONCAY.INP", "r", stdin);
    freopen("VUONCAY.OUT", "w", stdout);
    int M, N;
    cin >> M >> N;
    vector<vector<int>> garden(M, vector<int>(N));
    for (int i = 0; i < M; ++i)
        for (int j = 0; j < N; ++j)
            cin >> g[i][j];
    vector<int> c(N, 0);
    for (int j = 0; j < N; ++j)
        for (int i = 0; i < M; ++i)
            c[j] += g[i][j];
    for (int j = 0; j < N; ++j)
        cout << c[j] << " ";
    return 0;
}
