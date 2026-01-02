#include <bits/stdc++.h>
using namespace std;
int a[1000], b[1000], c[1000];
int f(int n, int m, int p)
{
    sort(a, a + n);
    sort(b, b + m);
    sort(c, c + p);
    int minhehe =1e9;
    for (int i = 0, j = 0, k = 0; i < n && j < m && k < p;)
    {
        int ai = a[i], bj = b[j], ck = c[k];
        int chehe = pow(abs(ai - bj),2) + pow(abs(bj - ck),2) + pow(abs(ck - ai),2);
        minhehe = min(minhehe, chehe);
        if (ai <= bj && ai <= ck) i++;
        else if (bj <= ai && bj <= ck) j++;
        else k++;
    }
    return minhehe;
}

int main()
{
    freopen("macbles.inp","r",stdin);
    freopen("macbles.out","w",stdout);
    int n, m, p;
    cin >> n >> m >> p;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];
    for (int i = 0; i < p; i++)
        cin >> c[i];
    cout << f(n, m, p);
    return 0;
}
