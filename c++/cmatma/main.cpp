#include <bits/stdc++.h>
using namespace std;
void VALINO(long long n)
{
    long long uocNT[100];
    int dem = 0;
    if (n % 2 == 0)
    {
        uocNT[dem++] = 2;
        while (n % 2 == 0) n /= 2;
    }
    for (long long i = 3; i * i <= n; i += 2)
        if (n % i == 0)
        {
            uocNT[dem++] = i;
            while (n % i == 0) n /= i;
        }
    if (n > 1)
        uocNT[dem++] = n;
    for (int i = 0; i < dem; i++)
        cout << uocNT[i];
    cout << endl;
}
int main()
{
    freopen("CMATMA.INP", "r", stdin);
    freopen("CMATMA.OUT", "w", stdout);
    long long n;
    while (cin >> n)
        VALINO(n);
    return 0;
}
