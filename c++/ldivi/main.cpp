#include <bits/stdc++.h>
using namespace std;
void UOC(int x)
{
    int a[10000], k = 0;
    for (int i = 1; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            a[k++] = i;
            if (i != x / i)
                a[k++] = x / i;
        }
    }
    sort(a, a + k);
    for (int i = 0; i < k; i++) cout << a[i] << " ";
    cout << endl;
}
int main()
{
    freopen("LDIVI.INP","r",stdin);
    freopen("LDIVI.OUT","w",stdout);
    int M, N;
    cin >> M >> N;
    UOC(M);
    UOC(N);
    return 0;
}
