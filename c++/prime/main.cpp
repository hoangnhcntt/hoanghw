#include <bits/stdc++.h>
using namespace std;
long long n, tong = 0;
bool f[1000005];
bool nt(long long x)
{
    if (x < 2) return false;
    if (x == 2 || x == 3) return true;
    if (x % 2 == 0) return false;
    for (long long i = 3; i * i <= x; i += 2)
        if (x % i == 0)
            return false;
    return true;
}
void sangera(int u)
{
    memset(f, true, sizeof(f));
    f[0] = f[1] = false;
    for (int i = 2; i * i <= u; i++)
        if (f[i])
            for (int j = i * i; j <= u; j += i)
                f[j] = false;
}
void sub1()
{
    for (int i = 2; i <= n; i++)
        if (nt(i))
            tong += i;
    cout << tong << endl<<" ";
    if(nt(tong))
        cout<<"YES";
    else
        cout<<"NO";
}
void sub2()
{
    sangera(n);
    for (int i = 2; i <= n; i++)
        if (f[i])
            tong += i;
    cout << tong << endl;
    if(nt(tong))
        cout<<"YES";
    else
        cout<<"NO";
}

int main()
{
    freopen("PRIME.INP","r",stdin);
    freopen("PRIME.OUT","w",stdout);
    cin >> n;
    if (n <= 1000000)
        sub2();
    else
        sub1();
    return 0;
}
