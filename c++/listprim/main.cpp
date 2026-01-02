#include <bits/stdc++.h>
using namespace std;
int n;
int a[100000];
int g[100000];
int rmax;
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
    for(int i=1; i<=n; i++)
        if(nt(a[i]))
            g[i]=g[i-1]+1;
    for(int i=1; i<=n; i++)
        rmax=max(rmax,g[i]);
    cout<<rmax;
}
void sub2()
{
    int maxA = *max_element(a+1, a+n+1);
    sangera(maxA);
    for (int i=1; i<=n; i++)
        if (f[a[i]])
            g[i] = g[i-1] + 1;
        else
            g[i] = 0;

    for (int i=1; i<=n; i++)
        rmax = max(rmax, g[i]);
    cout << rmax;
}
int main()
{
    freopen("LISTPRIM.INP","r",stdin);
    freopen("LISTPRIM.OUT","w",stdout);
    cin>>n;
    for(int i=1;i<=n; i++)
        cin>>a[i];
    for(int i=1;i<=n;i++)
        g[i]=0;
    if(n<10000)
        sub2();
    else sub1();
    return 0;
}
