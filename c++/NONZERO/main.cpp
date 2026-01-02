#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("NONZERO.INP","r",stdin);
    freopen("NONZERO.OUT","w",stdout);
    int k;
    cin>>k;
    for(int j=1; j<=k; j++)
    {
        int n;
        cin >> n;
        vector<long long> a(n);
        int buoc = 0;
        long long tong = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 0)
            {
                buoc++;
                a[i] = 1;
            }
            tong += a[i];
        }
        if (tong == 0) buoc++;
        cout << buoc << endl;
    }
    return 0;
}
